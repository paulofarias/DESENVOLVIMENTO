program SisFinanceiro;

uses
  Vcl.Forms,
  ufrmPrincipal in 'ufrmPrincipal.pas' {frmPrincipal},
  uDmDados in 'datamodule\uDmDados.pas' {DmDados: TDataModule},
  Vcl.Themes,
  Vcl.Styles,
  uFrmCadastroBasico in 'view\uFrmCadastroBasico.pas' {frmCadastroBasico},
  uFrmCadastroUsuarios in 'view\uFrmCadastroUsuarios.pas' {frmCadastroUsuarios},
  uFuncoes in 'classes\uFuncoes.pas',
  uFrmCadastroCaixa in 'view\uFrmCadastroCaixa.pas' {frmCadastroCaixa},
  uFrmCadastroPagar in 'view\uFrmCadastroPagar.pas' {frmCadastroPagar},
  uFrmCadastroReceber in 'view\uFrmCadastroReceber.pas' {frmCadastroReceber},
  uFrmConsReceber in 'view\uFrmConsReceber.pas' {frmConsReceber},
  uFrmConsPagar in 'view\uFrmConsPagar.pas' {frmConsPagar},
  uFrmLogin in 'view\uFrmLogin.pas' {frmLogin},
  uUsuario in 'classes\uUsuario.pas',
  uFrmBaixarPagar in 'view\uFrmBaixarPagar.pas' {frmBaixarPagar},
  uFrmBaixarReceber in 'view\uFrmBaixarReceber.pas' {frmBaixarReceber},
  uFrmSplash in 'view\uFrmSplash.pas' {frmSplash},
  uSistema in 'classes\uSistema.pas',
  uGetConexao in 'classes\uGetConexao.pas',
  uSQL in 'classes\uSQL.pas',
  uFrmSaldoCaixa in 'view\uFrmSaldoCaixa.pas' {frmSaldoCaixa},
  uCaixa in 'classes\uCaixa.pas',
  uFrmDetalhesReceber in 'view\uFrmDetalhesReceber.pas' {frmDetalhesReceber},
  uFrmDetalhesPagar in 'view\uFrmDetalhesPagar.pas' {frmDetalhesPagar},
  uFrmEmitirRecibo in 'view\uFrmEmitirRecibo.pas' {frmEmitirRecibo},
  uFrmConsRecibos in 'view\uFrmConsRecibos.pas' {frmConsRecibos};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TDmDados, DmDados);
  Application.CreateForm(TfrmPrincipal, frmPrincipal);
  Application.Run;
end.
