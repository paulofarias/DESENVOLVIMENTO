unit ControllerVendaU;
interface
uses
System.Generics.Collections, Vcl.Forms,  Classes, dialogs,
Vcl.Controls, ViewCadClienteC, VendaU, ClienteModelU, System.SysUtils,
ViewVendaU;
type
TVendaController = class
  private

  public
  constructor create;
  destructor destroy;
  procedure BinInView();
  function BindInModel(ListaItens : TObjectList<TItemVenda>; cliente : TCliente) : TVenda;
  function Salvar(venda : Tvenda) : boolean;
  function BuscaClientes(): TObjectList<TCliente>;
  function BuscaProduto(id : integer) : TProduto;
  function BuscaProdutos() : TObjectList<TProduto>;
  procedure ClearControls();
  procedure AbrirForm();


end;

var

VendaController : TVendaController;
implementation

{ TClienteController }

uses VendaModelU;

procedure TVendaController.AbrirForm();
begin
  VendaF := TVendaF.Create(Application);
  VendaF.ShowModal;
end;

function TVendaController.BindInModel(ListaItens : TObjectList<TItemVenda>; cliente : TCliente) : TVenda;
var
 venda : TVenda;
begin
  venda               := TVenda.Create;
  venda.Data          := Now;
  venda.Items         := ListaItens;
  venda.Cliente       := cliente;
  venda.DataPagamento := Now;
  venda.Valor         :=  StrToFloat(VendaF.edtQtd.Text);
  Result              := venda
end;

procedure TVendaController.BinInView;
begin

end;

function TVendaController.BuscaClientes: TObjectList<TCliente>;
begin
  Result := VendaModel.BuscaClientes;
end;

function TVendaController.BuscaProduto(id: integer): TProduto;
begin
  Result := VendaModel.BuscaProduto(id);
end;

function TVendaController.BuscaProdutos: TObjectList<TProduto>;
begin
  Result := VendaModel.BuscaProdutos;
end;

procedure TVendaController.ClearControls;
begin

end;

constructor TVendaController.create;
begin
  VendaModel := TVendaModel.Create;
end;

destructor TVendaController.destroy;
begin
ClienteModel.free;
ClienteModel := nil;
end;

function TVendaController.Salvar(venda : Tvenda): boolean;
begin
 VendaModel.SaveOrUpdate(venda);
end;

end.
