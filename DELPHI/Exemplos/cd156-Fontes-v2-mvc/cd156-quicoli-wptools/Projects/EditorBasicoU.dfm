object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'EditorBasicoF'
  ClientHeight = 312
  ClientWidth = 812
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object WPToolbar1: TWPToolbar
    Left = 0
    Top = 0
    Width = 812
    Height = 30
    ImageStretch = False
    ColorTo = 15790316
    UseDockManager = False
    ShowAllElements = wpSelectedElements
    Align = alTop
    BevelLines = []
    AutoEnabling = True
    WidthBetweenGroups = 4
    MarginBottom = 0
    MarginTop = 0
    sel_DatabaseIcons = []
    sel_InsertIcons = [SelInsImage]
    FlatButtons = True
    ButtonHeight = 22
  end
  object WPRichText1: TWPRichText
    Left = 26
    Top = 56
    Width = 786
    Height = 223
    RTFVariables = <>
    WPToolBar = WPToolbar1
    WPRuler = WPRuler1
    VRuler = WPVertRuler1
    ActionList = ActionList1
    ProtectedProp = []
    InsertPointAttr.TextColor = clRed
    InsertPointAttr.UseTextColor = True
    HyperlinkTextAttr.Underline = tsTRUE
    HyperlinkTextAttr.UnderlineColor = clBlue
    HyperlinkTextAttr.UseUnderlineColor = True
    HyperlinkTextAttr.HotUnderlineColor = clRed
    HyperlinkTextAttr.HotTextColor = clRed
    HyperlinkTextAttr.HotUnderline = tsTRUE
    HyperlinkTextAttr.HotStyleIsActive = True
    HiddenTextAttr.Hidden = True
    OnTextObjectMouseDown = WPRichText1TextObjectMouseDown
    OnWorkOnTextChanged = WPRichText1WorkOnTextChanged
    Align = alClient
    PopupMenu = popCorrecao
    TabOrder = 1
  end
  object WPRuler1: TWPRuler
    Left = 0
    Top = 30
    Width = 812
    Height = 26
    DrawOptions = []
    ColorMargin = clAppWorkSpace
    ColorBack = clBtnFace
    Align = alTop
  end
  object WPVertRuler1: TWPVertRuler
    Left = 0
    Top = 56
    Width = 26
    Height = 223
    DrawOptions = []
    ColorMargin = clAppWorkSpace
    ColorBack = clBtnFace
  end
  object Panel1: TPanel
    Left = 0
    Top = 279
    Width = 812
    Height = 33
    Align = alBottom
    TabOrder = 4
    DesignSize = (
      812
      33)
    object Label2: TLabel
      Left = 211
      Top = 11
      Width = 132
      Height = 13
      Caption = #193'era do Cabe'#231'alho/Rodap'#233
    end
    object Label1: TLabel
      Left = 15
      Top = 10
      Width = 28
      Height = 13
      Anchors = [akLeft, akBottom]
      Caption = 'Editar'
    end
    object Zoom: TLabel
      Left = 510
      Top = 9
      Width = 26
      Height = 13
      Caption = 'Zoom'
    end
    object ComboArea: TComboBox
      Left = 349
      Top = 7
      Width = 145
      Height = 21
      Style = csDropDownList
      ItemIndex = 0
      TabOrder = 0
      Text = 'Todas p'#225'ginas'
      OnChange = ComboAreaChange
      Items.Strings = (
        'Todas p'#225'ginas'
        'P'#225'ginas '#237'mpares'
        'P'#225'ginas pares'
        'Primeira p'#225'gina')
    end
    object comboEditar: TComboBox
      Left = 50
      Top = 6
      Width = 145
      Height = 21
      Style = csDropDownList
      ItemIndex = 0
      TabOrder = 1
      Text = 'Corpo do Texto'
      OnChange = comboEditarChange
      Items.Strings = (
        'Corpo do Texto'
        'Cabe'#231'alho'
        'Rodap'#233)
    end
    object EditZoom: TSpinEdit
      Left = 542
      Top = 6
      Width = 61
      Height = 22
      MaxValue = 0
      MinValue = 0
      TabOrder = 2
      Value = 100
      OnChange = EditZoomChange
    end
    object btNormal: TButton
      Left = 609
      Top = 5
      Width = 75
      Height = 25
      Caption = 'Layouts'
      DropDownMenu = PopupMenu1
      Style = bsSplitButton
      TabOrder = 3
    end
    object Button1: TButton
      Left = 686
      Top = 5
      Width = 115
      Height = 25
      Caption = 'Corre'#231#227'o Ortogr'#225'fica'
      PopupMenu = popCorrecao
      TabOrder = 4
      OnClick = Button1Click
    end
  end
  object MainMenu1: TMainMenu
    Left = 392
    Top = 128
    object Arquivo1: TMenuItem
      Caption = 'Arquivo'
      object Fechar1: TMenuItem
        Action = WPAOpen1
      end
      object Sair1: TMenuItem
        Action = WPASave1
      end
    end
    object Campos1: TMenuItem
      Caption = 'Campos'
      OnClick = Campos1Click
    end
  end
  object ActionList1: TActionList
    Left = 192
    Top = 160
    object WPAOpen1: TWPAOpen
      Category = 'WPT_File'
      Caption = 'Open'
      Hint = 'Open'
      ImageIndex = 55
    end
    object WPASave1: TWPASave
      Category = 'WPT_File'
      Caption = 'Save'
      Hint = 'Save'
      ImageIndex = 65
    end
    object WPALayoutNormal1: TWPALayoutNormal
      Caption = 'Normal'
      Hint = 'Normal'
      ImageIndex = 99
    end
    object WPALayoutNormal2: TWPALayoutNormal
      Caption = 'Normal'
      Hint = 'Normal'
      ImageIndex = 99
    end
    object WPALayoutFull1: TWPALayoutFull
      Caption = 'Pagelayout'
      Hint = 'Pagelayout'
      ImageIndex = 100
    end
    object WPALayoutDouble1: TWPALayoutDouble
      Caption = 'Double Pageview'
      Hint = 'Double Pageview'
      ImageIndex = 108
    end
  end
  object GraphicPopup: TPopupMenu
    OwnerDraw = True
    Left = 325
    Top = 156
    object FixedPopup: TMenuItem
      Caption = 'Posi'#231#227'o'
      object asCharacter1: TMenuItem
        Caption = 'Ancorado ao caracter'
        OnClick = asCharacter1Click
      end
      object Auto1: TMenuItem
        Caption = 'M'#243'vel - Quebra autom'#225'tica'
        OnClick = Auto1Click
      end
      object MovableGraphicWrapLeft1: TMenuItem
        Caption = 'M'#243'vel - Quebra '#224' esquerda'
        OnClick = MovableGraphicWrapLeft1Click
      end
      object MovableGraphicWrapRigth1: TMenuItem
        Caption = 'M'#243'vel - Quebra '#224' direita'
        OnClick = MovableGraphicWrapRigth1Click
      end
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 576
    Top = 168
    object Normal1: TMenuItem
      Caption = 'Normal'
      OnClick = Normal1Click
    end
    object Impresso1: TMenuItem
      Caption = 'Impress'#227'o'
      OnClick = Impresso1Click
    end
  end
  object popCorrecao: TPopupMenu
    Left = 416
    Top = 184
    object itemCorrecao: TMenuItem
      Caption = 'Corre'#231#227'o Ortogr'#225'fica'
    end
  end
end
