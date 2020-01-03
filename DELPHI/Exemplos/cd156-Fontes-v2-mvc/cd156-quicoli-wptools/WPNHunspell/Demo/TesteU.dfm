object TesteF: TTesteF
  Left = 0
  Top = 0
  Caption = 'Teste de integra'#231#227'o com corretor NHunspell'
  ClientHeight = 428
  ClientWidth = 679
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object WPRichText1: TWPRichText
    Left = 0
    Top = 49
    Width = 679
    Height = 379
    RTFVariables = <>
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
    Align = alClient
    PopupMenu = PopupMenu1
    TabOrder = 0
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 679
    Height = 49
    Align = alTop
    TabOrder = 1
    object btnAtivarCorrecao: TButton
      Left = 8
      Top = 8
      Width = 97
      Height = 25
      Caption = 'Ativar corre'#231#227'o'
      TabOrder = 0
      OnClick = btnAtivarCorrecaoClick
    end
    object Button1: TButton
      Left = 559
      Top = 8
      Width = 97
      Height = 25
      Caption = 'Desativa corre'#231#227'o'
      TabOrder = 1
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 111
      Top = 8
      Width = 97
      Height = 25
      Caption = 'Corre'#231#227'o total'
      TabOrder = 2
      OnClick = Button2Click
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 336
    Top = 216
    object este11: TMenuItem
      Caption = 'Teste1'
    end
    object este21: TMenuItem
      Caption = 'Teste2'
    end
    object itemCorrecao: TMenuItem
      Caption = 'Corre'#231#227'o ortogr'#225'fica'
    end
  end
end
