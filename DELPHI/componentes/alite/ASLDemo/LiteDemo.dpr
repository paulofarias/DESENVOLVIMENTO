program litedemo;

uses
  Forms,
  MainUnit in 'MainUnit.pas' {MainForm},
  UnitPopupScaling in 'UnitPopupScaling.pas' {FormPopupScaling};

{$R *.RES}

begin
  Application.Initialize;
  Application.CreateForm(TMainForm, MainForm);
  Application.CreateForm(TFormPopupScaling, FormPopupScaling);
  Application.Run;
end.
