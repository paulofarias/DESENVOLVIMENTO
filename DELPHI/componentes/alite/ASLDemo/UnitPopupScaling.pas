unit UnitPopupScaling;

interface

uses
  Windows, Messages, SysUtils, Variants, Classes, Graphics, Controls, Forms, Dialogs, StdCtrls, sScrollBar,
  ImgList, acAlphaImageList, sSkinProvider, ExtCtrls, Buttons, sSpeedButton, sLabel, sPanel,
  ComCtrls, sTrackBar;

type
  TFormPopupScaling = class(TForm)
    sPanel1: TsPanel;
    sLabel1: TsLabel;
    sLabel2: TsLabel;
    sSpeedButton1: TsSpeedButton;
    sSpeedButton3: TsSpeedButton;
    sSkinProvider1: TsSkinProvider;
    sTrackBar1: TsTrackBar;
    sPanel2: TsPanel;
    procedure sSpeedButton1Click(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure sTrackBar1UserChanged(Sender: TObject);
    procedure sTrackBar1UserChange(Sender: TObject);
    procedure sTrackBar1SkinPaint(Sender: TObject; Canvas: TCanvas);
  public
    procedure ClosePopup(AnimationAllowed: boolean = False);
    procedure MakeSelected(Btn: TsSpeedButton; Selected: boolean);
  end;


var
  FormPopupScaling: TFormPopupScaling;

implementation

{$R *.dfm}

uses MainUnit, sVCLUtils, acntTypes, acntUtils, sSkinManager, sConst, sCommonData, sGraphUtils;


procedure TFormPopupScaling.ClosePopup(AnimationAllowed: boolean);
begin
  if not AnimationAllowed then begin
    sSkinProvider1.AllowAnimation := False; // Quick hiding
    Close;
    sSkinProvider1.AllowAnimation := True;
    Application.ProcessMessages;
  end
  else
    Close;
end;


procedure TFormPopupScaling.FormShow(Sender: TObject);
begin
  sTrackBar1.Position := GetPPI(MainForm.sSkinProvider1.SkinData);
  sSpeedButton3.Caption := 'Custom PixelsPerInch value: ' + IntToStr(sTrackBar1.Position);
end;


procedure TFormPopupScaling.MakeSelected(Btn: TsSpeedButton; Selected: boolean);
begin
  if Selected then begin
    Btn.Font.Style := [fsBold];
    Btn.ImageIndex := 0;
  end
  else begin
    Btn.Font.Style := [];
    Btn.ImageIndex := 1;
  end;
end;


procedure TFormPopupScaling.sSpeedButton1Click(Sender: TObject);
var
  Mode: integer;
begin
  Mode := TsSpeedButton(Sender).Tag;
  case Mode of
    0: begin // Use Delphi VCL auto scaling
      // Hiding of popup window
      ClosePopup;
      MainForm.sSkinManager1.Options.ScaleMode := smVCL;
      MainForm.sTitleBar1.Items[11].Caption :='Auto PPI: ' + IntToStr(GetPPI(MainForm.sSkinProvider1.SkinData));
    end;
    2: begin // Custom
      sTrackBar1.Position := GetPPI(MainForm.sSkinProvider1.SkinData);
      MainForm.sSkinManager1.Options.PixelsPerInch := sTrackBar1.Position;
      MainForm.sTitleBar1.Items[11].Caption := 'Custom PPI: ' + IntToStr(sTrackBar1.Position);
      MainForm.sSkinManager1.Options.ScaleMode := smCustomPPI;
    end;
  end;
  MakeSelected(sSpeedButton1, Mode = 0);
  MakeSelected(sSpeedButton3, Mode = 2);
end;


procedure TFormPopupScaling.sTrackBar1SkinPaint(Sender: TObject; Canvas: TCanvas);
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


procedure TFormPopupScaling.sTrackBar1UserChange(Sender: TObject);
begin
  sSpeedButton3.Caption := 'Custom PixelsPerInch value: ' + IntToStr(sTrackBar1.Position);
end;


procedure TFormPopupScaling.sTrackBar1UserChanged(Sender: TObject);
begin
  ClosePopup;
  if MainForm.sSkinManager1.Options.ScaleMode <> smCustomPPI then begin
    MainForm.sSkinManager1.Options.PixelsPerInch := GetPPI(MainForm.sSkinProvider1.SkinData);
    MainForm.sSkinManager1.Options.ScaleMode := smCustomPPI;
    Application.ProcessMessages;
  end;
  MakeSelected(sSpeedButton1, False);
  MakeSelected(sSpeedButton3, True);
  MainForm.sTitleBar1.Items[11].Caption := 'Custom PPI: ' + IntToStr(sTrackBar1.Position);
  sSpeedButton3.Caption := 'Custom PixelsPerInch value: ' + IntToStr(sTrackBar1.Position);
  SetPPIAnimated(sTrackBar1.Position);
end;

end.
