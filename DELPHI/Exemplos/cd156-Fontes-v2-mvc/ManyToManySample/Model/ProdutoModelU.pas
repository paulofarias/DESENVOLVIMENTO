unit ProdutoModelU;

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
TProdutoModel = class
private
FObjectManager : TObjectManager;

public
constructor create;
destructor Destroy;
function SaveOrUpdate(produto : TProduto) : Boolean;


end;
var
ProdutoModel : TProdutoModel;
implementation
{ TClienteModel }

constructor TProdutoModel.create;
var
session : TSession;
begin
  inherited;
//  session := TSession.Create(TService.GetInstance, TService.GetInstance);
  FObjectManager := ServiceU.TService.GetSession.GetObjectManager;
end;

destructor TProdutoModel.Destroy;
begin

  inherited;
end;

function TProdutoModel.SaveOrUpdate(produto : TProduto): Boolean;
begin
 try
   FObjectManager.SaveOrUpdate(produto);
   Result := True;
 except
   Result := False;
 end;
end;

end.
