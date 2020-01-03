unit ufrmCloudAzure;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants,
  Vcl.Graphics, Vcl.FileCtrl, Vcl.Controls, Vcl.Forms, Vcl.Dialogs,
  Vcl.StdCtrls, Vcl.Grids, Vcl.ValEdit, Data.Cloud.AzureAPI, System.Classes,
  Data.Cloud.CloudAPI,
  System.Generics.Collections, Vcl.ComCtrls, uCloudAzure;

type
  TfrmCloudAzure = class(TForm)
    gbxContainers: TGroupBox;
    listViewContainers: TListView;
    btnCriarContainer: TButton;
    vleMetaContainer: TValueListEditor;
    gbxArquivos: TGroupBox;
    ListViewArquivos: TListView;
    vleMetaArquivo: TValueListEditor;
    btnUploadArquivo: TButton;
    btnDownloadArquivo: TButton;
    procedure FormShow(Sender: TObject);
    procedure ListViewArquivosChange(Sender: TObject; Item: TListItem;
      Change: TItemChange);
    procedure btnCriarContainerClick(Sender: TObject);
    procedure btnUploadArquivoClick(Sender: TObject);
    procedure btnDownloadArquivoClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure listViewContainersChange(Sender: TObject; Item: TListItem;
      Change: TItemChange);
  private
    FCloudAzure: TCloudAzure;
    FNomeCotainerCorrente: string;
    procedure CriaContainer;
    procedure UploadtoAzure(FileName: String;
      DisplayMsgCreatedBlob: boolean = false);
    procedure DonwloadAzure(FilePath: String);
    procedure CarregaListaContainers;
    procedure CarregaListaArquivos(NomeContainer: string);
    { Private declarations }
  public
    { Public declarations }
  end;

var
  frmCloudAzure: TfrmCloudAzure;

implementation

{$R *.dfm}

procedure TfrmCloudAzure.FormCreate(Sender: TObject);
begin
  FCloudAzure := TCloudAzure.create('seus_usuario',
    'sua_chave');
end;

procedure TfrmCloudAzure.FormShow(Sender: TObject);
begin
  CarregaListaContainers;
end;

procedure TfrmCloudAzure.ListViewArquivosChange(Sender: TObject;
  Item: TListItem; Change: TItemChange);
begin
  Screen.Cursor := crHourGlass;
  try
    // Obtem os metadados do arquivo que está sendo carregado
    vleMetaArquivo.Strings.Clear;
    vleMetaArquivo.Strings := FCloudAzure.ObtemMetadadosArquivo
      (FNomeCotainerCorrente, Item.Caption);
  finally
    Screen.Cursor := crDefault;
  end;
end;

procedure TfrmCloudAzure.listViewContainersChange(Sender: TObject;
  Item: TListItem; Change: TItemChange);
begin
  Screen.Cursor := crHourGlass;
  try
    // Obtem os metadados do container que está sendo carregado
    vleMetaContainer.Strings.Clear;
    vleMetaContainer.Strings := FCloudAzure.ObtemMetadadosContainer
      (Item.Caption);

    // armazena nome do container que está sendo carregado para ser passado
    // como parametro ao método que objtem os metadados do arquivo
    FNomeCotainerCorrente := Item.Caption;
    CarregaListaArquivos(Item.Caption);
  finally
    Screen.Cursor := crDefault;
  end;
end;

procedure TfrmCloudAzure.btnCriarContainerClick(Sender: TObject);
begin
  CriaContainer;
  CarregaListaContainers;
end;

procedure TfrmCloudAzure.UploadtoAzure(FileName: String;
  DisplayMsgCreatedBlob: boolean);
var
  Metadados: TStrings;
begin
  Metadados := TStringList.create;
  try
    // Por padrão está sendo passado como metadado nome do criador da aplicação,
    // extensõ do arquivo, diretório de origem e e a data de criação,
    // leitor pode optar por criar uma tela para esta finalidade
    Metadados.Values['NomeArquivo'] := ExtractFileName(FileName);
    Metadados.Values['ExtensaoArquivo'] := ExtractFileExt(FileName);
    Metadados.Values['DiretorioOrigem'] := ExtractFilePath(FileName);
    Metadados.Values['DataCriacao'] := DateTimeToStr(now);

    if FCloudAzure.UploadAzure(FileName, listViewContainers.Selected.Caption,
      ExtractFileName(FileName), Metadados) then
      ShowMessage('Blob enviado com sucesso!');
  finally
    FreeAndNil(Metadados);
  end;
