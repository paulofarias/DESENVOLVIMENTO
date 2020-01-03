object VendaF: TVendaF
  Left = 0
  Top = 0
  Caption = 'Vendas'
  ClientHeight = 473
  ClientWidth = 747
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  DesignSize = (
    747
    473)
  PixelsPerInch = 120
  TextHeight = 16
  object Label1: TLabel
    Left = 8
    Top = 69
    Width = 39
    Height = 16
    Anchors = [akRight, akBottom]
    Caption = 'Cliente'
    ExplicitTop = 16
  end
  object Label2: TLabel
    Left = 8
    Top = 125
    Width = 44
    Height = 16
    Anchors = [akRight, akBottom]
    Caption = 'Produto'
    ExplicitTop = 72
  end
  object Label3: TLabel
    Left = 519
    Top = 125
    Width = 20
    Height = 16
    Anchors = [akRight, akBottom]
    Caption = 'Qtd'
    ExplicitTop = 72
  end
  object Total: TLabel
    Left = 519
    Top = 381
    Width = 50
    Height = 28
    Anchors = [akRight, akBottom]
    Caption = 'Total'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ExplicitTop = 328
  end
  object CMBCliente: TComboBox
    Left = 53
    Top = 61
    Width = 684
    Height = 24
    Anchors = [akRight, akBottom]
    TabOrder = 0
    Text = 'CMBCliente'
  end
  object CMBProduto: TComboBox
    Left = 53
    Top = 117
    Width = 452
    Height = 24
    Anchors = [akRight, akBottom]
    TabOrder = 1
  end
  object edtQtd: TEdit
    Left = 545
    Top = 117
    Width = 80
    Height = 24
    Anchors = [akRight, akBottom]
    TabOrder = 2
  end
  object BtnInserir: TButton
    Left = 640
    Top = 117
    Width = 97
    Height = 25
    Anchors = [akRight, akBottom]
    Caption = 'Inserir'
    TabOrder = 3
    OnClick = BtnInserirClick
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 164
    Width = 729
    Height = 193
    Anchors = [akRight, akBottom]
    DataSource = DtsItemVenda
    TabOrder = 4
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -13
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'Produto'
        Width = 170
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Quantidade'
        Width = 162
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Valor'
        Width = 191
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Subtotal'
        Width = 183
        Visible = True
      end>
  end
  object edtValor: TEdit
    Left = 579
    Top = 379
    Width = 158
    Height = 32
    Anchors = [akRight, akBottom]
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
  end
  object BtnFinalizar: TButton
    Left = 521
    Top = 432
    Width = 218
    Height = 33
    Anchors = [akRight, akBottom]
    Caption = 'Finalizar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    OnClick = BtnFinalizarClick
  end
  object DtsItemVenda: TDataSource
    DataSet = ADItemVenda
    Left = 264
    Top = 368
  end
  object ADItemVenda: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    Left = 136
    Top = 368
    Data = {
      680000009619E0BD01000000180000000400000000000300000068000750726F
      6475746F01004900000001000557494454480200020064000A5175616E746964
      61646504000100000000000556616C6F72080004000000000008537562746F74
      616C08000400000000000000}
    object ADItemVendaProduto: TStringField
      FieldName = 'Produto'
      Size = 100
    end
    object ADItemVendaQuantidade: TIntegerField
      FieldName = 'Quantidade'
    end
    object ADItemVendaValor: TFloatField
      FieldName = 'Valor'
    end
    object ADItemVendaSubtotal: TFloatField
      FieldName = 'Subtotal'
    end
  end
end
