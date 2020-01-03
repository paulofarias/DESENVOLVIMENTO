program Sample;

uses
  Vcl.Forms,
  FrmPrincipalU in 'FrmPrincipalU.pas' {Form1},
  VendaU in 'VendaU.pas',
  ServiceU in 'ServiceU.pas',
  ViewCadClienteC in 'View\ViewCadClienteC.pas' {CadastroClienteF},
  ViewCadProdutoU in 'View\ViewCadProdutoU.pas' {CadastroProdutoF},
  ViewVendaU in 'View\ViewVendaU.pas' {VendaF},
  ControllerProdutoU in 'Controller\ControllerProdutoU.pas',
  ControllerClienteU in 'Controller\ControllerClienteU.pas',
  ControllerVendaU in 'Controller\ControllerVendaU.pas',
  ProdutoModelU in 'Model\ProdutoModelU.pas',
  ClienteModelU in 'Model\ClienteModelU.pas',
  VendaModelU in 'Model\VendaModelU.pas';

{$R *.res}

begin
//  ReportMemoryLeaksOnShutdown := (DebugHook <> 0);
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TForm1, Form1);
  Application.CreateForm(TCadastroClienteF, CadastroClienteF);
  Application.CreateForm(TCadastroProdutoF, CadastroProdutoF);
  Application.CreateForm(TVendaF, VendaF);
  Application.Run;
end.
