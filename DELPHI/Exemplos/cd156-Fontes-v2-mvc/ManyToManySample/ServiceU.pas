unit ServiceU;

interface

uses
  System.SysUtils,
  Data.DB,
  Data.SqlExpr,
  Data.DBXFirebird,
  Aurelius.Drivers.Interfaces,
  Aurelius.Drivers.DbExpress,
  Aurelius.Sql.Firebird,
  Aurelius.Schema.Firebird,
  Aurelius.Mapping.Setup,
  Aurelius.Mapping.Explorer,
  Aurelius.Engine.ObjectManager,
  Aurelius.Engine.DataBaseManager;

type

  ISession = interface
  ['{E01E6558-A762-40B4-B072-CE3AF334A9DF}']
    function GetObjectManager: TObjectManager;
    property ObjectManager: TObjectManager read GetObjectManager;
  end;

  TSession = class(TInterfacedObject, ISession)
  private
    FObjectManager: TObjectManager;
  public
    constructor Create(Connection: IDBConnection; AExplorer: TMappingExplorer);
    destructor Destroy; override;
    function GetObjectManager: TObjectManager;
    property ObjectManager: TObjectManager read GetObjectManager;
  end;

  TService = class abstract
  strict private
    class var FInstance: IDBConnection;
    class var FSQLConnection: TSQLConnection;
    class function GetSQLConnection: TSQLConnection;
    class destructor ClassDestroy;
    class constructor ClassCreate;
  public
    constructor Create; reintroduce;
    class function GetInstance: IDBConnection;
    class function GetSession: TSession;
  end;

implementation

uses
  VendaU;

{ TService }

class destructor TService.ClassDestroy;
begin
  FreeAndNil(FSQLConnection);
end;

class constructor TService.ClassCreate;
begin
  TService.GetInstance;
end;

constructor TService.Create;
begin
  raise Exception.Create('Impossivel Criar a Classe TService. Classe Estática!');
end;

class function TService.GetInstance: IDBConnection;
var
  MapSetup: TMappingSetup;
begin
  if not Assigned(FInstance) then
  begin
    FInstance := TDBExpressConnectionAdapter.Create(GetSQLConnection, 'Firebird', False);

    MapSetup := TMappingSetup.Create;
    MapSetup.MappedClasses.RegisterClass(TVenda);
    MapSetup.MappedClasses.RegisterClass(TProduto);
    MapSetup.MappedClasses.RegisterClass(TItemVenda);
    MapSetup.MappedClasses.RegisterClass(TCliente);
    TMappingExplorer.ReplaceDefaultInstance(TMappingExplorer.Create(MapSetup));
    FreeAndNil(MapSetup);

    with TDatabaseManager.Create(FInstance) do
    begin
      if ValidateDatabase then
        UpdateDatabase;
      Free;
    end;
  end;
  Result := FInstance;
end;

class function TService.GetSession: TSession;
begin
  Result := TSession.Create(GetInstance, nil);
end;

class function TService.GetSQLConnection: TSQLConnection;
begin
  if not Assigned(FSQLConnection) then
  begin
    FSQLConnection := TSQLConnection.Create(nil);
    with FSQLConnection do
    begin
      Params.LoadFromFile('Config.ini');
      ConnectionName  := Params.Values['Driver'];
      DriverName      := Params.Values['Driver'];
      LibraryName     := Params.Values['LibraryName'];
      GetDriverFunc   := Params.Values['GetDriverFunc'];
      VendorLib       := Params.Values['VendorLib'];
      LoginPrompt     := False;
    end;
  end;
  Result := FSQLConnection;
  try
    try
      Result.Connected := True;
    except
      raise Exception.Create('Erro ao conectar-se ao Banco de Dados');
    end;
  finally
    Result.Connected := False;
  end;
end;

{ TSession }

constructor TSession.Create(Connection: IDBConnection; AExplorer: TMappingExplorer);
begin
  inherited Create;
  FObjectManager := TObjectManager.Create(Connection, AExplorer);
end;

destructor TSession.Destroy;
begin
  FreeAndNil(FObjectManager);
  inherited;
end;

function TSession.GetObjectManager: TObjectManager;
begin
  Result := FObjectManager;
end;

end.
