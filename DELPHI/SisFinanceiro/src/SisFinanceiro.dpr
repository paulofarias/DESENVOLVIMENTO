program SisFinanceiro;

uses
  Vcl.Forms,
  ufrmPrincipal in 'view\ufrmPrincipal.pas' {frmPrincipal},
  uFrmSplash in 'view\uFrmSplash.pas' {frmSplash},
  uFrmLogin in 'view\uFrmLogin.pas' {frmLogin},
  uSistema in 'model\uSistema.pas',
  uFuncoes in 'model\uFuncoes.pas',
  uSQL in 'model\uSQL.pas',
  uDmDados in 'dao\uDmDados.pas' {DmDados: TDataModule},
  uDmPrincipal in 'dao\uDmPrincipal.pas' {DmPrincipal: TDataModule};

{$R *.res}

{var
  Sistema: TSistema;}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TDmPrincipal, DmPrincipal);
  Sistema := TSistema.Create;
  Application.CreateForm(TfrmPrincipal, frmPrincipal);
  Application.Run;
end.
