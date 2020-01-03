unit UMenu;

interface

uses
  System.SysUtils, System.Types, System.UITypes, System.Classes, System.Variants,
  FMX.Types, FMX.Controls, FMX.Forms, FMX.Graphics, FMX.Dialogs, FMX.StdCtrls,
  FMX.TabControl, FMX.Edit, IdBaseComponent, IdComponent, IdTCPConnection,
  IdTCPClient, IdHTTP, DBxJSON,  FMX.Platform.Android, FMX.ListView.Types,
  FMX.ListView, MultiDetailAppearanceU;

type
  TFMenu = class(TForm)
    ToolBar1: TToolBar;
    Abas: TTabControl;
    Label1: TLabel;
    AbaMenu: TTabItem;
    BtnNovo: TButton;
    BtnPesquisa: TButton;
    BtnSair: TButton;
    AbaNovo: TTabItem;
    ToolBar2: TToolBar;
    BtnConfirmaContato: TSpeedButton;
    BtrnVoltarAbaContato: TSpeedButton;
    Label2: TLabel;
    EdtNome: TEdit;
    Label3: TLabel;
    EdtEmail: TEdit;
    Label4: TLabel;
    EdtTelefone: TEdit;
    IdHTTP1: TIdHTTP;
    AbaPesquisa: TTabItem;
    GrupoFiltro: TGroupBox;
    RBtnNome: TRadioButton;
    RBtnEmail: TRadioButton;
    RBtnTelefone: TRadioButton;
    GridContato: TListView;
    ToolBar3: TToolBar;
    BtnVoltarAbaPesquisa: TSpeedButton;
    procedure LimpaCamposContato;
    procedure BtnNovoClick(Sender: TObject);
    procedure BtnSairClick(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure BtnConfirmaContatoClick(Sender: TObject);
    procedure BtrnVoltarAbaContatoClick(Sender: TObject);
    procedure PesquisaContato(Filtro: Integer);
    procedure BtnPesquisaClick(Sender: TObject);
    procedure RBtnNomeChange(Sender: TObject);
    procedure BtnVoltarAbaPesquisaClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  FMenu: TFMenu;

  const
    URL  = 'http://192.168.0.7:8080/datasnap/rest/TServerMethods1/';

implementation

{$R *.fmx}

{ TFMenu }

procedure TFMenu.BtnConfirmaContatoClick(Sender: TObject);
Var
  Contato: TJsonObject;
  lJSO : String;
  jSonToSend: TStringStream;
  lResponse: String;
begin
if EdtNome.Text='' then
  ShowMessage('Preencha o Nome.')
Else
  Begin
    Contato:=TJsonObject.Create;
    Contato.AddPair('Nome',    TJSONString.Create(EdtNome.Text));
    Contato.AddPair('Email',   TJSONString.Create(EdtEmail.Text));
    Contato.AddPair('Telefone',TJSONString.Create(EdtTelefone.Text));

    lJSO     := Contato.ToString;
    jSonToSend := TStringStream.Create(lJSO,TEncoding.UTF8);
    IdHTTP1.Request.ContentType := 'application/json';
    lResponse := IdHTTP1.Post(URL+'insereContato',jSonToSend);
    jSonToSend.Free;

    if Copy(lResponse,13,3)='OK!' then
      Begin
        ShowMessage('Contato cadastrado com sucesso!');
        LimpaCamposContato;
      End
    Else
      Begin
        ShowMessage('Erro ao salvar, tente novamente'
          +slinebreak+'Erro: '+Copy(lResponse,11,length(lResponse)));
      End;
  End;
end;

procedure TFMenu.BtnNovoClick(Sender: TObject);
begin
LimpaCamposContato;
Abas.ActiveTab:=AbaNovo;
end;

procedure TFMenu.BtnPesquisaClick(Sender: TObject);
begin
RBtnNome.IsChecked:=True;
PesquisaContato(0);
Abas.ActiveTab:=AbaPesquisa;
end;

procedure TFMenu.BtnSairClick(Sender: TObject);
begin
MainActivity.finish;
end;

procedure TFMenu.BtnVoltarAbaPesquisaClick(Sender: TObject);
begin
Abas.ActiveTab:=AbaMenu;
end;

procedure TFMenu.BtrnVoltarAbaContatoClick(Sender: TObject);
begin
Abas.ActiveTab:=AbaMenu;
end;

procedure TFMenu.FormShow(Sender: TObject);
begin
idHTTP1.Request.Username:='devmedia';
idHTTP1.Request.Password:='devmedia';
idHTTp1.ReadTimeout   :=5000;
idHTTp1.ConnectTimeout:=5000;
Abas.ActiveTab:=AbaMenu;
end;

procedure TFMenu.LimpaCamposContato;
begin
EdtNome.Text    :='';
EdtEmail.Text   :='';
EdtTelefone.Text:='';
end;

procedure TFMenu.PesquisaContato(Filtro: Integer);
Var
item : TListViewItem;
Obj: TJSonObject;
Par, Par2: TJsonPair;
vetor: TJsonArray;
i, campo1, campo2 : Integer;
resultadoJSON: String;
begin

  resultadoJSON:=idHTTP1.Get(URL+'listaContato');
  resultadoJSON:=StringReplace(resultadoJSON,'[[','[',[]);
  resultadoJSON:=StringReplace(resultadoJSON,']]',']',[]);

  Obj := TJSONObject.ParseJSONValue(TEncoding.ASCII.GetBytes(resultadoJSON), 0) as TJSONObject;
  Par := TJSONPair.Create;
  Par := Obj.Get(0);

  vetor := TJSONArray.Create;
  vetor := (Par.JsonValue as TJSONArray);

  GridContato.Items.Clear;
  for i := 0 to vetor.Size - 1 do
   begin
      Obj := (vetor.Get(i) as TJSONObject);
      Item := GridContato.Items.Add;

      case Filtro of
        0: Begin
            campo1:=1;
            campo2:=2;
           End;
        1: Begin
            campo1:=0;
            campo2:=2;
           End;
        2: Begin
            campo1:=0;
            campo2:=1;
           End;
      end;

      Par2 := Obj.Get(Filtro);
      Item.Text:=Par2.JsonValue.Value;
      Par2 := Obj.Get(campo1);
      Item.Data[TMultiDetailAppearanceNames.Detail1]:=Par2.JsonValue.Value;
      Par2 := Obj.Get(campo2);
      Item.Data[TMultiDetailAppearanceNames.Detail2]:=Par2.JsonValue.Value;
  end;
end;

procedure TFMenu.RBtnNomeChange(Sender: TObject);
var
  Filtro: Integer;
begin
if RBtnNome.IsChecked then
  Filtro:=0
Else if RBtnEmail.IsChecked then
  Filtro:=1
Else
  Filtro:=2;

PesquisaContato(Filtro);
end;

end.
