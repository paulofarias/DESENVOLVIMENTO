program EditorBasico;

uses
  Vcl.Forms,
  EditorBasicoU in 'EditorBasicoU.pas' {Form1},
  CamposU in 'CamposU.pas' {CamposF};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TForm1, Form1);
  Application.CreateForm(TCamposF, CamposF);
  Application.Run;
end.
