inherited frmCadastroPagar: TfrmCadastroPagar
  Caption = 'Cadastro de Contas a Pagar'
  PixelsPerInch = 96
  TextHeight = 13
  inherited Panel1: TPanel
    inherited SpeedButton2: TSpeedButton
      Width = 97
      Visible = False
      ExplicitWidth = 97
    end
  end
  inherited PageControl1: TPageControl
    inherited tbsCadastro: TTabSheet
      ExplicitLeft = 4
      ExplicitTop = 24
      ExplicitWidth = 778
      ExplicitHeight = 381
      object Label2: TLabel
        Left = 16
        Top = 16
        Width = 58
        Height = 13
        Caption = 'Documento:'
      end
      object Label3: TLabel
        Left = 16
        Top = 43
        Width = 50
        Height = 13
        Caption = 'Descri'#231#227'o:'
      end
      object Label4: TLabel
        Left = 16
        Top = 70
        Width = 72
        Height = 13
        Caption = 'Qtde.Parcelas:'
      end
      object Label6: TLabel
        Left = 16
        Top = 97
        Width = 68
        Height = 13
        Caption = 'Valor Compra:'
      end
      object Label7: TLabel
        Left = 16
        Top = 124
        Width = 74
        Height = 13
        Caption = 'Dt. da Compra:'
      end
      object Label8: TLabel
        Left = 190
        Top = 70
        Width = 45
        Height = 13
        Caption = 'Varia'#231#227'o:'
      end
      object edtDocumento: TEdit
        Left = 95
        Top = 13
        Width = 176
        Height = 21
        MaxLength = 20
        TabOrder = 0
      end
      object edtDescricao: TEdit
        Left = 95
        Top = 40
        Width = 378
        Height = 21
        MaxLength = 200
        TabOrder = 1
      end
      object edtQtdeParcelas: TEdit
        Left = 95
        Top = 67
        Width = 89
        Height = 21
        NumbersOnly = True
        TabOrder = 2
      end
      object edtVlrCompra: TEdit
        Left = 95
        Top = 94
        Width = 176
        Height = 21
        Alignment = taRightJustify
        CharCase = ecUpperCase
        TabOrder = 4
        Text = '0,00'
      end
      object edtDtCompra: TEdit
        Left = 95
        Top = 121
        Width = 176
        Height = 21
        Alignment = taRightJustify
        CharCase = ecUpperCase
        MaxLength = 8
        TabOrder = 5
      end
      object edtVariacao: TEdit
        Left = 241
        Top = 67
        Width = 89
        Height = 21
        NumbersOnly = True
        TabOrder = 3
      end
      object Button1: TButton
        Left = 95
        Top = 148
        Width = 106
        Height = 25
        Caption = 'Gerar parcelas'
        TabOrder = 6
        OnClick = Button1Click
      end
      object DBGrid1: TDBGrid
        Left = 95
        Top = 179
        Width = 266
        Height = 120
        DataSource = dsParcelas
        DrawingStyle = gdsGradient
        Options = [dgTitles, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
        TabOrder = 8
        TitleFont.Charset = DEFAULT_CHARSET
        TitleFont.Color = clWindowText
        TitleFont.Height = -11
        TitleFont.Name = 'Tahoma'
        TitleFont.Style = []
        OnDrawColumnCell = DBGrid1DrawColumnCell
        Columns = <
          item
            Expanded = False
            FieldName = 'Parcela'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Valor'
            Width = 95
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'Vencimento'
            Width = 88
            Visible = True
          end>
      end
      object Button2: TButton
        Left = 207
        Top = 148
        Width = 106
        Height = 25
        Caption = 'Limpar parcelas'
        TabOrder = 7
        OnClick = Button2Click
      end
    end
    inherited tbsPesquisar: TTabSheet
      object Label9: TLabel [2]
        Left = 0
        Top = 52
        Width = 347
        Height = 13
        Caption = '* Legenda (Status): A = Aberto / C = Cancelado / B = Baixado'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = [fsBold, fsItalic]
        ParentFont = False
      end
      inherited dbgDados: TDBGrid
        Top = 72
        Height = 309
        Columns = <
          item
            Expanded = False
            FieldName = 'id'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'status'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'numero_doc'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'descricao'
            Width = 300
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'parcela'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'vlr_parcela'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'vlr_compra'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'vlr_abatido'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'dt_compra'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'dt_cadastro'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'dt_vencimento'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'dt_pagamento'
            Visible = True
          end>
      end
      inherited btnFiltrar: TBitBtn
        OnClick = btnFiltrarClick
      end
      inherited cbxFiltros: TComboBox
        ItemIndex = 0
        Text = 'Descri'#231#227'o'
        Items.Strings = (
          'Descri'#231#227'o'
          'Documento')
      end
    end
  end
  inherited dsTabela: TDataSource
    DataSet = DmDados.cdsContas_pagar
  end
  inherited ImageListCadastro: TImageList
    Left = 724
    Top = 96
  end
  inherited ActAcoes: TActionList
    Left = 724
  end
  object cdsParcelas: TClientDataSet
    PersistDataPacket.Data = {
      5F0000009619E0BD0100000018000000030000000000030000005F0007506172
      63656C6104000100000000000556616C6F720800040000000100075355425459
      50450200490006004D6F6E6579000A56656E63696D656E746F04000600000000
      000000}
    Active = True
    Aggregates = <>
    Params = <>
    Left = 724
    Top = 208
    object cdsParcelasParcela: TIntegerField
      FieldName = 'Parcela'
    end
    object cdsParcelasValor: TCurrencyField
      FieldName = 'Valor'
    end
    object cdsParcelasVencimento: TDateField
      FieldName = 'Vencimento'
    end
  end
  object dsParcelas: TDataSource
    DataSet = cdsParcelas
    Left = 724
    Top = 264
  end
end
