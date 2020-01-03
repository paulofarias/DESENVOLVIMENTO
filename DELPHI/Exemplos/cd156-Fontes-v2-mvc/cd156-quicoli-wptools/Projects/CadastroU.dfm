object CadastroF: TCadastroF
  Left = 0
  Top = 0
  Caption = 'Cadastro'
  ClientHeight = 219
  ClientWidth = 722
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object gridClientes: TDBGrid
    Left = 8
    Top = 8
    Width = 705
    Height = 169
    DataSource = dsClientes
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'Nome'
        Width = 150
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Endereco'
        Width = 150
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Bairro'
        Width = 150
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Cidade'
        Width = 150
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Uf'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'CEP'
        Visible = True
      end>
  end
  object Button1: TButton
    Left = 272
    Top = 183
    Width = 177
    Height = 25
    Caption = 'Imprimir'
    TabOrder = 1
    OnClick = Button1Click
  end
  object WPRichText1: TWPRichText
    Left = 527
    Top = 183
    Width = 100
    Height = 33
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
    OnMailMergeGetText = WPRichText1MailMergeGetText
    TabOrder = 2
    Visible = False
  end
  object cdsClientes: TClientDataSet
    Aggregates = <>
    Params = <>
    Left = 368
    Top = 48
    object cdsClientesNome: TStringField
      FieldName = 'Nome'
      Size = 100
    end
    object cdsClientesEndereco: TStringField
      FieldName = 'Endereco'
      Size = 100
    end
    object cdsClientesBairro: TStringField
      FieldName = 'Bairro'
      Size = 100
    end
    object cdsClientesCidade: TStringField
      FieldName = 'Cidade'
      Size = 100
    end
    object cdsClientesUf: TStringField
      FieldName = 'Uf'
      Size = 2
    end
    object cdsClientesCEP: TStringField
      FieldName = 'CEP'
      Size = 8
    end
  end
  object dsClientes: TDataSource
    DataSet = cdsClientes
    Left = 408
    Top = 48
  end
end
