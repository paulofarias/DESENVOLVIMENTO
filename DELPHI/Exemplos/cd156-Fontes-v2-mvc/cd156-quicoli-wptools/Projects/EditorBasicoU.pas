unit EditorBasicoU;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, WPRuler, WPRTEDefs, WPCTRMemo,
  WPCTRRich, Vcl.Menus, WPTbar, WPAction, System.Actions, Vcl.ActnList,
  //suporte ao cabeçalho e rodapé
  WPRTEPlatform, WPRTEEdit, WPRTEDefsConsts,

  Vcl.StdCtrls, Vcl.ExtCtrls, Vcl.Samples.Spin,

  //integracao corretor ortografico
  WPNHunspellU
  ;

type
  TForm1 = class(TForm)
    WPToolbar1: TWPToolbar;
    MainMenu1: TMainMenu;
    Arquivo1: TMenuItem;
    Fechar1: TMenuItem;
    Sair1: TMenuItem;
    WPRichText1: TWPRichText;
    WPRuler1: TWPRuler;
    WPVertRuler1: TWPVertRuler;
    ActionList1: TActionList;
    WPAOpen1: TWPAOpen;
    WPASave1: TWPASave;
    GraphicPopup: TPopupMenu;
    FixedPopup: TMenuItem;
    asCharacter1: TMenuItem;
    Auto1: TMenuItem;
    MovableGraphicWrapLeft1: TMenuItem;
    MovableGraphicWrapRigth1: TMenuItem;
    Panel1: TPanel;
    ComboArea: TComboBox;
    Label2: TLabel;
    comboEditar: TComboBox;
    Label1: TLabel;
    Zoom: TLabel;
    EditZoom: TSpinEdit;
    WPALayoutNormal1: TWPALayoutNormal;
    WPALayoutNormal2: TWPALayoutNormal;
    WPALayoutFull1: TWPALayoutFull;
    WPALayoutDouble1: TWPALayoutDouble;
    btNormal: TButton;
    PopupMenu1: TPopupMenu;
    Normal1: TMenuItem;
    Impresso1: TMenuItem;
    popCorrecao: TPopupMenu;
    itemCorrecao: TMenuItem;
    Button1: TButton;
    Campos1: TMenuItem;
    procedure WPRichText1TextObjectMouseDown(Sender: TWPCustomRtfEdit;
      pobj: TWPTextObj; obj: TWPObject; Button: TMouseButton;
      Shift: TShiftState; X, Y: Integer);
    procedure asCharacter1Click(Sender: TObject);
    procedure Auto1Click(Sender: TObject);
    procedure MovableGraphicWrapLeft1Click(Sender: TObject);
    procedure MovableGraphicWrapRigth1Click(Sender: TObject);
    procedure comboEditarChange(Sender: TObject);
    procedure WPRichText1WorkOnTextChanged(Sender: TObject);
    procedure ComboAreaChange(Sender: TObject);
    procedure EditZoomChange(Sender: TObject);
    procedure Normal1Click(Sender: TObject);
    procedure Impresso1Click(Sender: TObject);
    procedure ModoLeitura1Click(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure Button1Click(Sender: TObject);
    procedure Campos1Click(Sender: TObject);
  private
    { Private declarations }
    CurrentPTextObj : PTTextObj;

  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

uses CamposU;

procedure TForm1.asCharacter1Click(Sender: TObject);
begin
  if CurrentPTextObj<> nil then
  begin
    WPRichText1.TextObjects.ChangePositionMode(CurrentPTextObj, wpotPar);
    WPRichText1.Invalidate;
  end;
end;

procedure TForm1.Auto1Click(Sender: TObject);
begin
  if CurrentPTextObj<> nil then
  begin
    WPRichText1.TextObjects.ChangePositionMode(CurrentPTextObj, wpotPar, wpwrAutomatic);
    WPRichText1.Invalidate;
  end;
end;

procedure TForm1.Button1Click(Sender: TObject);
begin
  DoSpellCheck;
end;

procedure TForm1.Campos1Click(Sender: TObject);
begin
  CamposF.Show(WPRichText1);
end;

procedure TForm1.ComboAreaChange(Sender: TObject);
begin
  WPRichText1.HeaderFooterTextRange :=
       TWPPagePropertyRange(ComboArea.ItemIndex);
  WPRichText1.SetFocus;
end;

procedure TForm1.comboEditarChange(Sender: TObject);
begin
  WPRichText1.WorkOnText := TWPPagePropertyKind(ComboEditar.ItemIndex);
  WPRichText1.SetFocus;
end;

procedure TForm1.EditZoomChange(Sender: TObject);
begin
  WPRichText1.Zooming := EditZoom.Value;
end;

procedure TForm1.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  UnconfigureWPNHunspell;
end;

procedure TForm1.FormShow(Sender: TObject);
begin
  ConfigureWPNHunspell(WPRichText1, itemCorrecao);
end;

procedure TForm1.Impresso1Click(Sender: TObject);
begin
  WPRichText1.LayoutMode := wplayFullLayout;
end;

procedure TForm1.ModoLeitura1Click(Sender: TObject);
begin
  WPRichText1.LayoutMode := wplayExtendedPageGap;
end;

procedure TForm1.MovableGraphicWrapLeft1Click(Sender: TObject);
begin
  if CurrentPTextObj<> nil then
  begin
    WPRichText1.TextObjects.ChangePositionMode(CurrentPTextObj, wpotPar, wpwrLeft);
    WPRichText1.Invalidate;
  end;
end;

procedure TForm1.MovableGraphicWrapRigth1Click(Sender: TObject);
begin
  if CurrentPTextObj<> nil then
  begin
    WPRichText1.TextObjects.ChangePositionMode(CurrentPTextObj, wpotPar, wpwrRight);
    WPRichText1.Invalidate;
  end;
end;

procedure TForm1.Normal1Click(Sender: TObject);
begin
  WPRichText1.LayoutMode := wplayNormal;
end;

procedure TForm1.WPRichText1TextObjectMouseDown(Sender: TWPCustomRtfEdit;
  pobj: TWPTextObj; obj: TWPObject; Button: TMouseButton; Shift: TShiftState; X,
  Y: Integer);
var
  p: TPoint;
begin
  CurrentPTextObj := pobj;
  if ssRight in	Shift then
  begin
     GetCursorPos(p);
     GraphicPopup.Popup(p.x,p.y);
  end;
end;

procedure TForm1.WPRichText1WorkOnTextChanged(Sender: TObject);
begin
  comboEditar.ItemIndex := Integer(WPRichText1.WorkOnText);
  comboArea.ItemIndex := Integer(WPRichText1.HeaderFooterTextRange);
  ComboArea.Enabled := WPRichText1.WorkOnText<>wpisBody;
  if WPRichText1.WorkOnText<>wpisBody then
     ComboArea.Color := clWindow
  else ComboArea.Color := clBtnFace;
end;

end.
