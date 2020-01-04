program SisFinanceiro;

uses
  Vcl.Forms,
  ufrmPrincipal in 'view\ufrmPrincipal.pas' {frmPrincipal},
  uFrmSplash in 'view\uFrmSplash.pas' {frmSplash},
  uFrmLogin in 'view\uFrmLogin.pas' {frmLogin},
  uUsuario in 'model\uUsuario.pas',
  uSistema in 'model\uSistema.pas',
  uFuncoes in 'model\uFuncoes.pas',
  uCtrlLogin in 'controller\uCtrlLogin.pas',
  uSQL in 'model\uSQL.pas',
  uGetConexao in 'model\uGetConexao.pas',
  uDmDados in 'dao\uDmDados.pas' {DmDados: TDataModule},
  uFireDACConexao in 'model\uFireDACConexao.pas',
  uLogin in 'model\uLogin.pas',
  uLoginDAO in 'dao\uLoginDAO.pas';

{$R *.res}

{var
  Sistema: TSistema;}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Sistema := TSistema.Create;
  Application.CreateForm(TfrmPrincipal, frmPrincipal);
  Application.Run;
end.
