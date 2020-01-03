unit CamposU;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, WPCTRRich;

type
  TCamposF = class(TForm)
    listCampos: TListBox;
    procedure listCamposDblClick(Sender: TObject);
  private
    { Private declarations }
    FEditor: TWPRichText;
  public
    { Public declarations }
    procedure Show(WPTEditor: TWPRichText); reintroduce;
  end;

var
  CamposF: TCamposF;

implementation

{$R *.dfm}



{ TCamposF }

procedure TCamposF.listCamposDblClick(Sender: TObject);
var
 nomeCampo: string;
begin
  if FEditor <> nil then
  begin
    nomeCampo := listCampos.Items[listCampos.ItemIndex];
    FEditor.InputMergeField(nomeCampo,nomeCampo);
  end;
end;

procedure TCamposF.Show(WPTEditor: TWPRichText);
begin
  FEditor := WPTEditor;
  inherited Show;
end;

end.
