object FDataModule: TFDataModule
  OldCreateOrder = False
  Height = 311
  Width = 403
  object Conexao: TSQLConnection
    DriverName = 'Firebird'
    LoginPrompt = False
    Params.Strings = (
      'DriverUnit=Data.DBXFirebird'
      
        'DriverPackageLoader=TDBXDynalinkDriverLoader,DbxCommonDriver190.' +
        'bpl'
      
        'DriverAssemblyLoader=Borland.Data.TDBXDynalinkDriverLoader,Borla' +
        'nd.Data.DbxCommonDriver,Version=19.0.0.0,Culture=neutral,PublicK' +
        'eyToken=91d62ebb5b0d1b1b'
      
        'MetaDataPackageLoader=TDBXFirebirdMetaDataCommandFactory,DbxFire' +
        'birdDriver190.bpl'
      
        'MetaDataAssemblyLoader=Borland.Data.TDBXFirebirdMetaDataCommandF' +
        'actory,Borland.Data.DbxFirebirdDriver,Version=19.0.0.0,Culture=n' +
        'eutral,PublicKeyToken=91d62ebb5b0d1b1b'
      'GetDriverFunc=getSQLDriverINTERBASE'
      'LibraryName=dbxfb.dll'
      'LibraryNameOsx=libsqlfb.dylib'
      'VendorLib=fbclient.dll'
      'VendorLibWin64=fbclient.dll'
      'VendorLibOsx=/Library/Frameworks/Firebird.framework/Firebird'
      
        'Database=C:\Users\Renan\Desktop\Projetos Mobile\ProjetoIntegraca' +
        'o/CONTATO.fdb'
      'User_Name=sysdba'
      'Password=masterkey'
      'Role=RoleName'
      'MaxBlobSize=-1'
      'LocaleCode=0000'
      'IsolationLevel=ReadCommitted'
      'SQLDialect=3'
      'CommitRetain=False'
      'WaitOnLocks=True'
      'TrimChar=False'
      'BlobSize=-1'
      'ErrorResourceFile='
      'RoleName=RoleName'
      'ServerCharSet='
      'Trim Char=False')
    Left = 48
    Top = 32
  end
  object QrContato: TSQLDataSet
    CommandText = 'Select * from Contato'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = Conexao
    Left = 112
    Top = 112
    object QrContatoID: TIntegerField
      FieldName = 'ID'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
    end
    object QrContatoNOME: TStringField
      FieldName = 'NOME'
      ProviderFlags = [pfInUpdate]
      Size = 50
    end
    object QrContatoEMAIL: TStringField
      FieldName = 'EMAIL'
      ProviderFlags = [pfInUpdate]
      Size = 50
    end
    object QrContatoTELEFONE: TStringField
      FieldName = 'TELEFONE'
      ProviderFlags = [pfInUpdate]
    end
  end
  object CDSContato: TClientDataSet
    Aggregates = <>
    Params = <>
    ProviderName = 'dspContato'
    BeforePost = CDSContatoBeforePost
    Left = 168
    Top = 112
    object CDSContatoID: TIntegerField
      FieldName = 'ID'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
    end
    object CDSContatoNOME: TStringField
      DisplayLabel = 'Nome'
      FieldName = 'NOME'
      ProviderFlags = [pfInUpdate]
      Size = 50
    end
    object CDSContatoEMAIL: TStringField
      DisplayLabel = 'Email'
      FieldName = 'EMAIL'
      ProviderFlags = [pfInUpdate]
      Size = 50
    end
    object CDSContatoTELEFONE: TStringField
      DisplayLabel = 'Telefone'
      FieldName = 'TELEFONE'
      ProviderFlags = [pfInUpdate]
      EditMask = '!\(99\)0000-0000;0;_'
    end
  end
  object dspContato: TDataSetProvider
    DataSet = QrContato
    Options = [poIncFieldProps, poAllowCommandText, poUseQuoteChar]
    Left = 224
    Top = 112
  end
end