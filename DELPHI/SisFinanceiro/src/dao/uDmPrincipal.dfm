object DmPrincipal: TDmPrincipal
  OldCreateOrder = False
  Height = 140
  Width = 248
  object ZConnection: TZConnection
    ControlsCodePage = cCP_UTF16
    AutoEncodeStrings = True
    Catalog = ''
    HostName = ''
    Port = 0
    Database = 
      'Provider=SQLNCLI11.1;Persist Security Info=True;User ID=sa;Passw' +
      'ord=masterkey;Initial Catalog=SISFINANCEIRO;Data Source=(LocalDB' +
      ')\MSSQLLocalDB;Initial File Name="";Server SPN=""'
    User = ''
    Password = ''
    Protocol = 'ado'
    Left = 32
    Top = 16
  end
end
