object DmPrincipal: TDmPrincipal
  OldCreateOrder = False
  Height = 150
  Width = 215
  object FDConnection: TFDConnection
    Params.Strings = (
      'DriverID=MySQL'
      'Database=Financeiro'
      'Server=LOCALHOST'
      'User_Name=root')
    LoginPrompt = False
    Left = 32
    Top = 8
  end
end
