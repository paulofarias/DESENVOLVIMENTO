unit uFrmCadastroUsuarios;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes,
  Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, uFrmCadastroBasico, System.Actions,
  Vcl.ActnList, Vcl.ImgList, Data.DB, Vcl.ComCtrls, Vcl.StdCtrls, Vcl.Buttons,
  Vcl.Grids, Vcl.DBGrids, Vcl.ExtCtrls, System.ImageList, Vcl.DBCtrls,
  Vcl.Menus, Vcl.ToolWin, FireDAC.Stan.Intf, FireDAC.Stan.Option,
  FireDAC.Stan.Param, FireDAC.Stan.Error, FireDAC.DatS, FireDAC.Phys.Intf,
  FireDAC.DApt.Intf, FireDAC.Stan.Async, FireDAC.DApt, FireDAC.Comp.DataSet,
  FireDAC.Comp.Client;

type
  TfrmCadastroUsuarios = class(TfrmCadastroBasico)
    edtNome: TEdit;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    edtLogin: TEdit;
    edtSenha: TEdit;
    DBNavigator1: TDBNavigator;
    ToolBar2: TToolBar;
    FDQuery1: TFDQuery;
    procedure acSalvarExecute(Sender: TObject);
    procedure acEditarExecute(Sender: TObject);
    procedure btnFiltrarClick(Sender: TObject);
    procedure acPesquisarExecute(Sender: TObject);
    procedure acImprimirExecute(Sender: TObject);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure FormCreate(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  frmCadastroUsuarios: TfrmCadastroUsuarios;

implementation

{$R *.dfm}

uses uDmPrincipal, uFuncoes{, uDmRelatorios};

procedure TfrmCadastroUsuarios.FormCreate(Sender: TObject);
begin
  inherited;
  Self.Width := 720;
  Self.Height := 480;
end;

procedure TfrmCadastroUsuarios.FormClose(Sender: TObject;
  var Action: TCloseAction);
begin
  inherited;
  Action := caFree;
  frmCadastroUsuarios := nil;
end;

procedure TfrmCadastroUsuarios.acEditarExecute(Sender: TObject);
begin
  inherited;
  {edtNome.Text  := DmDados.cdsUsuariosnome.AsString;
  edtLogin.Text := DmDados.cdsUsuarioslogin.AsString;
  edtSenha.Text := DmDados.cdsUsuariossenha.AsString;}
end;

procedure TfrmCadastroUsuarios.acImprimirExecute(Sender: TObject);
begin
  {DmRelatorios := TDmRelatorios.Create(nil);
  try
    DmRelatorios.frxReport.LoadFromFile(ExtractFilePath(Application.ExeName)+'relatorios\relCadUsuarios.fr3');
    DmRelatorios.frxReport.ShowReport();
  finally
    FreeAndNil(DmRelatorios);
  end;}
end;

procedure TfrmCadastroUsuarios.acPesquisarExecute(Sender: TObject);
begin
  inherited;
  {with DmDados do
  begin
    DmDados.cdsUsuarios.Close;
    DmDados.cdsUsuarios.CommandText := 'SELECT * FROM USUARIOS';
    DmDados.cdsUsuarios.Open;
  end;^}
end;

procedure TfrmCadastroUsuarios.acSalvarExecute(Sender: TObject);
begin
  if Trim(edtNome.Text) = '' then
  begin
    Application.MessageBox('Preencha o campo nome.','Aten��o',MB_OK+MB_ICONWARNING);
    edtNome.SetFocus;
    Abort;
  end;
  if Trim(edtLogin.Text) = '' then
  begin
    Application.MessageBox('Preencha o campo login.','Aten��o',MB_OK+MB_ICONWARNING);
    edtLogin.SetFocus;
    Abort;
  end;
  if (dsPrincipal.State in [dsInsert]) and (GetLoginCadastrado(trim(edtLogin.Text))) then
  begin
    Application.MessageBox('Login encontra-se cadastrado.', 'Aten��o', MB_OK+MB_ICONWARNING);
    edtLogin.SetFocus;
    Abort;
  end;
  if Trim(edtSenha.Text) = '' then
  begin
    Application.MessageBox('Preencha o campo senha.','Aten��o',MB_OK+MB_ICONWARNING);
    edtSenha.SetFocus;
    Abort;
  end;
  {with DmDados do
  begin
    if dsTabela.State in [dsInsert] then
      cdsUsuariosid.AsInteger         := GetId('ID','USUARIOS');
    cdsUsuariosnome.AsString          := trim(edtNome.Text);
    cdsUsuarioslogin.AsString         := trim(edtLogin.Text);
    cdsUsuariossenha.AsString         := trim(edtSenha.Text);
    cdsUsuariosstatus.AsString        := 'A';
    cdsUsuariosdt_cadastro.AsDateTime := now;
  end;}
  inherited;
end;

procedure TfrmCadastroUsuarios.btnFiltrarClick(Sender: TObject);
begin
  if edtPesquisar.Text = '' then
  begin
    Application.MessageBox('Informe um valor a ser pesquisado ou clique em Pesquisar.','Aten��o',MB_OK+MB_ICONWARNING);
    edtPesquisar.SetFocus;
    Abort;
  end;
  {with DmDados do
  begin
    cdsUsuarios.Close;
    case cbxFiltros.ItemIndex of
      0 : cdsUsuarios.CommandText := 'SELECT * FROM USUARIOS WHERE NOME  LIKE '+ QuotedStr('%' + edtPesquisar.Text + '%');
      1 : cdsUsuarios.CommandText := 'SELECT * FROM USUARIOS WHERE LOGIN LIKE '+ QuotedStr('%' + edtPesquisar.Text + '%');
    end;
    cdsUsuarios.Open;
  end;}
end;

end.
