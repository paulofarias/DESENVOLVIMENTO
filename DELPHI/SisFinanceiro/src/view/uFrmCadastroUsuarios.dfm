inherited frmCadastroUsuarios: TfrmCadastroUsuarios
  Caption = 'Cadastro de Usu'#225'rios'
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  inherited Panel1: TPanel
    object DBNavigator1: TDBNavigator
      Left = 193
      Top = 6
      Width = 240
      Height = 25
      TabOrder = 0
    end
  end
  inherited PageControl1: TPageControl
    ActivePage = tbsPesquisar
    ExplicitTop = 26
    ExplicitHeight = 347
    inherited tbsCadastro: TTabSheet
      ExplicitHeight = 319
      object Label2: TLabel [0]
        Left = 16
        Top = 78
        Width = 34
        Height = 13
        Caption = 'Senha:'
      end
      object Label3: TLabel [1]
        Left = 16
        Top = 51
        Width = 29
        Height = 13
        Caption = 'Login:'
      end
      object Label4: TLabel [2]
        Left = 16
        Top = 24
        Width = 31
        Height = 13
        Caption = 'Nome:'
      end
      object edtNome: TEdit [3]
        Left = 80
        Top = 21
        Width = 289
        Height = 21
        MaxLength = 50
        TabOrder = 0
      end
      object edtLogin: TEdit [4]
        Left = 80
        Top = 48
        Width = 289
        Height = 21
        MaxLength = 20
        TabOrder = 1
      end
      object edtSenha: TEdit [5]
        Left = 80
        Top = 75
        Width = 289
        Height = 21
        MaxLength = 20
        PasswordChar = '*'
        TabOrder = 2
      end
      inherited DBNavigator2: TDBNavigator
        Hints.Strings = ()
        TabOrder = 3
      end
    end
    inherited tbsPesquisar: TTabSheet
      ExplicitHeight = 319
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
  object ToolBar2: TToolBar [4]
    Left = 288
    Top = 240
    Width = 150
    Height = 29
    Align = alCustom
    AutoSize = True
    Caption = 'ToolBar2'
    TabOrder = 4
  end
  object FDQuery1: TFDQuery
    Connection = DmPrincipal.FDConnection
    SQL.Strings = (
      'SELECT * FROM USUARIOS')
    Left = 488
    Top = 24
  end
end
