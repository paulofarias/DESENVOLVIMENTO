object CadastroProdutoF: TCadastroProdutoF
  Left = 0
  Top = 0
  Caption = 'Cadastro de produtos'
  ClientHeight = 211
  ClientWidth = 760
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 16
  object Label1: TLabel
    Left = 16
    Top = 16
    Width = 55
    Height = 16
    Caption = 'Descri'#231#227'o'
  end
  object Label2: TLabel
    Left = 16
    Top = 56
    Width = 95
    Height = 16
    Caption = 'Valor de compra'
  end
  object Label3: TLabel
    Left = 264
    Top = 56
    Width = 88
    Height = 16
    Caption = 'Valor de Venda'
  end
  object Label4: TLabel
    Left = 512
    Top = 56
    Width = 65
    Height = 16
    Caption = 'Quantidade'
  end
  object edtDescricaoProduto: TEdit
    Left = 128
    Top = 13
    Width = 601
    Height = 24
    TabOrder = 0
  end
  object edtValorCompra: TEdit
    Left = 128
    Top = 53
    Width = 113
    Height = 24
    TabOrder = 1
  end
  object edtValorVenda: TEdit
    Left = 368
    Top = 53
    Width = 113
    Height = 24
    TabOrder = 2
  end
  object edtQtd: TEdit
    Left = 616
    Top = 53
    Width = 113
    Height = 24
    TabOrder = 3
  end
  object BtnSalvar: TBitBtn
    Left = 486
    Top = 159
    Width = 75
    Height = 25
    Kind = bkOK
    NumGlyphs = 2
    TabOrder = 4
    OnClick = BtnSalvarClick
  end
  object BitBtn2: TBitBtn
    Left = 176
    Top = 159
    Width = 89
    Height = 25
    Caption = 'Cancelar'
    Kind = bkCancel
    NumGlyphs = 2
    TabOrder = 5
  end
end