end;

procedure TfrmCloudAzure.DonwloadAzure(FilePath: String);
begin
  if FCloudAzure.DownloadAzure(listViewContainers.ItemFocused.Caption,
    ListViewArquivos.ItemFocused.Caption, FilePath) then
    ShowMessage('Blob baixado com sucesso!');
end;

procedure TfrmCloudAzure.CarregaListaContainers;
var
  ListaContainer: TStrings;
  NomeContainer: string;
begin
  ListaContainer := TStringList.create;
  try
    ListaContainer := FCloudAzure.ListaContainers;

    listViewContainers.Clear;
    ListViewArquivos.Clear;
    vleMetaContainer.Strings.Clear;
    vleMetaArquivo.Strings.Clear;

    for NomeContainer in ListaContainer do
      listViewContainers.AddItem(NomeContainer, nil);
  finally
    FreeAndNil(ListaContainer);
  end;
end;

procedure TfrmCloudAzure.btnDownloadArquivoClick(Sender: TObject);
var
  OpenSelDir: TFileOpenDialog;
begin
  if listViewContainers.Selected = nil then
    raise Exception.create('Favor selecionar um Container');

  if ListViewArquivos.Selected = nil then
    raise Exception.create('Favor selecionar um arquivo');

  // salva o arquivo no diretório selecionado abaixo
  OpenSelDir := TFileOpenDialog.create(Self);
  try
    OpenSelDir.Title := 'Selecione diretório';
    OpenSelDir.Options := [fdoPickFolders, fdoPathMustExist,
      fdoForceFileSystem];
    if OpenSelDir.Execute then
      DonwloadAzure(OpenSelDir.FileName);
  finally
    FreeAndNil(OpenSelDir);
  end;
end;

procedure TfrmCloudAzure.btnUploadArquivoClick(Sender: TObject);
var
  OpenSelFile: TOpenDialog;
begin
  if listViewContainers.Selected = nil then
    raise Exception.create('Favor selecionar um Container');

  OpenSelFile := TOpenDialog.create(Self);
  try
    // Envia arquivo selecionado para o windows azure blob storage
    if OpenSelFile.Execute then
      UploadtoAzure(OpenSelFile.FileName);
    CarregaListaArquivos(listViewContainers.ItemFocused.Caption);
  finally
    FreeAndNil(OpenSelFile);
  end;
end;

procedure TfrmCloudAzure.CarregaListaArquivos(NomeContainer: string);
var
  ListaArquivos: TStrings;
  NomeArquivo: string;
begin
  try
    ListaArquivos := TStringList.create;

    // Lista os arquivos referente o container que está sendo carregado
    ListaArquivos := FCloudAzure.ListaArquivos(NomeContainer);

    ListViewArquivos.Clear;
    vleMetaArquivo.Strings.Clear;
    for NomeArquivo in ListaArquivos do
      ListViewArquivos.AddItem(NomeArquivo, nil);
  finally
    FreeAndNil(ListaArquivos);
  end;
end;

procedure TfrmCloudAzure.CriaContainer;
var
  NomeContainer: string;
  Metadados: TStrings;
begin
  Metadados := TStringList.create;
  try
    // Obtem o nome de um novo container
    if InputQuery('Novo Container', 'Nome: ', NomeContainer) then
    begin
      // Por padrão está sendo passado como metadado nome do criador da //
      // aplicação e a data de criação, leitor pode optar por criar uma tela
      // para esta finalidade
      Metadados.Values['CriadoPor'] := 'Rafael Pimenta';
      Metadados.Values['DataCriacao'] := DateTimeToStr(now);

      if FCloudAzure.CriarContainer(NomeContainer, Metadados) then
        ShowMessage('Container criado com sucesso!');
    end;
  finally
    FreeAndNil(Metadados);
  end;
end;

end.
