program Cadastro;

uses
  Vcl.Forms,
  CadastroU in 'CadastroU.pas' {CadastroF};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TCadastroF, CadastroF);
  Application.Run;
end.
