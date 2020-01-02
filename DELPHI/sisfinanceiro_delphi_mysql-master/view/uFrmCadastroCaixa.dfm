inherited frmCadastroCaixa: TfrmCadastroCaixa
  Caption = 'Lan'#231'amentos no Caixa'
  PixelsPerInch = 96
  TextHeight = 13
  inherited Panel1: TPanel
    inherited SpeedButton2: TSpeedButton
      Top = 2
      ExplicitTop = 2
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
        Width = 112
        Height = 13
        Caption = 'N'#250'mero do documento:'
      end
      object Label4: TLabel
        Left = 16
        Top = 43
        Width = 50
        Height = 13
        Caption = 'Descri'#231#227'o:'
      end
      object Label6: TLabel
        Left = 16
        Top = 70
        Width = 28
        Height = 13
        Caption = 'Valor:'
      end
      object edtDocumento: TEdit
        Left = 134
        Top = 13
        Width = 227
        Height = 21
        MaxLength = 20
        TabOrder = 0
      end
      object edtDescricao: TEdit
        Left = 134
        Top = 40
        Width = 390
        Height = 21
        MaxLength = 200
        TabOrder = 1
      end
      object RadioGroup1: TRadioGroup
        Left = 16
        Top = 104
        Width = 239
        Height = 49
        Caption = 'Tipo:'
        Columns = 2
        ItemIndex = 0
        Items.Strings = (
          'Cr'#233'dito'
          'D'#233'bito')
        TabOrder = 3
      end
      object edtValor: TEdit
        Left = 134
        Top = 67
        Width = 121
        Height = 21
        Alignment = taRightJustify
        CharCase = ecUpperCase
        TabOrder = 2
        Text = '0,00'
      end
    end
    inherited tbsPesquisar: TTabSheet
      object Label3: TLabel [2]
        Left = 0
        Top = 56
        Width = 236
        Height = 13
        Caption = '* Legenda (Tipo): C = Cr'#233'dito / D = D'#233'bito'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = [fsBold, fsItalic]
        ParentFont = False
      end
      inherited dbgDados: TDBGrid
        Top = 80
        Height = 301
        Columns = <
          item
            Expanded = False
            FieldName = 'id'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'numero_doc'
            Width = 90
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'descricao'
            Width = 365
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'valor'
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'tipo'
            Width = 40
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'dt_cadastro'
            Visible = True
          end>
      end
      inherited btnFiltrar: TBitBtn
        OnClick = btnFiltrarClick
      end
      inherited cbxFiltros: TComboBox
        ItemIndex = 0
        Text = 'Documento'
        Items.Strings = (
          'Documento'
          'Descri'#231#227'o')
      end
    end
  end
end
