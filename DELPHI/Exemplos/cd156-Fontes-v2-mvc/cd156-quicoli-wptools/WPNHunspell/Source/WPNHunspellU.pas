//******************************************************************************
// Paulo Quicoli - Dez/2013
//
// Integração entre o dicionário NHunspell e WPTools
// O NHunspell é um corretor muito utilizado. Por exemplo é utilizado
// no OpenOffice e Firefox. O wrapper para Delphi foi compilado para
// Delphi 2009+ por Help & Manual
// (http://news.helpandmanual.com/2011/03/spell-checker-nhunspell-for-delphi/)
// e pode ser baixado em: http://www.ec-software.com/downloads_delphi.html.
//******************************************************************************

unit WPNHunspellU;

interface

uses Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs,
     StdCtrls, ShellAPI, Vcl.Menus,
     WPRTEDefs, WPCTRMemo, WPCTRRich,
     NHunspell, SpellDlgU;

type
  TWPNHunspell = Class
  private
    FDictionary: TNHSpellDictionary;
    FSourceEditor: TWPRichText;
    FSpellDlg: TWPSpellCheckDlg;
    FPopupMenuItem: TMenuItem;
    procedure EscolherPalavra(Sender: TObject);
    procedure Configure;

    procedure NHunspellCheckWord(sender: TObject;
                                 var word: WideString;
                                 var resultvalue: TSpellCheckResult;
                                 var hyphen_pos: TSpellCheckHyphen;
                                 par: TParagraph;
                                 posinpar: integer);
    procedure NHunspellWordPopUp(sender: TObject;
                                 Button: TMouseButton;
                                 Shift: TShiftState;
                                 X: integer;
                                 Y: integer;
                                 par: TParagraph;
                                 posinpar: integer;
                                 CPPos: integer;
                                 len: integer;
                                 var text: string;
                                 var CharAttr: Cardinal;
                                 var Abort: boolean);
    procedure ConfigureHunspell;
    function IsKnownWord(aWord: string): boolean;
  public
    constructor Create(aWPRichText: TWPRichText; aPopupMenuItemToSpellcheck: TMenuItem); reintroduce;

  End;

var
  _Speller: TWPNHunspell;
  _dictionary: string;
  _IsSet: bool;


procedure ConfigureWPNHunspell(aWPRichText: TWPRichText; aMenuItemForPopupSpellCheck: TMenuItem = nil);
procedure UnconfigureWPNHunspell;
procedure DoSpellCheck;


implementation

procedure DoSpellCheck;
begin
  if not _IsSet then exit;
  _Speller.FSpellDlg.Execute(_Speller.FDictionary);
end;

procedure ConfigureWPNHunspell(aWPRichText: TWPRichText; aMenuItemForPopupSpellCheck: TMenuItem = nil);
begin
  _dictionary :=IncludeTrailingPathDelimiter(ExtractFilePath(application.ExeName))+ 'pt_br.oxt';

  if not (FileExists(_dictionary)) then
    raise Exception.Create('Arquivo dicionário [pt_br.oxt] não encontrado '+
                           'na pasta de execução do aplicativo. Verifique.');

  if not (FileExists(IncludeTrailingPathDelimiter(ExtractFilePath(application.ExeName))+ 'Hunspellx86.dll')) then
    raise Exception.Create('DLL [Hunspellx86.dll] não encontrada '+
                           'na pasta de execução do aplicativo. Verifique.');


  _Speller := TWPNHunspell.Create(aWPRichText, aMenuItemForPopupSpellCheck);
  _IsSet := true;
end;

procedure UnconfigureWPNHunspell;
begin
  _Speller.FSourceEditor.Memo.OnSpellCheckWord := nil;
  _Speller.FSourceEditor._3RDParty_OnMouseDownWord := nil;
  FreeAndNil(_Speller);
  _IsSet := false;
end;

{ TWPNHunspell }

procedure TWPNHunspell.Configure;
begin
  if (FSourceEditor = nil) then exit;

  ConfigureHunspell;

  FSourceEditor._SpellAsYouGo := true;
  FSourceEditor.Memo.OnSpellCheckWord := NHunspellCheckWord;
  FSourceEditor._3RDParty_OnMouseDownWord := NHunspellWordPopUp;

  FSpellDlg := TWPSpellCheckDlg.Create(FSourceEditor);
  FSpellDlg.EditBox := FSourceEditor;
end;

constructor TWPNHunspell.Create(aWPRichText: TWPRichText; aPopupMenuItemToSpellcheck: TMenuItem);
begin
  FPopupMenuItem := nil;
  FSourceEditor := nil;
  FSourceEditor := aWPRichText;
  if (aPopupMenuItemToSpellcheck <> nil) then
    FPopupMenuItem := aPopupMenuItemToSpellcheck;

  Configure;
end;

procedure TWPNHunspell.EscolherPalavra(Sender: TObject);
begin
  if (Sender is TMenuItem) then
  begin
    if Trim(FSourceEditor.SelText) = '' then exit;
    FSourceEditor.SelText := (Sender as TMenuItem).Hint;
  end;
end;

function TWPNHunspell.IsKnownWord(aWord: string): boolean;
var
  tmpStr: TUnicodeStringList;
begin
  tmpStr := TUnicodeStringList.create;
  Hunspell.SpellDictionaries[0].Stem(aWord, tmpStr);
  result := tmpStr.Count > 0;
  FreeAndNil(tmpStr);
end;

procedure TWPNHunspell.ConfigureHunspell;
begin
  Hunspell.ReadOXT(_dictionary);
  FDictionary := Hunspell.SpellDictionaries[0];
  Hunspell.HyphenDictionaries[0].Active := true;
  Hunspell.UpdateAndLoadDictionaries;
  if not FDictionary.Loaded then FDictionary.Load;
end;

procedure TWPNHunspell.NHunspellCheckWord(sender: TObject; var word: WideString;
  var resultvalue: TSpellCheckResult; var hyphen_pos: TSpellCheckHyphen;
  par: TParagraph; posinpar: integer);
begin
  if not FDictionary.Spell(Trim(word)) then
  begin
    resultvalue := [spMisSpelled];
  end;
end;

procedure TWPNHunspell.NHunspellWordPopUp(sender: TObject; Button: TMouseButton;
  Shift: TShiftState; X, Y: integer; par: TParagraph; posinpar, CPPos,
  len: integer; var text: string; var CharAttr: Cardinal; var Abort: boolean);
var
  item: TMenuItem;
  ListaSugestao: TStringList;
  sugestao: string;
begin
  if not FDictionary.Spell(text) then
  begin
    if FPopupMenuItem <> nil then
    begin
      FPopupMenuItem.Clear;
      ListaSugestao := TStringList.Create;
      FDictionary.Suggest(text,ListaSugestao);
      for sugestao in ListaSugestao do
      begin
        item := TMenuItem.Create(FPopupMenuItem);
        item.Caption := sugestao;
        item.hint := sugestao;
        item.OnClick := EscolherPalavra;
        FPopupMenuItem.Add(item);
      end;
      FreeAndNil(ListaSugestao);
    end;
  end
  else
  begin
    if FPopupMenuItem <> nil then
      FPopupMenuItem.Clear;
  end;
end;

end.
