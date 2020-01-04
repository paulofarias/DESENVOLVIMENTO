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
  uFuncoes, uSistema, Winapi.Windows, System.SysUtils, Winapi.Messages, uCtrlLogin;

procedure TfrmLogin.btnEntrarClick(Sender: TObject);
var
  CtrlLogin : TCtrlLogin;
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

  CtrlLogin := TCtrlLogin.Create;
  try
    if CtrlLogin.Logar(
      Trim(edtLogin.Text),
      Trim(edtSenha.Text)
    ) then
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
    FreeAndNil(CtrlLogin);
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
  //TUsuario.CarregarLogin(edtLogin);
  edtLogin.Text           := TSistema.GetUsuarioAcesso;
  lblUltimoAcesso.Caption := TSistema.GetUltimoAcesso;

  {$IFDEF DEBUG}
    edtSenha.Text := 'masterkey';
    btnEntrar.SetFocus;
  {$ENDIF}
end;

end.
