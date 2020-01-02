unit MainUnit;
{$i sDefs.inc}

interface

uses
  Windows, Messages, SysUtils, Classes, Graphics, Controls, Forms, Dialogs, ExtCtrls, ExtDlgs, Menus, ImgList,
  StdCtrls, Buttons, ComCtrls, CheckLst, Mask, Grids, XPMan,

  sButton, sSkinProvider, sSkinManager, sCheckBox, sBitBtn, sComboBox, sScrollBar, sEdit, sLabel, sGauge, sPanel,
  sCheckListBox, acAlphaImageList, sListBox, acTitleBar, acSBUtils, sComboBoxes, sGroupBox, sTrackBar;


type
  TMainForm = class(TForm)
    sSkinManager1: TsSkinManager;
    sPanel4: TsPanel;
    sSkinProvider1: TsSkinProvider;
    sBitBtn5: TsBitBtn;
    sAlphaImageList1: TsAlphaImageList;
    sPanel18: TsPanel;
    AnimPanel: TsPanel;
    sPanel15: TsPanel;
    sLabel7: TsLabel;
    sBitBtn4: TsBitBtn;
    sComboBox2: TsComboBox;
    sComboBox3: TsComboBox;
    sPanel16: TsPanel;
    sPanel17: TsPanel;
    Memo1: TMemo;
    Edit1: TEdit;
    StringGrid1: TStringGrid;
    ListBox1: TListBox;
    MaskEdit1: TMaskEdit;
    TreeView1: TTreeView;
    ListView1: TListView;
    sPanel1: TsPanel;
    sGauge1: TsGauge;
    sEdit1: TsEdit;
    sComboBox1: TsComboBox;
    sButton1: TsButton;
    sButton2: TsButton;
    sScrollBar3: TsScrollBar;
    sPanel2: TsPanel;
    sLabelFX1: TsLabelFX;
    sCheckBox3: TsCheckBox;
    sCheckBox2: TsCheckBox;
    sListBox1: TsListBox;
    sBitBtn1: TsBitBtn;
    sBitBtn3: TsBitBtn;
    sCheckListBox1: TsCheckListBox;
    sCheckBox10: TsCheckBox;
    sPanel3: TsPanel;
    sPanel5: TsPanel;
    sLabel1: TsLabel;
    sLabel2: TsLabel;
    sLabel3: TsLabel;
    sLabel4: TsLabel;
    sScrollBar1: TsScrollBar;
    sScrollBar2: TsScrollBar;
    sPanel6: TsPanel;
    ImageList32: TsAlphaImageList;
    sGauge2: TsGauge;
    sTitleBar1: TsTitleBar;
    PopupMenu1: TPopupMenu;
    S2: TMenuItem;
    A1: TMenuItem;
    Skinned2: TMenuItem;
    Builtinskins1: TMenuItem;
    Externalskins1: TMenuItem;
    N3: TMenuItem;
    Exit2: TMenuItem;
    sPanel19: TsPanel;
    sButton4: TsButton;
    sButton5: TsButton;
    sButton6: TsButton;
    sButton7: TsButton;
    sComboBox4: TsComboBox;
    sBitBtn2: TsBitBtn;
    sComboBox5: TsComboBox;
    sCheckBox11: TsCheckBox;
    sCheckBox12: TsCheckBox;
    sScrollBar4: TsScrollBar;
    sLabel5: TsLabel;
    sLabel6: TsLabel;
    sCheckBox13: TsCheckBox;
    sCheckBox14: TsCheckBox;
    sCheckBox15: TsCheckBox;
    sCheckBox16: TsCheckBox;
    sBitBtn6: TsBitBtn;
    ComboBox2: TComboBox;
    sCheckBox4: TsCheckBox;
    sBitBtn7: TsBitBtn;
    PopupMenuEmpty: TPopupMenu;
    sSkinSelector1: TsSkinSelector;
    sGroupBox1: TsGroupBox;
    sTrackBar1: TsTrackBar;
    sLabel8: TsLabel;
    sLabel9: TsLabel;
    procedure FormShow(Sender: TObject);
    procedure sSkinManager1BeforeChange(Sender: TObject);
    procedure sScrollBar3Change(Sender: TObject);
    procedure sButton5Click(Sender: TObject);
    procedure sComboBox2Change(Sender: TObject);
    procedure sComboBox3Change(Sender: TObject);
    procedure SetActivePage(PageIndex : integer);
    procedure FormCreate(Sender: TObject);
    procedure sScrollBar1MouseUp(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
    procedure sScrollBar2MouseUp(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
    procedure sCheckBox10Click(Sender: TObject);
    procedure sTitleBar1Items5MouseDown(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
    procedure sTitleBar1Items0Click(Sender: TObject);
    procedure sSkinManager1GetPopupItemData(Item: TMenuItem; State: TOwnerDrawState; ItemData: TacMenuItemData);
    procedure Exit2Click(Sender: TObject);
    procedure SkinMenuClick(Sender: TObject);
    procedure sSkinManager1AfterChange(Sender: TObject);
    procedure sSkinManager1GetMenuExtraLineData(FirstItem: TMenuItem; var SkinSection, Caption: String; var Glyph: TBitmap; var LineVisible: Boolean);
    procedure sComboBox5Change(Sender: TObject);
    procedure sCheckBox11Click(Sender: TObject);
    procedure sCheckBox12Click(Sender: TObject);
    procedure sScrollBar4MouseUp(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
    procedure sCheckBox13Click(Sender: TObject);
    procedure sCheckBox14Click(Sender: TObject);
    procedure sCheckBox15Click(Sender: TObject);
    procedure sCheckBox16Click(Sender: TObject);
    procedure sBitBtn6Click(Sender: TObject);
    procedure sCheckBox2Click(Sender: TObject);
    procedure sCheckBox3Click(Sender: TObject);
    procedure sCheckBox4Click(Sender: TObject);
    procedure sBitBtn7Click(Sender: TObject);
    procedure sTitleBar1Items6Click(Sender: TObject);
    procedure sBitBtn5Click(Sender: TObject);
    procedure sScrollBar1Change(Sender: TObject);
    procedure sScrollBar2Change(Sender: TObject);
    procedure sScrollBar4Change(Sender: TObject);
    procedure sTitleBar1Items11Click(Sender: TObject);
    procedure sTrackBar1UserChange(Sender: TObject);
    procedure sTrackBar1UserChanged(Sender: TObject);
    procedure sGroupBox1CheckBoxChanged(Sender: TObject);
    procedure sTrackBar1SkinPaint(Sender: TObject; Canvas: TCanvas);
  public
    procedure GenerateSkinsList;
  end;


var
  MainForm: TMainForm;
  Loading: boolean;
  NewBGName: string;

const
  ArrowArray: array [0..3] of integer = (96, 120, 144, 192);

implementation


uses
  ShellAPI,
  sCommonData, acPopupController, sSkinProps, {$WARNINGS OFF}FileCtrl,{$WARNINGS ON} sStyleSimply, sConst, sMaskData, sVclUtils,
  acntUtils, sGraphUtils, acntTypes,
  UnitPopupScaling;


var
  CurPanel: TsPanel = nil;


{$R *.DFM}

procedure TMainForm.FormShow(Sender: TObject);
var
  i: integer;
  s: string;
begin
  // Searching of available skins for aading to menu
  GenerateSkinsList;
  // Update brightness limits for current skin
  sScrollBar4.Min := sSkinManager1.SkinCommonInfo.BrightMin;
  sScrollBar4.Max := sSkinManager1.SkinCommonInfo.BrightMax;
  TreeView1.HandleNeeded;
  TreeView1.Images := sAlphaImageList1;
  for i := 0 to 30 do begin
    s := 'TreeNode ' + IntToStr(i);
    TreeView1.Items.Add(nil, s);
    TreeView1.Items[TreeView1.Items.Count - 1].ImageIndex := i mod sAlphaImageList1.Count;
    TreeView1.Items[TreeView1.Items.Count - 1].SelectedIndex := TreeView1.Items[TreeView1.Items.Count - 1].ImageIndex
  end;
end;


procedure TMainForm.sSkinManager1BeforeChange(Sender: TObject);
begin
  sSkinManager1.FHueOffset := 0;
  sSkinManager1.FSaturation := 0;
  sSkinManager1.FBrightness := 0;
  sScrollBar1.Position := 0;
  sScrollBar2.Position := 0;
  sScrollBar4.Position := 0;
  sLabel3.Caption := '0';
  sLabel4.Caption := '0';
  sLabel5.Caption := '0';
end;


procedure TMainForm.sScrollBar3Change(Sender: TObject);
begin
  sGauge1.Progress := sScrollBar3.Position;
  sGauge2.Progress := sScrollBar3.Position
end;


procedure TMainForm.sButton5Click(Sender: TObject);
begin
  SetActivePage(TControl(Sender).Tag)
end;


procedure TMainForm.sComboBox2Change(Sender: TObject);
begin
  sBitBtn4.SkinData.SkinSection := sComboBox2.Text;
end;


procedure TMainForm.sComboBox3Change(Sender: TObject);
begin
  sPanel16.SkinData.SkinSection := sComboBox3.Text;
end;


var
  iCurrentPage: integer = 0;


procedure TMainForm.SetActivePage(PageIndex: integer);
var
  OldPanel: TsPanel;

  procedure ChangeBtn(Btn: TsButton);
  begin
    Btn.Down := PageIndex = Btn.Tag;
  end;

begin
  if iCurrentPage <> PageIndex then begin
    iCurrentPage := PageIndex;
    ChangeBtn(sButton4);
    ChangeBtn(sButton5);
    ChangeBtn(sButton6);
    ChangeBtn(sButton7);
    Application.ProcessMessages; // Repaint buttons
    OldPanel := CurPanel;
    case PageIndex of
      0: CurPanel := sPanel3;
      1: CurPanel := sPanel1;
      2: CurPanel := sPanel15;
      3: CurPanel := sPanel17;
    end;

    if sSkinManager1.Effects.AllowAnimation and sSkinManager1.Active then begin
      PrepareForAnimation(AnimPanel, atcBlur);
      CurPanel.BringToFront;
      if OldPanel <> nil then
        OldPanel.Visible := False;

      CurPanel.Visible := True;
      AnimShowControl(AnimPanel, 150, MaxByte, atcBlur);
      // Final redraw of all controls
      RedrawWindow(CurPanel.Handle, nil, 0, RDW_ERASE or RDW_INTERNALPAINT or RDW_INVALIDATE or RDW_UPDATENOW or RDW_ALLCHILDREN);
    end
    else begin
      CurPanel.Visible := True;
      if OldPanel <> nil then
        OldPanel.Visible := False;
    end;
  end;
end;


procedure TMainForm.sGroupBox1CheckBoxChanged(Sender: TObject);
begin
  SetControlsEnabled(sGroupBox1, sGroupBox1.Checked);
  if sGroupBox1.Checked then begin
    sTrackBar1.Position := GetPPI(MainForm.sSkinProvider1.SkinData);
    MainForm.sSkinManager1.Options.PixelsPerInch := sTrackBar1.Position;
    sGroupBox1.Caption := 'Custom Scale: ' + IntToStr(sTrackBar1.Position) + ' PPI';
    MainForm.sTitleBar1.Items[11].Caption := 'Custom PPI: ' + IntToStr(sTrackBar1.Position);
    MainForm.sSkinManager1.Options.ScaleMode := smCustomPPI;
  end
  else begin
    MainForm.sSkinManager1.Options.ScaleMode := smVCL;
    MainForm.sTitleBar1.Items[11].Caption :='Auto PPI: ' + IntToStr(GetPPI(MainForm.sSkinProvider1.SkinData));
    sGroupBox1.Caption := MainForm.sTitleBar1.Items[11].Caption;
  end;
end;


procedure TMainForm.FormCreate(Sender: TObject);
var
  i: integer;
  li: TListItem;
begin
  for i := 0 to 99 do begin
    li := ListView1.Items.Add;
    li.Caption := 'Item ' + IntToStr(i);
    li.ImageIndex := i mod sAlphaImageList1.Count;
  end;
  sTitleBar1.Items[10].Caption := 'v' + sSkinManager1.Version;
  CurPanel := sPanel3;
  case sSkinManager1.GetScale of
    0: sTitleBar1.Items[6].Down := True;
    1: sTitleBar1.Items[7].Down := True;
    2: sTitleBar1.Items[8].Down := True;
  end;
end;


procedure TMainForm.sScrollBar1Change(Sender: TObject);
begin
  sLabel3.Caption := IntToStr(sScrollBar1.Position);
end;


procedure TMainForm.sScrollBar1MouseUp(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
begin
  sLabel3.Caption := IntToStr(sScrollBar1.Position);
  sSkinManager1.BeginUpdate;
  sSkinManager1.Saturation := sScrollBar1.Position;
  sSkinManager1.EndUpdate(True, False);
end;


procedure TMainForm.sScrollBar2Change(Sender: TObject);
begin
  sLabel4.Caption := IntToStr(sScrollBar2.Position);
end;


procedure TMainForm.sScrollBar2MouseUp(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
begin
  sLabel4.Caption := IntToStr(sScrollBar2.Position);
  sSkinManager1.BeginUpdate;
  sSkinManager1.HueOffset := sScrollBar2.Position;
  sSkinManager1.EndUpdate(True, False);
end;


procedure TMainForm.sCheckBox10Click(Sender: TObject);
begin
  sBitBtn1.Reflected := sCheckBox10.Checked;
  sBitBtn2.Reflected := sCheckBox10.Checked;
  sBitBtn3.Reflected := sCheckBox10.Checked;
end;


procedure TMainForm.sTitleBar1Items5MouseDown(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
begin
  // Disable animation of skin changing
  sSkinManager1.AnimEffects.SkinChanging.Active := False;
  // Return a normal state for this button
  sTitleBar1.Items[5].State := 0;
  sSkinManager1.HueOffset := sSkinManager1.HueOffset + 40;
  // Enable animation of skin changing
  sSkinManager1.AnimEffects.SkinChanging.Active := True;
end;


procedure TMainForm.sTitleBar1Items6Click(Sender: TObject);
begin
  MainForm.sSkinManager1.BeginUpdate;
  MainForm.sSkinManager1.Options.ScaleMode := TacScaleMode(TacTitleBarItem(Sender).Tag);
  MainForm.sSkinManager1.EndUpdate(True, False);
end;


procedure TMainForm.sTrackBar1SkinPaint(Sender: TObject; Canvas: TCanvas);
var
  R, chR: TRect;
  i, aSize: integer;
  TickSize: TSize;
  C: TColor;

  procedure PaintArrow(Value: integer);
  var
    x: integer;
  begin
    x := chR.Left + WidthOf(chR) * (Value - sTrackBar1.Min) div (sTrackBar1.Max - sTrackBar1.Min + 3) + 3;
    R.Right := x + aSize;
    R.Left := x - aSize;
    DrawArrow(Canvas.Handle, C, C, R, asTop, 0, 0, aSize, arsSolid1);
  end;

begin
  chR := sTrackBar1.ChannelRect;
  TickSize := MkSize(ScaleInt(1, sTrackBar1.SkinData), ScaleInt(4, sTrackBar1.SkinData));
  aSize := sTrackBar1.SkinData.CommonSkinData.ArrowSize;
  R.Top := chR.Bottom + sTrackBar1.SkinData.CommonSkinData.Spacing;
  R.Bottom := R.Top + aSize * 2;
  C := GetFontColor(sPanel1, sPanel1.SkinData.SkinIndex, sPanel1.SkinData.SkinManager);
  for i := 0 to Length(ArrowArray) - 1 do
    PaintArrow(ArrowArray[i]);
end;


procedure TMainForm.sTrackBar1UserChange(Sender: TObject);
begin
  sGroupBox1.Caption := 'Custom Scale: ' + IntToStr(sTrackBar1.Position) + ' PPI';
end;


procedure TMainForm.sTrackBar1UserChanged(Sender: TObject);
begin
  if MainForm.sSkinManager1.Options.ScaleMode <> smCustomPPI then begin
    MainForm.sSkinManager1.Options.PixelsPerInch := GetPPI(MainForm.sSkinProvider1.SkinData);
    MainForm.sSkinManager1.Options.ScaleMode := smCustomPPI;
    Application.ProcessMessages;
  end;
  MainForm.sTitleBar1.Items[11].Caption := 'Custom PPI: ' + IntToStr(sTrackBar1.Position);
  sGroupBox1.Caption := 'Custom Scale: ' + IntToStr(sTrackBar1.Position) + ' PPI';
  SetPPIAnimated(sTrackBar1.Position);
end;


procedure TMainForm.sTitleBar1Items0Click(Sender: TObject);
begin
  sTitleBar1.Items[0].Visible := False;      // Btn
  sTitleBar1.Items[1].Visible := False;      // Spacing
  sSkinProvider1.TitleIcon.Visible := False; // Title icon
end;


procedure TMainForm.sTitleBar1Items11Click(Sender: TObject);
begin
  ShowPopupForm(FormPopupScaling, acMousePos);
end;


procedure TMainForm.sSkinManager1GetPopupItemData(Item: TMenuItem; State: TOwnerDrawState; ItemData: TacMenuItemData);
begin
  // Example of custom font in menu items
  if (Item = Builtinskins1) then begin
    ItemData.Font.Style := [fsBold];
    ItemData.Font.Size := ItemData.Font.Size + 2;
  end;
end;


procedure TMainForm.Exit2Click(Sender: TObject);
begin
  Close;
end;


procedure TMainForm.GenerateSkinsList;
var
  sl: TacStringList;
  i: integer;
  mi: TMenuItem;
begin
  // Menu update
  Builtinskins1.Clear;
  // Build-in skins list
  for i := 0 to sSkinManager1.InternalSkins.Count - 1 do begin
    mi := TMenuItem.Create(Application);
    mi.Caption := sSkinManager1.InternalSkins[i].Name;
    if mi.Caption = sSkinManager1.SkinName then
      mi.Checked := True;
      
    mi.OnClick := SkinMenuClick;
    mi.RadioItem := True;
    Builtinskins1.Add(mi);
  end;
  // External skins list
  Externalskins1.Clear;
  sl := TacStringList.Create;
  sSkinManager1.GetExternalSkinNames(sl);
  if sl.Count > 0 then begin
    sl.Sort;
    for i := 0 to sl.Count - 1 do begin
      mi := TMenuItem.Create(Application);
      mi.Caption := sl[i];
      if mi.Caption = sSkinManager1.SkinName then
        mi.Checked := True;

      mi.OnClick := SkinMenuClick;
      mi.RadioItem := True;
      if (i <> 0) and (i mod 20 = 0) then
        mi.Break := mbBreak;
        
      Externalskins1.Add(mi);
    end;
    Externalskins1.Enabled := True;
  end
  else
    Externalskins1.Enabled := False;
    
  FreeAndNil(sl);
end;


procedure TMainForm.SkinMenuClick(Sender: TObject);
begin
  sSkinManager1.SkinName := DelChars(TMenuItem(Sender).Caption, '&');
end;


procedure TMainForm.sSkinManager1AfterChange(Sender: TObject);
var
  i: integer;
  b: boolean;
begin
  i := sSkinManager1.GetSkinIndex(s_Form);
  if sSkinManager1.IsValidSkinIndex(i) then begin
    b := True;
    for i := 0 to Builtinskins1.Count - 1 do // Search of item with current skin name
      if b and (DelChars(Builtinskins1.Items[i].Caption, '&') = sSkinManager1.SkinName) then begin
        Builtinskins1.Items[i].Checked := True;
        b := False;
      end
      else
        Builtinskins1.Items[i].Checked := False;

    for i := 0 to Externalskins1.Count - 1 do // Search of item with current skin name
      if b and (DelChars(Externalskins1.Items[i].Caption, '&') = sSkinManager1.SkinName) then begin
        Externalskins1.Items[i].Checked := True;
        b := False;
      end
      else
        Externalskins1.Items[i].Checked := False;

    // Receive brightness limits from current skin
    sScrollBar4.Min := sSkinManager1.SkinCommonInfo.BrightMin;
    sScrollBar4.Max := sSkinManager1.SkinCommonInfo.BrightMax;
  end;
end;


procedure TMainForm.sSkinManager1GetMenuExtraLineData(FirstItem: TMenuItem; var SkinSection, Caption: String; var Glyph: TBitmap; var LineVisible: Boolean);

  procedure PrepareGlyph;
  begin
    Glyph := TBitmap.Create;
    // Prepare transparent background
    Glyph.Canvas.Brush.Color := clFuchsia;
    Glyph.Canvas.FillRect(Rect(0, 0, Glyph.Width, Glyph.Height));
    Glyph.Transparent := True;
    // Receiving from imagelist
    sAlphaImageList1.DrawingStyle := dsTransparent;
    sAlphaImageList1.GetBitmap(5, Glyph);
  end;

begin
  // If item is a first subitem of 'Available skins' (in system menu)
  if (sSkinProvider1.SystemMenu.Items[0].Name = s_SkinSelectItemName) and
       (sSkinProvider1.SystemMenu.Items[0].Count > 8) and // Height of popup-menu must be higher then extra-line width...
         (FirstItem = sSkinProvider1.SystemMenu.Items[0].Items[0]) then begin
    LineVisible := True; // External line available
    Caption := sSkinProvider1.SystemMenu.Items[0].Caption;
    PrepareGlyph;
  end
  else
    if (Externalskins1.Count > 8) and (FirstItem = Externalskins1.Items[0]) then begin
      LineVisible := True;
      Caption := Externalskins1.Caption;
    end
    else
      if (FirstItem = PopupMenu1.Items[0]) then begin
        LineVisible := True;
        Caption := 'Skinned menu';
        PrepareGlyph;
      end
      else
        LineVisible := False;
end;


procedure TMainForm.sComboBox5Change(Sender: TObject);
begin
  if sComboBox5.ItemIndex = 0 then // Default
    sBitBtn1.SkinData.ColorTone := clNone
  else
    try
      sBitBtn1.SkinData.ColorTone := colorToRGB(StringToColor(sComboBox5.Text));
    except
      sBitBtn1.SkinData.ColorTone := clNone
    end;

  sBitBtn2.SkinData.ColorTone := sBitBtn1.SkinData.ColorTone;
end;


procedure TMainForm.sCheckBox11Click(Sender: TObject);
const
  OuterModes: array [boolean] of TacOuterVisibility = (ovNone, ovAlways);
begin
  sBitBtn1.SkinData.OuterEffects.Visibility := OuterModes[sCheckBox11.Checked];
  sBitBtn2.SkinData.OuterEffects.Visibility := OuterModes[sCheckBox11.Checked];
  sBitBtn3.SkinData.OuterEffects.Visibility := OuterModes[sCheckBox11.Checked];
  // sSkinManager1.Effects.AllowOuterEffects must be True for effects showing
end;


procedure TMainForm.sCheckBox12Click(Sender: TObject);
begin
  sBitBtn1.Blend := integer(sCheckBox12.Checked) * 50;
  sBitBtn2.Blend := sBitBtn1.Blend;
  sBitBtn3.Blend := sBitBtn1.Blend;
end;


procedure TMainForm.sScrollBar4Change(Sender: TObject);
begin
  sLabel5.Caption := IntToStr(sScrollBar4.Position);
end;


procedure TMainForm.sScrollBar4MouseUp(Sender: TObject; Button: TMouseButton; Shift: TShiftState; X, Y: Integer);
begin
  sLabel5.Caption := IntToStr(sScrollBar4.Position);
  sSkinManager1.BeginUpdate;
  sSkinManager1.Brightness := sScrollBar4.Position;
  sSkinManager1.EndUpdate(True, False);
end;


procedure TMainForm.sCheckBox13Click(Sender: TObject);
begin
  sSkinManager1.ExtendedBorders := sCheckBox13.Checked
end;


procedure TMainForm.sCheckBox14Click(Sender: TObject);
begin
  sSkinProvider1.DrawNonClientArea := sCheckBox14.Checked
end;


procedure TMainForm.sCheckBox15Click(Sender: TObject);
begin
  sSkinManager1.BeginUpdate;
  sSkinManager1.Effects.AllowOuterEffects := sCheckBox15.Checked;
  sSkinManager1.EndUpdate(True, False); // Update without animation
end;


procedure TMainForm.sCheckBox16Click(Sender: TObject);
begin
  sSkinManager1.BeginUpdate;
  sSkinManager1.Effects.DiscoloredGlyphs := sCheckBox16.Checked;
  sSkinManager1.EndUpdate(True, False); // Update without animation
end;


procedure TMainForm.sBitBtn5Click(Sender: TObject);
begin
  LockForms(sSkinManager1);
  if Application.BiDiMode = bdLeftToRight then begin
    Application.BiDiMode := bdRightToLeft;
    sBitBtn5.ImageIndex := 4;
  end
  else begin
    Application.BiDiMode := bdLeftToRight;
    sBitBtn5.ImageIndex := 3;
  end;
  SysLocale.MiddleEast := Application.BiDiMode = bdRightToLeft;
  ReflectControls(Self, True);
  sSkinManager1.RepaintForms;
end;


procedure TMainForm.sBitBtn6Click(Sender: TObject);
begin
  sSkinManager1.SkinName := sSkinManager1.GetRandomSkin;
  sSkinManager1.Active := True;
end;


procedure TMainForm.sCheckBox2Click(Sender: TObject);
begin
  if sCheckBox2.Checked then
    sSkinManager1.ScrollsOptions.ButtonsSize := -1 // Use standard size from system
  else
    sSkinManager1.ScrollsOptions.ButtonsSize := 0; // Hide
end;


procedure TMainForm.sCheckBox3Click(Sender: TObject);
begin
  if sCheckBox3.Checked then
    sSkinManager1.ScrollsOptions.ScrollSize := 24  // Hide
  else
    sSkinManager1.ScrollsOptions.ScrollSize := -1; // Use standard size from system
end;


procedure TMainForm.sCheckBox4Click(Sender: TObject);
begin
  sSkinManager1.Effects.AllowAnimation := sCheckBox4.Checked;
end;


procedure TMainForm.sBitBtn7Click(Sender: TObject);
begin
  ShellExecute(Application.Handle, 'open', PChar('http://www.alphaskins.com/sfiles/askindemo.zip'), nil, nil, 0);
end;

end.
