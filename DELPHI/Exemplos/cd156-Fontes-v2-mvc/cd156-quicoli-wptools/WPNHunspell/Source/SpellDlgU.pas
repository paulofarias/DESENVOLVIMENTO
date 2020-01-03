unit SpellDlgU;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.Buttons,
  WPRTEDefs, WPCTRMemo, WPCTRRich, WPUtil, NHunspell;

type
  TSpellDlg = class(TForm)
    Word: TEdit;
    ReplaceAs: TEdit;
    WordList: TListBox;
    Ignore: TBitBtn;
    Replace: TBitBtn;
    Adicionar: TBitBtn;
    Cancel: TBitBtn;
    procedure IgnoreClick(Sender: TObject);
    procedure ReplaceClick(Sender: TObject);
    procedure AdicionarClick(Sender: TObject);
    procedure CancelClick(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure WordListClick(Sender: TObject);
  private
    fsFirstCall : Boolean;
    fsEditBox: TWPCustomRtfEdit;
    FDictionary:TNHSpellDictionary;
    procedure SetEditBox(const Value: TWPCustomRtfEdit);
  public
    constructor Create(Dictionary:  TNHSpellDictionary); reintroduce;
    property EditBox : TWPCustomRtfEdit read fsEditBox write SetEditBox;
  end;

  TWPSpellCheckDlg = class(TWPCustomAttrDlg)
  private
    dia       : TSpellDlg;
  public
    destructor  Destroy; override;
    function Execute(Dictionary:TNHSpellDictionary): Boolean; overload;
  published
    property EditBox;
  end;


var
  SpellDlg: TSpellDlg;

implementation

{$R *.dfm}

{ TSpellDlg }

procedure TSpellDlg.AdicionarClick(Sender: TObject);
begin
  if FDictionary.Add(Word.Text) then
  begin
    EditBox.SelText := ReplaceAs.Text;
    IgnoreClick(Sender);
  end;
end;

procedure TSpellDlg.CancelClick(Sender: TObject);
begin
  EditBox.Spell_FromCursorPos;
  Close;
end;

constructor TSpellDlg.Create(Dictionary: TNHSpellDictionary);
begin
  inherited Create(nil);
  FDictionary := Dictionary;
end;

procedure TSpellDlg.FormShow(Sender: TObject);
begin
  fsFirstCall := TRUE;
  IgnoreClick(Sender);
  fsFirstCall := FALSE;
end;

procedure TSpellDlg.IgnoreClick(Sender: TObject);
var
 s : String;
 x,y : Integer;
begin
 WordList.Clear;
 EditBox.Spell_FromCursorPos;
 while TRUE do
 begin
   s := EditBox.Spell_GetNextWord;
   if s='' then break;
   if not FDictionary.Spell(s) then
   begin
     EditBox.Spell_SelectWord;
     FDictionary.Suggest(s,WordList.Items);
     Break
   end
   else continue;

   x := Left;
   y := Top;
   EditBox.Spell_SelectWordXY(x,y);
   if y>Screen.Height div 2 then y := y - Height - 30;
   Top  := y;
   Left := x;
   break;
 end;
 Word.Text      := s;
 ReplaceAs.Text := s;
 if (s='') and (fsFirstCall=FALSE) then close;

end;

procedure TSpellDlg.ReplaceClick(Sender: TObject);
begin
  EditBox.SelText := ReplaceAs.Text;
  IgnoreClick(Sender);
end;

procedure TSpellDlg.SetEditBox(const Value: TWPCustomRtfEdit);
begin
  fsEditBox := Value;
  if fsEditBox <> nil then
    fsEditBox.Spell_FromStart;
end;

procedure TSpellDlg.WordListClick(Sender: TObject);
begin
  ReplaceAS.Text := WordList.Items[WordList.ItemIndex];
end;

{ TWPSpellCheckDlg }

destructor TWPSpellCheckDlg.Destroy;
begin
  if dia<>nil then
  begin
    if dia.visible then dia.Close;
    dia.Free;
  end;
  inherited Destroy;
end;

function TWPSpellCheckDlg.Execute(Dictionary:TNHSpellDictionary): Boolean;
begin
 if assigned(FEditBox) and Changing then
 begin
   if dia=nil then dia := TSpellDlg.Create(Dictionary);
   dia.EditBox := FEditBox;
   dia.Caption := dia.Caption;
   FEditBox.Spell_FromCursorPos;
   dia.Show;
 end;
end;

end.
