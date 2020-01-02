object frmConsRecibos: TfrmConsRecibos
  Left = 0
  Top = 0
  BorderStyle = bsToolWindow
  Caption = 'Consultar recibos'
  ClientHeight = 270
  ClientWidth = 746
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 0
    Top = 0
    Width = 746
    Height = 270
    Align = alClient
    DataSource = ds
    DrawingStyle = gdsGradient
    Options = [dgTitles, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgAlwaysShowSelection, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    PopupMenu = PopupMenu1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    OnDrawColumnCell = DBGrid1DrawColumnCell
    Columns = <
      item
        Expanded = False
        FieldName = 'id'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'Tipo'
        Width = 116
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'dt_emissao'
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'nome'
        Width = 283
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'vlr_recibo'
        Width = 103
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'referente'
        Width = 364
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'observacao'
        Width = 300
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'emitente'
        Width = 363
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'endereco'
        Width = 267
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'cpf_cnpj'
        Width = 134
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'cidade'
        Width = 289
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'dt_cadastro'
        Width = 77
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'hr_cadastro'
        Width = 73
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'user_cadastro'
        Width = 182
        Visible = True
      end>
  end
  object cds: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'dspConsultas'
    Left = 272
    Top = 128
    object cdsid: TIntegerField
      DisplayLabel = 'C'#243'digo:'
      FieldName = 'id'
      Required = True
      DisplayFormat = '#000000'
    end
    object cdstipo_recibo: TIntegerField
      DisplayLabel = 'Tipo (0=Receber; 1=Pagar)'
      FieldName = 'tipo_recibo'
      Required = True
    end
    object cdsdt_emissao: TDateField
      DisplayLabel = 'Dt.Emiss'#227'o:'
      FieldName = 'dt_emissao'
      Required = True
    end
    object cdsnome: TStringField
      DisplayLabel = 'Referente:'
      FieldName = 'nome'
      Required = True
      Size = 100
    end
    object cdsvlr_recibo: TFMTBCDField
      DisplayLabel = 'Valor:'
      FieldName = 'vlr_recibo'
      Required = True
      currency = True
      Precision = 20
      Size = 2
    end
    object cdsreferente: TStringField
      DisplayLabel = 'Motivo:'
      FieldName = 'referente'
      Required = True
      Size = 100
    end
    object cdsobservacao: TStringField
      DisplayLabel = 'Observa'#231#227'o:'
      FieldName = 'observacao'
      Required = True
      Size = 255
    end
    object cdsemitente: TStringField
      DisplayLabel = 'Emitente:'
      FieldName = 'emitente'
      Required = True
      Size = 100
    end
    object cdsendereco: TStringField
      DisplayLabel = 'Endere'#231'o:'
      FieldName = 'endereco'
      Required = True
      Size = 100
    end
    object cdscpf_cnpj: TStringField
      DisplayLabel = 'CPF/CNPJ:'
      FieldName = 'cpf_cnpj'
      Required = True
      Size = 30
    end
    object cdscidade: TStringField
      DisplayLabel = 'Cidade:'
      FieldName = 'cidade'
      Required = True
      Size = 100
    end
    object cdsdt_cadastro: TDateField
      DisplayLabel = 'Dt.Cadastro:'
      FieldName = 'dt_cadastro'
      Required = True
    end
    object cdshr_cadastro: TTimeField
      DisplayLabel = 'Hr.Cadastro:'
      FieldName = 'hr_cadastro'
      Required = True
    end
    object cdsuser_cadastro: TStringField
      DisplayLabel = 'Usu'#225'rio:'
      FieldName = 'user_cadastro'
      Required = True
      Size = 50
    end
    object cdsTipo: TStringField
      DisplayLabel = 'Tipo:'
      FieldName = 'Tipo'
      Size = 11
    end
  end
  object ds: TDataSource
    DataSet = cds
    Left = 328
    Top = 128
  end
  object PopupMenu1: TPopupMenu
    Left = 248
    Top = 64
    object Imprimir1: TMenuItem
      Caption = 'Imprimir'
      OnClick = Imprimir1Click
    end
  end
end
