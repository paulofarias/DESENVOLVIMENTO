unit MesclagemU;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, WPRTEDefs, WPCTRMemo, WPCTRRich;

type
  TMesclagemF = class(TForm)
    WPRichText1: TWPRichText;
    procedure WPRichText1MailMergeGetText(Sender: TObject;
      const inspname: string; Contents: TWPMMInsertTextContents);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  MesclagemF: TMesclagemF;

implementation

{$R *.dfm}

procedure TMesclagemF.WPRichText1MailMergeGetText(Sender: TObject;
  const inspname: string; Contents: TWPMMInsertTextContents);
begin
  if inspname = 'Nome' then
  begin
    Contents
  end;
end;

end.
