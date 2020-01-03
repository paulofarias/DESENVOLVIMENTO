object FrmMain: TFrmMain
  Left = 0
  Top = 0
  Caption = 'Delphi Client to WCF Data Service - GPauli'
  ClientHeight = 509
  ClientWidth = 694
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 694
    Height = 509
    ActivePage = TabSheet2
    Align = alClient
    TabOrder = 0
    ExplicitWidth = 656
    ExplicitHeight = 404
    object TabSheet2: TTabSheet
      Caption = 'Cadastro'
      ImageIndex = 1
      ExplicitLeft = 0
      ExplicitTop = 28
      object Label1: TLabel
        Left = 16
        Top = 403
        Width = 61
        Height = 13
        Caption = 'ID Categoria'
      end
      object Label2: TLabel
        Left = 16
        Top = 360
        Width = 27
        Height = 13
        Caption = 'Nome'
      end
      object Label3: TLabel
        Left = 16
        Top = 325
        Width = 51
        Height = 13
        Caption = 'Id Produto'
      end
      object grid: TStringGrid
        Left = 16
        Top = 168
        Width = 609
        Height = 121
        ColCount = 1
        FixedCols = 0
        RowCount = 2
        TabOrder = 0
        ColWidths = (
          64)
      end
      object btnGetProdutos: TButton
        Left = 16
        Top = 137
        Width = 105
        Height = 25
        Caption = 'Select Produtos'
        TabOrder = 1
        OnClick = btnGetProdutosClick
      end
      object txtIdProduto: TEdit
        Left = 104
        Top = 317
        Width = 121
        Height = 21
        TabOrder = 2
      end
      object txtNomeProduto: TEdit
        Left = 104
        Top = 357
        Width = 121
        Height = 21
        TabOrder = 3
      end
      object txtIdCategoria: TEdit
        Left = 104
        Top = 400
        Width = 121
        Height = 21
        TabOrder = 4
      end
      object BindNavigator1: TBindNavigator
        Left = 16
        Top = 440
        Width = 240
        Height = 25
        DataSource = BindSrc
        Orientation = orHorizontal
        TabOrder = 5
      end
      object gridCategorias: TStringGrid
        Tag = 2
        Left = 16
        Top = 50
        Width = 377
        Height = 81
        ColCount = 2
        FixedCols = 0
        RowCount = 2
        TabOrder = 6
        ColWidths = (
          64
          64)
      end
      object btnSelectCategorias: TButton
        Left = 16
        Top = 19
        Width = 105
        Height = 25
        Caption = 'Select Categorias'
        TabOrder = 7
        OnClick = btnSelectCategoriasClick
      end
    end
    object TabSheet1: TTabSheet
      Caption = 'HTTP GET'
      ExplicitLeft = 8
      ExplicitTop = 28
      ExplicitWidth = 648
      ExplicitHeight = 376
      object MM: TMemo
        Left = 0
        Top = 64
        Width = 686
        Height = 417
        Align = alBottom
        Anchors = [akLeft, akTop, akRight, akBottom]
        TabOrder = 0
        ExplicitWidth = 648
        ExplicitHeight = 312
      end
      object btnGet: TButton
        Left = 11
        Top = 17
        Width = 75
        Height = 25
        Caption = 'GET'
        TabOrder = 1
        OnClick = btnGetClick
      end
      object txtENTITY: TEdit
        Left = 112
        Top = 19
        Width = 193
        Height = 21
        TabOrder = 2
      end
    end
  end
  object IdHTTP: TIdHTTP
    AllowCookies = True
    ProxyParams.BasicAuthentication = False
    ProxyParams.ProxyPort = 0
    Request.ContentLength = -1
    Request.ContentRangeEnd = -1
    Request.ContentRangeStart = -1
    Request.ContentRangeInstanceLength = -1
    Request.Accept = 'text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8'
    Request.BasicAuthentication = False
    Request.UserAgent = 'Mozilla/3.0 (compatible; Indy Library)'
    Request.Ranges.Units = 'bytes'
    Request.Ranges = <>
    HTTPOptions = [hoForceEncodeParams]
    Left = 496
    Top = 232
  end
  object cds: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'prv'
    Left = 320
    Top = 232
    object cdsIdProduto: TStringField
      FieldName = 'IdProduto'
      Size = 1
    end
    object cdsNome: TStringField
      FieldName = 'Nome'
      Size = 8
    end
    object cdsIDCategoria: TStringField
      FieldName = 'IDCategoria'
      Size = 1
    end
  end
  object BindSrc: TBindSourceDB
    DataSet = cds
    ScopeMappings = <>
    Left = 432
    Top = 232
  end
  object BindLst: TBindingsList
    Methods = <>
    OutputConverters = <>
    UseAppManager = True
    Left = 372
    Top = 237
    object LinkGridToDataSource1: TLinkGridToDataSource
      Category = 'Quick Bindings'
      DataSource = BindSrc
      GridControl = grid
      AutoBufferCount = False
      Columns = <>
    end
    object LinkControlToField1: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = BindSrc
      FieldName = 'IdProduto'
      Control = txtIdProduto
      Track = False
    end
    object LinkControlToField2: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = BindSrc
      FieldName = 'IDCategoria'
      Control = txtIdCategoria
      Track = False
    end
    object LinkControlToField3: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = BindSrc
      FieldName = 'Nome'
      Control = txtNomeProduto
      Track = False
    end
    object LinkGridToDataSource2: TLinkGridToDataSource
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      GridControl = gridCategorias
      AutoBufferCount = False
      Columns = <>
    end
  end
  object prv: TXMLTransformProvider
    TransformRead.TransformationFile = 'C:\Solucao\Cliente\ToDp.xtr'
    TransformWrite.TransformationFile = 'C:\Solucao\Cliente\ToXml.xtr'
    Left = 568
    Top = 232
  end
  object cdsCategorias: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'prvCategorias'
    Left = 320
    Top = 96
    object cdsCategoriasIdCategoria: TStringField
      FieldName = 'IdCategoria'
      Size = 1
    end
    object cdsCategoriasNome: TStringField
      FieldName = 'Nome'
      Size = 11
    end
  end
  object prvCategorias: TXMLTransformProvider
    TransformRead.TransformationFile = 'C:\Solucao\Cliente\CATEGORIAS_ToDp.xtr'
    Left = 456
    Top = 96
  end
  object BindSourceDB1: TBindSourceDB
    DataSet = cdsCategorias
    ScopeMappings = <>
    Left = 344
    Top = 256
  end
end
