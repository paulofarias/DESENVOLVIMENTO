unit ClienteModelU;

interface
uses
  VendaU, ServiceU,   System.SysUtils,
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
TClienteModel = class
private
FObjectManager : TObjectManager;

public
constructor create;
destructor Destroy;
function SaveOrUpdate(cliente : TCliente) : Boolean;


end;
var
ClienteModel : TClienteModel;
implementation
{ TClienteModel }

constructor TClienteModel.create;
var
session : TSession;
begin
  inherited;
//  session := TSession.Create(TService.GetInstance, TService.GetInstance);
  FObjectManager := ServiceU.TService.GetSession.GetObjectManager;
end;

destructor TClienteModel.Destroy;
begin

  inherited;
end;

function TClienteModel.SaveOrUpdate(cliente : TCliente): Boolean;
begin
 try
   FObjectManager.SaveOrUpdate(cliente);
   Result := True;
 except
   Result := False;
 end;
end;

end.
