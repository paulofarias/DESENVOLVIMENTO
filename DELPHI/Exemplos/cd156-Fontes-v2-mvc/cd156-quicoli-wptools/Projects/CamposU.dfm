object CamposF: TCamposF
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Campos'
  ClientHeight = 252
  ClientWidth = 220
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  FormStyle = fsStayOnTop
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 13
  object listCampos: TListBox
    Left = 0
    Top = 0
    Width = 220
    Height = 252
    Align = alClient
    ItemHeight = 13
    Items.Strings = (
      'Nome'
      'Endereco'
      'Bairro'
      'Cidade'
      'Uf'
      'CEP')
    TabOrder = 0
    OnDblClick = listCamposDblClick
    ExplicitLeft = 104
    ExplicitTop = 96
    ExplicitWidth = 121
    ExplicitHeight = 97
  end
end
