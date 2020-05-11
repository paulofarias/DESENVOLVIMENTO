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
  uFuncoes,
  uSistema,
  Winapi.Windows,
  System.SysUtils,
  Winapi.Messages,
  ZDataset
  ;

const
  CRLF = #13#10;

  S_SQL_LOGIN =
    'SELECT                 ' + CRLF +
    '  USU.Cod_Usuario,     ' + CRLF +
    '  USU.flg_Ativo        ' + CRLF +
    'FROM                   ' + CRLF +
    '  USUARIO USU          ' + CRLF +
    'WHERE                  ' + CRLF +
    '    Des_Login = :Login ' + CRLF +
    'AND Des_Senha = :Senha ' + CRLF ;

procedure TfrmLogin.btnEntrarClick(Sender: TObject);
var
  qryAux: TZQuery;
begin
  if edtLogin.Text = '' then
  begin
    Application.MessageBox('Informe seu usuário.', 'Atenção',MB_OK + MB_ICONWARNING);
    edtLogin.SetFocus;
    Abort;
  end
  else
  if edtSenha.Text = '' then
  begin
    Application.MessageBox('Informe sua senha.', 'Atenção',MB_OK+MB_ICONWARNING);
    edtSenha.SetFocus;
    Abort;
  end;

  qryAux := TZQuery.Create(nil);
  with qryAux do
    try
      Connection := Sistema.Conexao;
      SQL.Add(S_SQL_LOGIN);
      ParamByName('Login').AsString := Trim(edtLogin.Text);
      ParamByName('Senha').AsString := Trim(edtSenha.Text);
      Open;
      if not isEmpty then
      begin
        if qryAux.FieldByName('Flg_Ativo').AsString <> 'A' then
        begin
          Application.MessageBox('Usuário não está ativo.', 'Atenção',MB_OK + MB_ICONWARNING);
          edtLogin.SetFocus;
          Abort;
        end;
        Sistema.UsuarioLogado := Trim(edtLogin.Text);
        ModalResult := mrOk;
      end
      else
      begin
        Application.MessageBox('Usuário e/ou senha inválido.', 'Atenção',MB_OK + MB_ICONWARNING);
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
  lblUltimoAcesso.Caption := Sistema.GetUltimoAcesso;

  {$IFDEF DEBUG}
    edtLogin.Text := 'paulo';
    edtSenha.Text := 'gf8200a';
    btnEntrar.SetFocus;
  {$ENDIF}
end;

end.
