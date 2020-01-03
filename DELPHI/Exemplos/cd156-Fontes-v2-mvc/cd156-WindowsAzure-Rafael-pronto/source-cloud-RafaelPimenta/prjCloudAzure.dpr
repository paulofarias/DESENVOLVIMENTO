program prjCloudAzure;

uses
  Vcl.Forms,
  ufrmCloudAzure in 'ufrmCloudAzure.pas' {frmCloudAzure},
  uCloudAzure in 'uCloudAzure.pas';

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TfrmCloudAzure, frmCloudAzure);
  Application.Run;
end.
