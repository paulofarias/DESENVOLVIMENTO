unit ufrmPrincipal;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.Imaging.jpeg,
  Vcl.ExtCtrls, Vcl.Imaging.pngimage, Vcl.ComCtrls, Vcl.Grids, Vcl.DBGrids,
  Data.DB, sSkinManager, sEdit, sLabel, Vcl.Buttons, System.Actions,
  Vcl.ActnList, Vcl.Menus, Vcl.ToolWin, System.ImageList, Vcl.ImgList;

type
  TfrmPrincipal = class(TForm)
    StatusBar1: TStatusBar;
    BalloonHint: TBalloonHint;
    Timer: TTimer;
    sSkinManager1: TsSkinManager;
    MainMenu1: TMainMenu;
    ActionList1: TActionList;
    actCadastroUsuario: TAction;
    actContasReceber: TAction;
    Arquivo1: TMenuItem;
    Sair1: TMenuItem;
    Funces1: TMenuItem;
    CadastrodeUsurio1: TMenuItem;
    CadastrodeContasaReceber1: TMenuItem;
    ImageList1: TImageList;
    actContasPagar: TAction;
    actLancamentosCaixa: TAction;
    actConsultaContasReceber: TAction;
    actConsultaContasPagar: TAction;
    ConsultarContasaPagar1: TMenuItem;
    N1: TMenuItem;
    LanamentosnoCaixa1: TMenuItem;
    N2: TMenuItem;
    ConsultarContasaReceber1: TMenuItem;
    ConsultarContasaPagar2: TMenuItem;
    actRelContasPagar: TAction;
    actRelContasReceber: TAction;
    actRelLancamentosCaixa: TAction;
    actEmitirRecibo: TAction;
    Relatrios1: TMenuItem;
    RelatriodeContasaPagar1: TMenuItem;
    RelatriodeContasaReceber1: TMenuItem;
    N3: TMenuItem;
    RelatriodeLanamentosnoCaixa1: TMenuItem;
    Sistema1: TMenuItem;
    N5: TMenuItem;
    EmitirRecibo1: TMenuItem;
    actSaldoCaixa: TAction;
    SaldodoCaixa1: TMenuItem;
    actConfiguracoes: TAction;
    actSair: TAction;
    procedure TimerTimer(Sender: TObject);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure FormCreate(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure actCadastroUsuarioExecute(Sender: TObject);
    procedure actContasReceberExecute(Sender: TObject);
    procedure actContasPagarExecute(Sender: TObject);
    procedure actLancamentosCaixaExecute(Sender: TObject);
    procedure actSaldoCaixaExecute(Sender: TObject);
    procedure actEmitirReciboExecute(Sender: TObject);
    procedure actConsultaContasReceberExecute(Sender: TObject);
    procedure actConsultaContasPagarExecute(Sender: TObject);
    procedure actSairExecute(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  frmPrincipal: TfrmPrincipal;

implementation

{$R *.dfm}

uses
  uFrmCadastroBasico, uFrmCadastroUsuarios, uFuncoes, uFrmCadastroCaixa,
  uFrmCadastroPagar, uFrmCadastroReceber, uFrmConsPagar, uFrmConsReceber,
  uFrmLogin, uFrmSplash, uFrmSaldoCaixa, uFrmEmitirRecibo, uSQL, uDmDados;

procedure TfrmPrincipal.actCadastroUsuarioExecute(Sender: TObject);
begin
  if frmCadastroUsuarios = nil then
    frmCadastroUsuarios := TfrmCadastroUsuarios.Create(nil);
  frmCadastroUsuarios.Show;
end;

procedure TfrmPrincipal.actConsultaContasPagarExecute(Sender: TObject);
begin
  if frmConsPagar = nil then
    frmConsPagar := TfrmConsPagar.Create(nil);
  frmConsPagar.Show;
end;

procedure TfrmPrincipal.actConsultaContasReceberExecute(Sender: TObject);
begin
  if frmConsReceber = nil then
    frmConsReceber := TfrmConsReceber.Create(nil);
  frmConsReceber.Show;
end;

procedure TfrmPrincipal.actContasPagarExecute(Sender: TObject);
begin
  if frmCadastroPagar = nil then
    frmCadastroPagar := TfrmCadastroPagar.Create(nil);
  frmCadastroPagar.Show;
end;

procedure TfrmPrincipal.actContasReceberExecute(Sender: TObject);
begin
  if frmCadastroReceber = nil then
    frmCadastroReceber := TfrmCadastroReceber.Create(nil);
  frmCadastroReceber.Show;
end;

procedure TfrmPrincipal.actEmitirReciboExecute(Sender: TObject);
begin
  if frmEmitirRecibo = nil then
    frmEmitirRecibo := TfrmEmitirRecibo.Create(nil);
  frmEmitirRecibo.Show;
end;

procedure TfrmPrincipal.actLancamentosCaixaExecute(Sender: TObject);
begin
  if frmCadastroCaixa = nil then
    frmCadastroCaixa := TfrmCadastroCaixa.Create(nil);
  frmCadastroCaixa.Show;
end;

procedure TfrmPrincipal.actSairExecute(Sender: TObject);
begin
  Self.Close;
end;

procedure TfrmPrincipal.actSaldoCaixaExecute(Sender: TObject);
begin
  if frmSaldoCaixa = nil then
    frmSaldoCaixa := TfrmSaldoCaixa.Create(nil);
  frmSaldoCaixa.Show;
end;

procedure TfrmPrincipal.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  if Application.MessageBox('Deseja realmente sair?','Informação',MB_YESNO+MB_ICONQUESTION) = mrYes then
    Application.Terminate
  else
    Abort;
end;

procedure TfrmPrincipal.FormCreate(Sender: TObject);
begin
  frmSplash := TfrmSplash.Create(nil);
  try
    frmSplash.ShowModal;
  finally
    FreeAndNil(frmSplash);
  end;

  frmLogin := TfrmLogin.Create(nil);
  try
    frmLogin.ShowModal;
    if frmLogin.ModalResult = mrNo then
      Application.Terminate;
  finally
    FreeAndNil(frmLogin);
  end;
end;

procedure TfrmPrincipal.FormShow(Sender: TObject);
begin
  with StatusBar1.Panels do
  begin
    Items[2].Text := 'Tipo Servidor: ' + DmDados.ParametrosConexao.DriverID;
    Items[3].Text := 'Nome Servidor: ' + Copy(
      DmDados.ParametrosConexao.Text,
      DmDados.ParametrosConexao.Text.IndexOf('Server') + 8,
      DmDados.ParametrosConexao.Text.IndexOf('User_Name') - (DmDados.ParametrosConexao.Text.IndexOf('Server') + 8)
      );
     Items[4].Text := 'Base: ' + DmDados.ParametrosConexao.Database;
  end;
end;

procedure TfrmPrincipal.TimerTimer(Sender: TObject);
begin
  StatusBar1.Panels.Items[0].Text := DateTimeToStr(now);
end;

end.
