object frmPrincipal: TfrmPrincipal
  Left = 0
  Top = 0
  Caption = 'Sistema de Controle Financeiro'
  ClientHeight = 261
  ClientWidth = 617
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  FormStyle = fsMDIForm
  KeyPreview = True
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poScreenCenter
  WindowState = wsMaximized
  OnClose = FormClose
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object StatusBar1: TStatusBar
    Left = 0
    Top = 242
    Width = 617
    Height = 19
    Panels = <
      item
        Width = 150
      end>
  end
  object BalloonHint: TBalloonHint
    Left = 216
    Top = 80
  end
  object Timer: TTimer
    OnTimer = TimerTimer
    Left = 280
    Top = 80
  end
  object MainMenu1: TMainMenu
    Left = 88
    Top = 80
    object Arquivo1: TMenuItem
      Caption = '&Arquivo'
      object Sair1: TMenuItem
        Action = actSair
      end
    end
    object Funces1: TMenuItem
      Caption = '&Fun'#231#245'es'
      object CadastrodeUsurio1: TMenuItem
        Action = actCadastroUsuario
      end
      object CadastrodeContasaReceber1: TMenuItem
        Action = actContasReceber
      end
      object ConsultarContasaPagar1: TMenuItem
        Action = actContasPagar
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object LanamentosnoCaixa1: TMenuItem
        Action = actLancamentosCaixa
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object ConsultarContasaReceber1: TMenuItem
        Action = actConsultaContasReceber
      end
      object ConsultarContasaPagar2: TMenuItem
        Action = actConsultaContasPagar
      end
      object N5: TMenuItem
        Caption = '-'
      end
      object EmitirRecibo1: TMenuItem
        Action = actEmitirRecibo
      end
      object SaldodoCaixa1: TMenuItem
        Action = actSaldoCaixa
      end
    end
    object Relatrios1: TMenuItem
      Caption = '&Relat'#243'rios'
      object RelatriodeContasaPagar1: TMenuItem
        Action = actRelContasPagar
      end
      object RelatriodeContasaReceber1: TMenuItem
        Action = actRelContasReceber
      end
      object N3: TMenuItem
        Caption = '-'
      end
      object RelatriodeLanamentosnoCaixa1: TMenuItem
        Action = actRelLancamentosCaixa
      end
    end
    object Sistema1: TMenuItem
      Caption = '&Sistema'
    end
  end
  object ActionList1: TActionList
    Images = ImageList1
    Left = 24
    Top = 88
    object actCadastroUsuario: TAction
      Category = 'Fun'#231#245'es'
      Caption = 'Cadastro de Usu'#225'rio'
      OnExecute = actCadastroUsuarioExecute
    end
    object actContasReceber: TAction
      Category = 'Fun'#231#245'es'
      Caption = 'Cadastro de Contas a Receber'
      OnExecute = actContasReceberExecute
    end
    object actContasPagar: TAction
      Category = 'Fun'#231#245'es'
      Caption = 'Cadastro de Contas a Pagar'
      OnExecute = actContasPagarExecute
    end
    object actLancamentosCaixa: TAction
      Category = 'Fun'#231#245'es'
      Caption = 'Lan'#231'amentos no Caixa'
      OnExecute = actLancamentosCaixaExecute
    end
    object actConsultaContasReceber: TAction
      Category = 'Fun'#231#245'es'
      Caption = 'Consultar Contas a Receber'
      OnExecute = actConsultaContasReceberExecute
    end
    object actConsultaContasPagar: TAction
      Category = 'Fun'#231#245'es'
      Caption = 'Consultar Contas a Pagar'
      OnExecute = actConsultaContasPagarExecute
    end
    object actRelContasPagar: TAction
      Category = 'Relat'#243'rios'
      Caption = 'Relat'#243'rio de Contas a Pagar'
    end
    object actRelContasReceber: TAction
      Category = 'Relat'#243'rios'
      Caption = 'Relat'#243'rio de Contas a Receber'
    end
    object actRelLancamentosCaixa: TAction
      Category = 'Relat'#243'rios'
      Caption = 'Relat'#243'rio de Lan'#231'amentos no Caixa'
    end
    object actEmitirRecibo: TAction
      Category = 'Fun'#231#245'es'
      Caption = 'Emitir Recibo'
      OnExecute = actEmitirReciboExecute
    end
    object actSaldoCaixa: TAction
      Category = 'Fun'#231#245'es'
      Caption = 'Saldo Caixa'
      OnExecute = actSaldoCaixaExecute
    end
    object actConfiguracoes: TAction
      Category = 'Sistema'
      Caption = 'Configura'#231#245'es'
    end
    object actSair: TAction
      Caption = 'Sair'
      OnExecute = actSairExecute
    end
  end
  object ImageList1: TImageList
    Left = 24
    Top = 152
  end
end
