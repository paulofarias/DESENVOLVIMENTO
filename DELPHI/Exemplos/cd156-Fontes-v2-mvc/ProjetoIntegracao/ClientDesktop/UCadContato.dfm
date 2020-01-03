object FCadContato: TFCadContato
  Left = 0
  Top = 0
  Caption = 'Cadastro de Contatos'
  ClientHeight = 423
  ClientWidth = 555
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
  object lblNome: TLabel
    Left = 8
    Top = 8
    Width = 32
    Height = 14
    Caption = 'Nome'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object lblEmail: TLabel
    Left = 8
    Top = 48
    Width = 27
    Height = 14
    Caption = 'Email'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object lblTelefone: TLabel
    Left = 8
    Top = 88
    Width = 49
    Height = 14
    Caption = 'Telefone'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Bevel1: TBevel
    Left = 8
    Top = 185
    Width = 539
    Height = 1
    Shape = bsTopLine
  end
  object lblPesquisa: TLabel
    Left = 8
    Top = 168
    Width = 46
    Height = 14
    Caption = 'Pesquisa'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object lblFiltro: TLabel
    Left = 8
    Top = 192
    Width = 26
    Height = 14
    Caption = 'Filtro'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object EdtNome: TDBEdit
    Left = 8
    Top = 22
    Width = 318
    Height = 22
    DataField = 'NOME'
    DataSource = DSContato
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object EdtEmail: TDBEdit
    Left = 8
    Top = 62
    Width = 318
    Height = 22
    DataField = 'EMAIL'
    DataSource = DSContato
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
  end
  object EdtTelefone: TDBEdit
    Left = 8
    Top = 102
    Width = 129
    Height = 22
    DataField = 'TELEFONE'
    DataSource = DSContato
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object BtnNovo: TButton
    Left = 8
    Top = 136
    Width = 75
    Height = 25
    Caption = 'Novo'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = BtnNovoClick
  end
  object BtnAlterar: TButton
    Left = 89
    Top = 136
    Width = 75
    Height = 25
    Caption = 'Alterar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = BtnAlterarClick
  end
  object BtnSalvar: TButton
    Left = 170
    Top = 136
    Width = 75
    Height = 25
    Caption = 'Salvar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    OnClick = BtnSalvarClick
  end
  object BtnExcluir: TButton
    Left = 251
    Top = 136
    Width = 75
    Height = 25
    Caption = 'Excluir'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    OnClick = BtnExcluirClick
  end
  object GridPesquisa: TDBGrid
    Left = 8
    Top = 238
    Width = 539
    Height = 177
    DataSource = DSContato
    TabOrder = 7
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'ID'
        Title.Alignment = taCenter
        Visible = False
      end
      item
        Expanded = False
        FieldName = 'NOME'
        Title.Alignment = taCenter
        Width = 206
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'EMAIL'
        Title.Alignment = taCenter
        Width = 199
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'TELEFONE'
        Title.Alignment = taCenter
        Width = 86
        Visible = True
      end>
  end
  object EdtPesquisa: TEdit
    Left = 159
    Top = 211
    Width = 388
    Height = 21
    TabOrder = 8
    OnChange = EdtPesquisaChange
  end
  object EdtFiltro: TComboBox
    Left = 8
    Top = 211
    Width = 145
    Height = 22
    BevelKind = bkFlat
    Style = csOwnerDrawFixed
    ItemIndex = 0
    TabOrder = 9
    Text = 'Nome'
    Items.Strings = (
      'Nome'
      'Email'
      'Telefone')
  end
  object DSContato: TDataSource
    AutoEdit = False
    DataSet = FDataModule.CDSContato
    OnStateChange = DSContatoStateChange
    Left = 344
    Top = 8
  end
end
