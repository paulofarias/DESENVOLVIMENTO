unit uFrmLogin;

interface

uses
  Vcl.Forms, Vcl.Controls, Vcl.StdCtrls, Vcl.Buttons, Vcl.Imaging.jpeg,
  System.Classes, Vcl.ExtCtrls;

type
  TfrmLogin = class(TForm)
    edtSenha: TEdit;
    Label1: TLabel;
    Label2: TLabel;
    btnEntrar: TBitBtn;
    Image1: TImage;
    edtLogin: TComboBox;
    lblUltimoAcesso: TLabel;
    procedure btnEntrarClick(Sender: TObject);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure FormKeyPress(Sender: TObject; var Key: Char);
    procedure FormShow(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  frmLogin: TfrmLogin;

implementation

{$R *.dfm}

uses
  uFuncoes, uSistema, Winapi.Windows, System.SysUtils, Winapi.Messages,
  FireDAC.Comp.Client;

const
  CRLF = #13#10;
  S_SQL_LOGIN =
    'SELECT             ' + CRLF +
    '  ID               ' + CRLF +
    'FROM               ' + CRLF +
    '  USUARIOS         ' + CRLF +
    'WHERE              ' + CRLF +
    '    LOGIN = :LOGIN ' + CRLF +
    'AND SENHA = :SENHA ' ;

procedure TfrmLogin.btnEntrarClick(Sender: TObject);
var
  qryAux: TFDQuery;
begin
  if edtLogin.Text = '' then
  begin
    Application.MessageBox('Informe seu usuário.','Atenção',MB_OK+MB_ICONWARNING);
    edtLogin.SetFocus;
    Abort;
  end
  else
  if edtSenha.Text = '' then
  begin
    Application.MessageBox('Informe sua senha.','Atenção',MB_OK+MB_ICONWARNING);
    edtSenha.SetFocus;
    Abort;
  end;

  qryAux := TFDQuery.Create(nil);
  with qryAux do
    try
      Connection := Sistema.Conexao;
      SQL.Add(S_SQL_LOGIN);
      Params[0].AsString := Trim(edtLogin.Text);
      Params[1].AsString := Trim(edtSenha.Text);
      Open;
      if not isEmpty then
      begin
        TSistema.SetUltimoAcesso(Trim(edtLogin.Text));
        ModalResult := mrOk;
      end
      else
      begin
        Application.MessageBox('Usuário e/ou senha inválido.','Atenção',MB_OK+MB_ICONWARNING);
        edtLogin.SetFocus;
        Abort;
      end;
    finally
      Free;
    end;
end;

procedure TfrmLogin.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  if ModalResult <> mrOk then
    ModalResult := mrNo;
end;

procedure TfrmLogin.FormKeyPress(Sender: TObject; var Key: Char);
begin
  if key = #13 then
    Perform(WM_NEXTDLGCTL, 0, 0);
end;

procedure TfrmLogin.FormShow(Sender: TObject);
begin
  {TUsuario.CarregarLogin(edtLogin);
  edtLogin.Text           := TSistema.GetUsuarioAcesso;
  lblUltimoAcesso.Caption := TSistema.GetUltimoAcesso;}

  {$IFDEF DEBUG}
    edtLogin.Text := 'sysdba';
    edtSenha.Text := 'masterkey';
    btnEntrar.SetFocus;
  {$ENDIF}
end;

end.
