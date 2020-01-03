object CadastroClienteF: TCadastroClienteF
  Left = 0
  Top = 0
  Caption = 'Cadastro de clientes'
  ClientHeight = 298
  ClientWidth = 449
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
    Left = 24
    Top = 32
    Width = 33
    Height = 16
    Caption = 'Nome'
  end
  object Label2: TLabel
    Left = 24
    Top = 88
    Width = 22
    Height = 16
    Caption = 'CPF'
  end
  object Label3: TLabel
    Left = 24
    Top = 152
    Width = 50
    Height = 16
    Caption = 'Telefone'
  end
  object edtNome: TEdit
    Left = 85
    Top = 29
    Width = 324
    Height = 24
    TabOrder = 0
  end
  object edtCPF: TEdit
    Left = 85
    Top = 85
    Width = 324
    Height = 24
    TabOrder = 1
  end
  object edtTelefone: TEdit
    Left = 85
    Top = 149
    Width = 324
    Height = 24
    TabOrder = 2
  end
  object BtnSalvar: TBitBtn
    Left = 334
    Top = 248
    Width = 75
    Height = 25
    Kind = bkOK
    NumGlyphs = 2
    TabOrder = 3
    OnClick = BtnSalvarClick
  end
  object BitBtn2: TBitBtn
    Left = 24
    Top = 248
    Width = 89
    Height = 25
    Caption = 'Cancelar'
    Kind = bkCancel
    NumGlyphs = 2
    TabOrder = 4
  end
end
