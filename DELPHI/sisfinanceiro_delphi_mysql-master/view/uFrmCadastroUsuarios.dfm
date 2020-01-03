inherited frmCadastroUsuarios: TfrmCadastroUsuarios
  Caption = 'Cadastro de Usu'#225'rios'
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  inherited PageControl1: TPageControl
    ActivePage = tbsPesquisar
    inherited tbsCadastro: TTabSheet
      object Label2: TLabel
        Left = 16
        Top = 78
        Width = 34
        Height = 13
        Caption = 'Senha:'
      end
      object Label3: TLabel
        Left = 16
        Top = 51
        Width = 29
        Height = 13
        Caption = 'Login:'
      end
      object Label4: TLabel
        Left = 16
        Top = 24
        Width = 31
        Height = 13
        Caption = 'Nome:'
      end
      object edtNome: TEdit
        Left = 80
        Top = 21
        Width = 289
        Height = 21
        MaxLength = 50
        TabOrder = 0
      end
      object edtLogin: TEdit
        Left = 80
        Top = 48
        Width = 289
        Height = 21
        MaxLength = 20
        TabOrder = 1
      end
      object edtSenha: TEdit
        Left = 80
        Top = 75
        Width = 289
        Height = 21
        MaxLength = 20
        PasswordChar = '*'
        TabOrder = 2
      end
    end
    inherited tbsPesquisar: TTabSheet
      inherited dbgDados: TDBGrid
        Columns = <
          item
            Expanded = False
            FieldName = 'id'
            Title.Caption = 'Id'
            Width = 32
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'nome'
            Title.Caption = 'Nome'
            Width = 360
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'login'
            Title.Caption = 'Login'
            Width = 207
            Visible = True
          end
          item
            Expanded = False
            FieldName = 'senha'
            Visible = False
          end
          item
            Expanded = False
            FieldName = 'status'
            Visible = False
          end
          item
            Expanded = False
            FieldName = 'dt_cadastro'
            Title.Caption = 'Data de Cadastro'
            Width = 90
            Visible = True
          end>
      end
      inherited pnlPesquisar: TPanel
        inherited btnFiltrar: TBitBtn
          OnClick = btnFiltrarClick
        end
      end
    end
  end
  inherited dsTabela: TDataSource
    DataSet = DmDados.cdsUsuarios
    Left = 624
    Top = 152
  end
end
