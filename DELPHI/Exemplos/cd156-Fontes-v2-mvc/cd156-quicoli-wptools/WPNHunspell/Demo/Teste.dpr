program Teste;

uses
  Vcl.Forms,
  TesteU in 'TesteU.pas' {TesteF};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TTesteF, TesteF);
  Application.Run;
end.
