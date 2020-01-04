program SisFinanceiro;

uses
  Vcl.Forms,
  ufrmPrincipal in 'view\ufrmPrincipal.pas' {frmPrincipal},
  uFrmSplash in 'view\uFrmSplash.pas' {frmSplash},
  uFrmLogin in 'view\uFrmLogin.pas' {frmLogin},
  uUsuario in 'model\uUsuario.pas',
  uSistema in 'model\uSistema.pas',
  uFuncoes in 'model\uFuncoes.pas',
  uSQL in 'model\uSQL.pas',
  uGetConexao in 'model\uGetConexao.pas',
  uDmDados in 'dao\uDmDados.pas' {DmDados: TDataModule},
  uFireDACConexao in 'model\uFireDACConexao.pas',
  uDmPrincipal in 'dao\uDmPrincipal.pas' {DmPrincipal: TDataModule};

{$R *.res}

{var
  Sistema: TSistema;}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Sistema := TSistema.Create;
  Application.CreateForm(TfrmPrincipal, frmPrincipal);
  Application.CreateForm(TDmPrincipal, DmPrincipal);
  Application.Run;
end.
