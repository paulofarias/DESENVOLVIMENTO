unit ControllerProdutoU;

interface
uses
System.Generics.Collections, Vcl.Forms,  Classes, dialogs,
Vcl.Controls, ViewCadProdutoU, VendaU, ProdutoModelU, System.SysUtils;
type
TProdutoController = class
  private

  public
  constructor create;
  destructor destroy;
  procedure BinInView();
  function BindInModel() : TProduto;
  function Salvar(produto : TProduto) : boolean;
  procedure ClearControls();
  procedure AbrirForm();


end;

var

ProdutoController : TProdutoController;
implementation

{ TClienteController }

procedure TProdutoController.AbrirForm();
begin
  CadastroProdutoF := TCadastroProdutoF.Create(Application);
  CadastroProdutoF.ShowModal;
end;

function TProdutoController.BindInModel() : TProduto;
var
produto : TProduto;
begin
  produto := TProduto.Create;
  produto.Descricao := CadastroProdutoF.edtDescricaoProduto.Text;
  produto.Valor     := StrToFloat( CadastroProdutoF.edtValorVenda.Text);
  produto.ValorCompra:= StrToFloat(CadastroProdutoF.edtValorCompra.Text);
  produto.Quantidade  := StrToInt(CadastroProdutoF.edtQtd.Text);
  Result := produto;
end;

procedure TProdutoController.BinInView;
begin

end;

procedure TProdutoController.ClearControls;
begin

end;

constructor TProdutoController.create;
begin
  ProdutoModel := TProdutoModel.Create;
end;

destructor TProdutoController.destroy;
begin
ProdutoModel.free;
ProdutoModel := nil;
end;

function TProdutoController.Salvar(produto : TProduto): boolean;
begin
if ProdutoModel.SaveOrUpdate(produto) then
  Result := True
else
  Result := False;
end;

end.
