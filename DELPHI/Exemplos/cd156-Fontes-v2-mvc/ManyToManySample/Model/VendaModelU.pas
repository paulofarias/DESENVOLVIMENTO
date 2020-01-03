unit VendaModelU;

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
  Aurelius.Engine.DataBaseManager,
  System.Generics.Collections,
  Aurelius.Criteria.Base,
  Aurelius.Criteria.Linq,
  Aurelius.Criteria.Projections, Data.FMTBcd;

type
TVendaModel = class
private
FObjectManager : TObjectManager;

public
constructor create;
destructor Destroy;
function SaveOrUpdate(venda : TVenda) : Boolean;
function BuscaClientes(): TObjectList<TCliente>;
function BuscaProduto(id : integer) : TProduto;
function BuscaProdutos() : TObjectList<TProduto>;



end;
var
VendaModel : TVendaModel;
implementation
{ TClienteModel }

function TVendaModel.BuscaClientes: TObjectList<TCliente>;
begin
Result := FObjectManager.CreateCriteria<TCliente>.AddOrder(
                                                    TOrder.Asc('NOME')
                                                ).List;
end;

function TVendaModel.BuscaProduto(id: integer): TProduto;
begin
  Result := FObjectManager.Find<TProduto>(Id);
end;

function TVendaModel.BuscaProdutos: TObjectList<TProduto>;
begin
  Result := FObjectManager.CreateCriteria<TProduto>.AddOrder(
                                                   TOrder.Asc('DESCRICAO')
                                               ).List;
end;

constructor TVendaModel.create;
var
session : TSession;
begin
  inherited;
//  session := TSession.Create(TService.GetInstance, TService.GetInstance);
  FObjectManager := ServiceU.TService.GetSession.GetObjectManager;
end;

destructor TVendaModel.Destroy;
begin

  inherited;
end;

function TVendaModel.SaveOrUpdate(venda : TVenda): Boolean;
begin
 try
   FObjectManager.SaveOrUpdate(venda);
   Result := True;
 except
   Result := False;
 end;
end;

end.
