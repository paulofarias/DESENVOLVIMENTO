object FormPopupScaling: TFormPopupScaling
  Left = 0
  Top = 0
  Caption = 'FormPopupScaling'
  ClientHeight = 109
  ClientWidth = 343
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 120
  TextHeight = 16
  object sPanel1: TsPanel
    Left = 0
    Top = 0
    Width = 343
    Height = 109
    SkinData.SkinSection = 'MAINMENU'
    Align = alClient
    BorderWidth = 3
    TabOrder = 0
    object sLabel1: TsLabel
      Left = 28
      Top = 72
      Width = 14
      Height = 16
      Caption = '96'
    end
    object sLabel2: TsLabel
      Left = 295
      Top = 72
      Width = 21
      Height = 16
      Caption = '288'
    end
    object sSpeedButton1: TsSpeedButton
      Left = 4
      Top = 4
      Width = 335
      Height = 29
      Align = alTop
      Caption = 'Auto scaling'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      Margin = 8
      ParentFont = False
      OnClick = sSpeedButton1Click
      AnimatEvents = []
      SkinData.SkinSection = 'MENUITEM'
      Alignment = taLeftJustify
      TextAlignment = taLeftJustify
      ImageIndex = 0
    end
    object sSpeedButton3: TsSpeedButton
      Tag = 2
      Left = 4
      Top = 33
      Width = 335
      Height = 29
      Align = alTop
      Caption = 'Custom PixelsPerInch value'
      Margin = 8
      OnClick = sSpeedButton1Click
      AnimatEvents = []
      SkinData.SkinSection = 'MENUITEM'
      Alignment = taLeftJustify
      TextAlignment = taLeftJustify
      ImageIndex = 1
    end
    object sTrackBar1: TsTrackBar
      Left = 48
      Top = 68
      Width = 241
      Height = 33
      Max = 288
      Min = 96
      ParentShowHint = False
      PageSize = 24
      Position = 96
      ShowHint = True
      TabOrder = 0
      TickStyle = tsNone
      OnSkinPaint = sTrackBar1SkinPaint
      OnUserChange = sTrackBar1UserChange
      OnUserChanged = sTrackBar1UserChanged
    end
    object sPanel2: TsPanel
      Left = 16
      Top = 31
      Width = 313
      Height = 2
      BevelOuter = bvLowered
      TabOrder = 1
    end
  end
  object sSkinProvider1: TsSkinProvider
    AddedTitle.Font.Charset = DEFAULT_CHARSET
    AddedTitle.Font.Color = clNone
    AddedTitle.Font.Height = -13
    AddedTitle.Font.Name = 'Tahoma'
    AddedTitle.Font.Style = []
    SkinData.SkinSection = 'FORM'
    TitleButtons = <>
    Left = 280
    Top = 28
  end
end
