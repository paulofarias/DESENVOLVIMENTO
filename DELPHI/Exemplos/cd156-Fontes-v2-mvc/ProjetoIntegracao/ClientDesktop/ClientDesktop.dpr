program ClientDesktop;

uses
  Vcl.Forms,
  UCadContato in 'UCadContato.pas' {FCadContato},
  UDataModule in 'UDataModule.pas' {FDataModule: TDataModule};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TFCadContato, FCadContato);
  Application.CreateForm(TFDataModule, FDataModule);
  Application.Run;
end.
