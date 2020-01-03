object frmCloudAzure: TfrmCloudAzure
  Left = 0
  Top = 0
  Caption = 'Cloud Azure Storage'
  ClientHeight = 435
  ClientWidth = 510
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object gbxContainers: TGroupBox
    Left = 8
    Top = 4
    Width = 491
    Height = 209
    Caption = 'Containers'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    object listViewContainers: TListView
      Left = 6
      Top = 15
      Width = 377
      Height = 106
      Columns = <>
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ReadOnly = True
      ParentFont = False
      ShowColumnHeaders = False
      TabOrder = 0
      ViewStyle = vsList
      OnChange = listViewContainersChange
    end
    object btnCriarContainer: TButton
      Left = 388
      Top = 15
      Width = 100
      Height = 31
      Caption = '&Criar Container'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      WordWrap = True
      OnClick = btnCriarContainerClick
    end
    object vleMetaContainer: TValueListEditor
      Left = 6
      Top = 123
      Width = 377
      Height = 80
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goColSizing, goTabs, goAlwaysShowEditor, goThumbTracking]
      ParentFont = False
      TabOrder = 2
      TitleCaptions.Strings = (
        'Nome do Metadado'
        'Valor')
      ColWidths = (
        150
        221)
    end
  end
  object gbxArquivos: TGroupBox
    Left = 8
    Top = 218
    Width = 491
    Height = 214
    Caption = 'Arquivos'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    object ListViewArquivos: TListView
      Left = 7
      Top = 16
      Width = 377
      Height = 93
      Columns = <>
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ReadOnly = True
      ParentFont = False
      ShowColumnHeaders = False
      TabOrder = 0
      ViewStyle = vsList
      OnChange = ListViewArquivosChange
    end
    object vleMetaArquivo: TValueListEditor
      Left = 6
      Top = 113
      Width = 377
      Height = 97
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      KeyOptions = [keyEdit, keyAdd, keyDelete, keyUnique]
      Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goColSizing, goTabs, goAlwaysShowEditor, goThumbTracking]
      ParentFont = False
      TabOrder = 1
      TitleCaptions.Strings = (
        'Nome do Metadado'
        'Valor')
      ColWidths = (
        150
        221)
    end
    object btnUploadArquivo: TButton
      Left = 388
      Top = 51
      Width = 100
      Height = 31
      Caption = 'Upload'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      WordWrap = True
      OnClick = btnUploadArquivoClick
    end
    object btnDownloadArquivo: TButton
      Left = 388
      Top = 15
      Width = 100
      Height = 31
      Caption = 'Download'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      WordWrap = True
      OnClick = btnDownloadArquivoClick
    end
  end
end
