object DmDados: TDmDados
  OldCreateOrder = False
  OnCreate = DataModuleCreate
  Height = 377
  Width = 656
  object SQLConnection: TSQLConnection
    ConnectionName = 'financeiro'
    DriverName = 'MySQL'
    LoginPrompt = False
    Params.Strings = (
      'GetDriverFunc=getSQLDriverMYSQL'
      'Password='
      'DriverName=MySQL'
      'DriverUnit=Data.DBXMySQL'
      
        'DriverPackageLoader=TDBXDynalinkDriverLoader,DbxCommonDriver180.' +
        'bpl'
      
        'DriverAssemblyLoader=Borland.Data.TDBXDynalinkDriverLoader,Borla' +
        'nd.Data.DbxCommonDriver,Version=18.0.0.0,Culture=neutral,PublicK' +
        'eyToken=91d62ebb5b0d1b1b'
      
        'MetaDataPackageLoader=TDBXMySqlMetaDataCommandFactory,DbxMySQLDr' +
        'iver180.bpl'
      
        'MetaDataAssemblyLoader=Borland.Data.TDBXMySqlMetaDataCommandFact' +
        'ory,Borland.Data.DbxMySQLDriver,Version=18.0.0.0,Culture=neutral' +
        ',PublicKeyToken=91d62ebb5b0d1b1b'
      'LibraryName=dbxmys.dll'
      'LibraryNameOsx=libsqlmys.dylib'
      'VendorLib=libmysql.dll'
      'VendorLibWin64=libmysql.dll'
      'VendorLibOsx=libmysqlclient.dylib'
      'HostName=localhost'
      'Database=financeiro'
      'User_Name=root'
      'MaxBlobSize=-1'
      'LocaleCode=0000'
      'Compressed=False'
      'Encrypted=False'
      'BlobSize=-1'
      'ErrorResourceFile=')
    Left = 48
    Top = 8
  end
  object cdsCaixa: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'dspCaixa'
    Left = 568
    Top = 24
    object cdsCaixaid: TIntegerField
      DisplayLabel = 'Id:'
      FieldName = 'id'
      Required = True
    end
    object cdsCaixanumero_doc: TStringField
      DisplayLabel = 'N'#250'mero do Doc:'
      FieldName = 'numero_doc'
      Required = True
    end
    object cdsCaixadescricao: TStringField
      DisplayLabel = 'Descri'#231#227'o:'
      FieldName = 'descricao'
      Size = 200
    end
    object cdsCaixavalor: TFMTBCDField
      DisplayLabel = 'Valor:'
      FieldName = 'valor'
      Required = True
      currency = True
      Precision = 20
      Size = 2
    end
    object cdsCaixatipo: TStringField
      DisplayLabel = 'Tipo:'
      FieldName = 'tipo'
      Required = True
      FixedChar = True
      Size = 1
    end
    object cdsCaixadt_cadastro: TDateField
      DisplayLabel = 'Data:'
      FieldName = 'dt_cadastro'
    end
  end
  object dspCaixa: TDataSetProvider
    DataSet = fdqCaixa
    Options = [poAllowCommandText, poUseQuoteChar]
    Left = 456
    Top = 24
  end
  object cdsContas_pagar: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'dspContas_pagar'
    Left = 568
    Top = 72
    object cdsContas_pagarid: TIntegerField
      DisplayLabel = 'Id:'
      FieldName = 'id'
      Required = True
    end
    object cdsContas_pagarnumero_doc: TStringField
      DisplayLabel = 'Documento:'
      FieldName = 'numero_doc'
      Required = True
    end
    object cdsContas_pagardescricao: TStringField
      DisplayLabel = 'Descri'#231#227'o:'
      FieldName = 'descricao'
      Size = 200
    end
    object cdsContas_pagarparcela: TIntegerField
      DisplayLabel = 'Parcela:'
      FieldName = 'parcela'
      Required = True
    end
    object cdsContas_pagarvlr_parcela: TFMTBCDField
      DisplayLabel = 'Vlr.Parcela:'
      FieldName = 'vlr_parcela'
      Required = True
      currency = True
      Precision = 20
      Size = 2
    end
    object cdsContas_pagarvlr_compra: TFMTBCDField
      DisplayLabel = 'Vlr.Compra:'
      FieldName = 'vlr_compra'
      Required = True
      currency = True
      Precision = 20
      Size = 2
    end
    object cdsContas_pagarvlr_abatido: TFMTBCDField
      DisplayLabel = 'Vlr.Abatido:'
      FieldName = 'vlr_abatido'
      Required = True
      currency = True
      Precision = 20
      Size = 2
    end
    object cdsContas_pagardt_compra: TDateField
      DisplayLabel = 'Dt.Compra:'
      FieldName = 'dt_compra'
      Required = True
    end
    object cdsContas_pagardt_cadastro: TDateField
      DisplayLabel = 'Dt.Cadastro:'
      FieldName = 'dt_cadastro'
      Required = True
    end
    object cdsContas_pagardt_vencimento: TDateField
      DisplayLabel = 'Dt.Vencimento:'
      FieldName = 'dt_vencimento'
      Required = True
    end
    object cdsContas_pagardt_pagamento: TDateField
      DisplayLabel = 'Dt.Pagamento:'
      FieldName = 'dt_pagamento'
    end
    object cdsContas_pagarstatus: TStringField
      DisplayLabel = 'Status:'
      FieldName = 'status'
      Required = True
      FixedChar = True
      Size = 1
    end
  end
  object dspContas_pagar: TDataSetProvider
    DataSet = fdqContas_pagar
    Options = [poAllowCommandText, poUseQuoteChar]
    Left = 456
    Top = 72
  end
  object cdsContas_receber: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'dspContas_receber'
    Left = 568
    Top = 120
    object cdsContas_receberid: TIntegerField
      DisplayLabel = 'Id:'
      FieldName = 'id'
      Required = True
    end
    object cdsContas_receberdocumento: TStringField
      DisplayLabel = 'Documento:'
      FieldName = 'documento'
      Required = True
    end
    object cdsContas_receberdescricao: TStringField
      DisplayLabel = 'Descri'#231#227'o:'
      FieldName = 'descricao'
      Size = 200
    end
    object cdsContas_receberparcela: TIntegerField
      DisplayLabel = 'Parcela:'
      FieldName = 'parcela'
      Required = True
    end
    object cdsContas_recebervlr_parcela: TFMTBCDField
      DisplayLabel = 'Vlr. Parcela:'
      FieldName = 'vlr_parcela'
      Required = True
      currency = True
      Precision = 20
      Size = 2
    end
    object cdsContas_recebervlr_compra: TFMTBCDField
      DisplayLabel = 'Vlr. Compra:'
      FieldName = 'vlr_compra'
      Required = True
      currency = True
      Precision = 20
      Size = 2
    end
    object cdsContas_recebervlr_abatido: TFMTBCDField
      DisplayLabel = 'Vlr. Abatido:'
      FieldName = 'vlr_abatido'
      Required = True
      currency = True
      Precision = 20
      Size = 2
    end
    object cdsContas_receberdt_compra: TDateField
      DisplayLabel = 'Dt. Compra:'
      FieldName = 'dt_compra'
      Required = True
    end
    object cdsContas_receberdt_vencimento: TDateField
      DisplayLabel = 'Dt. Vencimento:'
      FieldName = 'dt_vencimento'
      Required = True
    end
    object cdsContas_receberdt_cadastro: TDateField
      DisplayLabel = 'Dt. Cadastro:'
      FieldName = 'dt_cadastro'
      Required = True
    end
    object cdsContas_receberstatus: TStringField
      DisplayLabel = 'Status:'
      FieldName = 'status'
      Required = True
      FixedChar = True
      Size = 1
    end
    object cdsContas_receberdt_pagamento: TDateField
      DisplayLabel = 'Dt. Pagamento:'
      FieldName = 'dt_pagamento'
    end
  end
  object dspContas_receber: TDataSetProvider
    DataSet = fdqContas_receber
    Options = [poAllowCommandText, poUseQuoteChar]
    Left = 456
    Top = 120
  end
  object cdsUsuarios: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'dspUsuarios'
    OnCalcFields = cdsUsuariosCalcFields
    Left = 568
    Top = 168
    object cdsUsuariosid: TIntegerField
      AutoGenerateValue = arDefault
      DisplayLabel = 'Id:'
      FieldName = 'id'
      Origin = 'id'
      ProviderFlags = [pfInWhere, pfInKey]
      Required = True
    end
    object cdsUsuariosnome: TStringField
      DisplayLabel = 'Nome:'
      FieldName = 'nome'
      Origin = 'nome'
      Required = True
      Size = 50
    end
    object cdsUsuarioslogin: TStringField
      DisplayLabel = 'Login:'
      FieldName = 'login'
      Origin = 'login'
      Required = True
    end
    object cdsUsuariossenha: TStringField
      FieldName = 'senha'
      Origin = 'senha'
      Required = True
    end
    object cdsUsuariosstatus: TStringField
      FieldName = 'status'
      Origin = 'status'
      Required = True
      FixedChar = True
      Size = 1
    end
    object cdsUsuariosdt_cadastro: TDateField
      DisplayLabel = 'Data de Cadastro:'
      FieldName = 'dt_cadastro'
      Origin = 'dt_cadastro'
      Required = True
    end
    object cdsUsuariosCALC_Status: TStringField
      FieldKind = fkCalculated
      FieldName = 'CALC_Status'
      Calculated = True
    end
  end
  object dspUsuarios: TDataSetProvider
    DataSet = fdqUsuarios
    Options = [poAllowCommandText, poUseQuoteChar]
    Left = 456
    Top = 168
  end
  object sdsCaixa: TSQLDataSet
    CommandText = 'SELECT * FROM CAIXA where id = 0'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLConnection
    Left = 344
    Top = 24
  end
  object sdsContas_pagar: TSQLDataSet
    CommandText = 'SELECT * FROM CONTAS_PAGAR where id = 0'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLConnection
    Left = 344
    Top = 72
  end
  object sdsContas_receber: TSQLDataSet
    CommandText = 'SELECT * FROM CONTAS_RECEBER where id = 0'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLConnection
    Left = 344
    Top = 120
  end
  object sdsUsuarios: TSQLDataSet
    CommandText = 'SELECT * FROM USUARIOS where id = 0'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLConnection
    Left = 344
    Top = 168
  end
  object sqlConsultas: TSQLQuery
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLConnection
    Left = 56
    Top = 72
  end
  object dspConsultas: TDataSetProvider
    DataSet = fdqConsultas
    Options = [poAllowCommandText, poUseQuoteChar]
    Left = 136
    Top = 72
  end
  object cdsReceber_detalhes: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'dspReceber_detalhes'
    Left = 568
    Top = 216
    object cdsReceber_detalhesid: TIntegerField
      FieldName = 'id'
      Required = True
    end
    object cdsReceber_detalhesid_receber: TIntegerField
      FieldName = 'id_receber'
      Required = True
    end
    object cdsReceber_detalhesdetalhes: TStringField
      DisplayLabel = 'Detalhes:'
      FieldName = 'detalhes'
      Required = True
      Size = 255
    end
    object cdsReceber_detalhesvalor: TFMTBCDField
      DisplayLabel = 'Valor:'
      FieldName = 'valor'
      Required = True
      currency = True
      Precision = 20
      Size = 2
    end
    object cdsReceber_detalhesdata: TDateField
      DisplayLabel = 'Cadastrado em:'
      FieldName = 'data'
      Required = True
    end
    object cdsReceber_detalhesusuario: TStringField
      DisplayLabel = 'Cadastrado por:'
      FieldName = 'usuario'
      Required = True
      Size = 50
    end
  end
  object dspReceber_detalhes: TDataSetProvider
    DataSet = fdqReceber_detalhes
    Options = [poAllowCommandText, poUseQuoteChar]
    Left = 456
    Top = 216
  end
  object sdsReceber_detalhes: TSQLDataSet
    CommandText = 'SELECT * FROM receber_detalhes where id = 0'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLConnection
    Left = 344
    Top = 216
  end
  object cdsPagar_detalhes: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'dspPagar_detalhes'
    Left = 568
    Top = 264
    object cdsPagar_detalhesid: TIntegerField
      FieldName = 'id'
      Required = True
    end
    object cdsPagar_detalhesid_pagar: TIntegerField
      FieldName = 'id_pagar'
      Required = True
    end
    object cdsPagar_detalhesdetalhes: TStringField
      DisplayLabel = 'Detalhes:'
      FieldName = 'detalhes'
      Required = True
      Size = 255
    end
    object cdsPagar_detalhesvalor: TFMTBCDField
      DisplayLabel = 'Valor:'
      FieldName = 'valor'
      Required = True
      currency = True
      Precision = 20
      Size = 2
    end
    object cdsPagar_detalhesdata: TDateField
      DisplayLabel = 'Cadastrado em:'
      FieldName = 'data'
      Required = True
    end
    object cdsPagar_detalhesusuario: TStringField
      DisplayLabel = 'Cadastrado por:'
      FieldName = 'usuario'
      Required = True
      Size = 50
    end
  end
  object dspPagar_detalhes: TDataSetProvider
    DataSet = fdqPagar_Detalhes
    Options = [poAllowCommandText, poUseQuoteChar]
    Left = 456
    Top = 264
  end
  object sdsPagar_detalhes: TSQLDataSet
    CommandText = 'SELECT * FROM pagar_detalhes where id = 0'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLConnection
    Left = 344
    Top = 264
  end
  object sdsRecibos: TSQLDataSet
    CommandText = 'select * from recibos where id = 0'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLConnection
    Left = 344
    Top = 312
  end
  object dspRecibos: TDataSetProvider
    DataSet = fdqRecibos
    Options = [poAllowCommandText, poUseQuoteChar]
    Left = 456
    Top = 312
  end
  object cdsRecibos: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'dspRecibos'
    Left = 568
    Top = 312
    object cdsRecibosid: TIntegerField
      FieldName = 'id'
      Required = True
    end
    object cdsRecibostipo_recibo: TIntegerField
      FieldName = 'tipo_recibo'
      Required = True
    end
    object cdsRecibosdt_emissao: TDateField
      FieldName = 'dt_emissao'
      Required = True
    end
    object cdsRecibosnome: TStringField
      FieldName = 'nome'
      Required = True
      Size = 100
    end
    object cdsRecibosvlr_recibo: TFMTBCDField
      FieldName = 'vlr_recibo'
      Required = True
      Precision = 20
      Size = 2
    end
    object cdsRecibosreferente: TStringField
      FieldName = 'referente'
      Required = True
      Size = 100
    end
    object cdsRecibosobservacao: TStringField
      FieldName = 'observacao'
      Size = 255
    end
    object cdsRecibosemitente: TStringField
      FieldName = 'emitente'
      Required = True
      Size = 100
    end
    object cdsRecibosendereco: TStringField
      FieldName = 'endereco'
      Size = 100
    end
    object cdsReciboscpf_cnpj: TStringField
      FieldName = 'cpf_cnpj'
      Size = 30
    end
    object cdsReciboscidade: TStringField
      FieldName = 'cidade'
      Size = 100
    end
    object cdsRecibosdt_cadastro: TDateField
      FieldName = 'dt_cadastro'
      Required = True
    end
    object cdsReciboshr_cadastro: TTimeField
      FieldName = 'hr_cadastro'
      Required = True
    end
    object cdsRecibosuser_cadastro: TStringField
      FieldName = 'user_cadastro'
      Required = True
      Size = 50
    end
  end
  object FDConnection: TFDConnection
    Params.Strings = (
      'DriverID=MySQL'
      'Database=Financeiro'
      'Server=LOCALHOST'
      'User_Name=root')
    Connected = True
    LoginPrompt = False
    OnError = FDConnectionError
    Left = 128
    Top = 8
  end
  object fdqCaixa: TFDQuery
    Connection = FDConnection
    SQL.Strings = (
      'SELECT * FROM CAIXA where id = 0')
    Left = 248
    Top = 24
    object fdqCaixaid: TFDAutoIncField
      FieldName = 'id'
      Origin = 'id'
      ProviderFlags = [pfInWhere, pfInKey]
      ReadOnly = True
    end
    object fdqCaixanumero_doc: TStringField
      FieldName = 'numero_doc'
      Origin = 'numero_doc'
      Required = True
    end
    object fdqCaixadescricao: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'descricao'
      Origin = 'descricao'
      Size = 200
    end
    object fdqCaixavalor: TFMTBCDField
      FieldName = 'valor'
      Origin = 'valor'
      Required = True
      Precision = 18
      Size = 2
    end
    object fdqCaixatipo: TStringField
      FieldName = 'tipo'
      Origin = 'tipo'
      Required = True
      FixedChar = True
      Size = 1
    end
    object fdqCaixadt_cadastro: TDateField
      AutoGenerateValue = arDefault
      FieldName = 'dt_cadastro'
      Origin = 'dt_cadastro'
    end
  end
  object fdqContas_pagar: TFDQuery
    Connection = FDConnection
    SQL.Strings = (
      'SELECT * FROM CONTAS_PAGAR where id = 0')
    Left = 248
    Top = 72
    object fdqContas_pagarid: TFDAutoIncField
      FieldName = 'id'
      Origin = 'id'
      ProviderFlags = [pfInWhere, pfInKey]
      ReadOnly = True
    end
    object fdqContas_pagarnumero_doc: TStringField
      FieldName = 'numero_doc'
      Origin = 'numero_doc'
      Required = True
    end
    object fdqContas_pagardescricao: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'descricao'
      Origin = 'descricao'
      Size = 200
    end
    object fdqContas_pagarparcela: TIntegerField
      FieldName = 'parcela'
      Origin = 'parcela'
      Required = True
    end
    object fdqContas_pagarvlr_parcela: TFMTBCDField
      FieldName = 'vlr_parcela'
      Origin = 'vlr_parcela'
      Required = True
      Precision = 18
      Size = 2
    end
    object fdqContas_pagarvlr_compra: TFMTBCDField
      FieldName = 'vlr_compra'
      Origin = 'vlr_compra'
      Required = True
      Precision = 18
      Size = 2
    end
    object fdqContas_pagarvlr_abatido: TFMTBCDField
      FieldName = 'vlr_abatido'
      Origin = 'vlr_abatido'
      Required = True
      Precision = 18
      Size = 2
    end
    object fdqContas_pagardt_compra: TDateField
      FieldName = 'dt_compra'
      Origin = 'dt_compra'
      Required = True
    end
    object fdqContas_pagardt_cadastro: TDateField
      FieldName = 'dt_cadastro'
      Origin = 'dt_cadastro'
      Required = True
    end
    object fdqContas_pagardt_vencimento: TDateField
      FieldName = 'dt_vencimento'
      Origin = 'dt_vencimento'
      Required = True
    end
    object fdqContas_pagardt_pagamento: TDateField
      AutoGenerateValue = arDefault
      FieldName = 'dt_pagamento'
      Origin = 'dt_pagamento'
    end
    object fdqContas_pagarstatus: TStringField
      FieldName = 'status'
      Origin = 'status'
      Required = True
      FixedChar = True
      Size = 1
    end
  end
  object fdqContas_receber: TFDQuery
    Connection = FDConnection
    SQL.Strings = (
      'SELECT * FROM CONTAS_RECEBER where id = 0')
    Left = 248
    Top = 120
    object fdqContas_receberid: TFDAutoIncField
      FieldName = 'id'
      Origin = 'id'
      ProviderFlags = [pfInWhere, pfInKey]
      ReadOnly = True
    end
    object fdqContas_receberdocumento: TStringField
      FieldName = 'documento'
      Origin = 'documento'
      Required = True
    end
    object fdqContas_receberdescricao: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'descricao'
      Origin = 'descricao'
      Size = 200
    end
    object fdqContas_receberparcela: TIntegerField
      FieldName = 'parcela'
      Origin = 'parcela'
      Required = True
    end
    object fdqContas_recebervlr_parcela: TFMTBCDField
      FieldName = 'vlr_parcela'
      Origin = 'vlr_parcela'
      Required = True
      Precision = 18
      Size = 2
    end
    object fdqContas_recebervlr_compra: TFMTBCDField
      FieldName = 'vlr_compra'
      Origin = 'vlr_compra'
      Required = True
      Precision = 18
      Size = 2
    end
    object fdqContas_recebervlr_abatido: TFMTBCDField
      FieldName = 'vlr_abatido'
      Origin = 'vlr_abatido'
      Required = True
      Precision = 18
      Size = 2
    end
    object fdqContas_receberdt_compra: TDateField
      FieldName = 'dt_compra'
      Origin = 'dt_compra'
      Required = True
    end
    object fdqContas_receberdt_vencimento: TDateField
      FieldName = 'dt_vencimento'
      Origin = 'dt_vencimento'
      Required = True
    end
    object fdqContas_receberdt_cadastro: TDateField
      FieldName = 'dt_cadastro'
      Origin = 'dt_cadastro'
      Required = True
    end
    object fdqContas_receberstatus: TStringField
      FieldName = 'status'
      Origin = 'status'
      Required = True
      FixedChar = True
      Size = 1
    end
    object fdqContas_receberdt_pagamento: TDateField
      AutoGenerateValue = arDefault
      FieldName = 'dt_pagamento'
      Origin = 'dt_pagamento'
    end
  end
  object fdqUsuarios: TFDQuery
    Connection = FDConnection
    SQL.Strings = (
      'SELECT * FROM USUARIOS #where id = 0')
    Left = 248
    Top = 168
    object fdqUsuariosid: TFDAutoIncField
      FieldName = 'id'
      Origin = 'id'
      ProviderFlags = [pfInWhere, pfInKey]
      ReadOnly = True
    end
    object fdqUsuariosnome: TStringField
      FieldName = 'nome'
      Origin = 'nome'
      Required = True
      Size = 50
    end
    object fdqUsuarioslogin: TStringField
      FieldName = 'login'
      Origin = 'login'
      Required = True
    end
    object fdqUsuariossenha: TStringField
      FieldName = 'senha'
      Origin = 'senha'
      Required = True
    end
    object fdqUsuariosstatus: TStringField
      FieldName = 'status'
      Origin = 'status'
      Required = True
      FixedChar = True
      Size = 1
    end
    object fdqUsuariosdt_cadastro: TDateField
      FieldName = 'dt_cadastro'
      Origin = 'dt_cadastro'
      Required = True
    end
  end
  object fdqReceber_detalhes: TFDQuery
    Connection = FDConnection
    SQL.Strings = (
      'SELECT * FROM receber_detalhes where id = 0')
    Left = 248
    Top = 216
    object fdqReceber_detalhesid: TFDAutoIncField
      FieldName = 'id'
      Origin = 'id'
      ProviderFlags = [pfInWhere, pfInKey]
      ReadOnly = True
    end
    object fdqReceber_detalhesid_receber: TIntegerField
      FieldName = 'id_receber'
      Origin = 'id_receber'
      Required = True
    end
    object fdqReceber_detalhesdetalhes: TStringField
      FieldName = 'detalhes'
      Origin = 'detalhes'
      Required = True
      Size = 255
    end
    object fdqReceber_detalhesvalor: TFMTBCDField
      FieldName = 'valor'
      Origin = 'valor'
      Required = True
      Precision = 18
      Size = 2
    end
    object fdqReceber_detalhesdata: TDateField
      FieldName = 'data'
      Origin = 'data'
      Required = True
    end
    object fdqReceber_detalhesusuario: TStringField
      FieldName = 'usuario'
      Origin = 'usuario'
      Required = True
      Size = 50
    end
  end
  object fdqPagar_Detalhes: TFDQuery
    Connection = FDConnection
    SQL.Strings = (
      'SELECT * FROM pagar_detalhes where id = 0')
    Left = 248
    Top = 264
    object fdqPagar_Detalhesid: TFDAutoIncField
      FieldName = 'id'
      Origin = 'id'
      ProviderFlags = [pfInWhere, pfInKey]
      ReadOnly = True
    end
    object fdqPagar_Detalhesid_pagar: TIntegerField
      FieldName = 'id_pagar'
      Origin = 'id_pagar'
      Required = True
    end
    object fdqPagar_Detalhesdetalhes: TStringField
      FieldName = 'detalhes'
      Origin = 'detalhes'
      Required = True
      Size = 255
    end
    object fdqPagar_Detalhesvalor: TFMTBCDField
      FieldName = 'valor'
      Origin = 'valor'
      Required = True
      Precision = 18
      Size = 2
    end
    object fdqPagar_Detalhesdata: TDateField
      FieldName = 'data'
      Origin = 'data'
      Required = True
    end
    object fdqPagar_Detalhesusuario: TStringField
      FieldName = 'usuario'
      Origin = 'usuario'
      Required = True
      Size = 50
    end
  end
  object fdqRecibos: TFDQuery
    Connection = FDConnection
    SQL.Strings = (
      'select * from recibos where id = 0')
    Left = 248
    Top = 312
  end
  object fdqConsultas: TFDQuery
    Connection = FDConnection
    Left = 56
    Top = 128
  end
end
