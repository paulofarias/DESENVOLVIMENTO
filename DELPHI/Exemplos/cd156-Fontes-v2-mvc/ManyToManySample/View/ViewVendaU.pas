unit ViewVendaU;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Data.DB, Vcl.Grids, Vcl.DBGrids,
  Aurelius.Bind.Dataset, Vcl.StdCtrls, System.Generics.Collections, VendaU,
  Datasnap.DBClient;

type
  TVendaF = class(TForm)
    Label1: TLabel;
    Label2: TLabel;
    CMBCliente: TComboBox;
    CMBProduto: TComboBox;
    Label3: TLabel;
    edtQtd: TEdit;
    BtnInserir: TButton;
    DtsItemVenda: TDataSource;
    DBGrid1: TDBGrid;
    Total: TLabel;
    edtValor: TEdit;
    BtnFinalizar: TButton;
    ADItemVenda: TClientDataSet;
    ADItemVendaProduto: TStringField;
    ADItemVendaQuantidade: TIntegerField;
    ADItemVendaValor: TFloatField;
    ADItemVendaSubtotal: TFloatField;
    procedure FormShow(Sender: TObject);
    procedure BtnInserirClick(Sender: TObject);
    procedure BtnFinalizarClick(Sender: TObject);
  private
  ListaClientes : TObjectList<TCliente>;
  ListaProdutos : TObjectList<TProduto>;
  ListaItens    : TObjectList<TItemVenda>;
    { Private declarations }
  procedure PopulaComboCliente();
  procedure PopulaComboProduto();
  public
    { Public declarations }
  end;

var
  VendaF: TVendaF;

implementation

{$R *.dfm}

uses ControllerVendaU;

procedure TVendaF.BtnFinalizarClick(Sender: TObject);
var
venda : TVenda;
begin
  venda := VendaController.BindInModel(ListaItens, ListaClientes.Items[CMBCliente.ItemIndex]);
  VendaController.Salvar(venda);
end;

procedure TVendaF.BtnInserirClick(Sender: TObject);
var
item : TItemVenda;
i    : real;
begin
  item            := TItemVenda.Create;
  item.Produto    := ListaProdutos.Items[CMBProduto.ItemIndex];
  item.Quantidade := StrToInt(edtQtd.Text);
  ListaItens.Add(item);
  ADItemVenda.Open;
  ADItemVenda.Insert;
  ADItemVendaProduto.AsString     := ListaProdutos.Items[CMBProduto.ItemIndex].Descricao;
  ADItemVendaQuantidade.AsInteger  := StrToInt(edtQtd.Text);
  ADItemVendaValor.AsFloat         := ListaProdutos.Items[CMBProduto.ItemIndex].Valor;
  ADItemVendaSubTotal.AsFloat      := ListaProdutos.Items[CMBProduto.ItemIndex].Valor * StrToInt(edtQtd.Text);
  ADItemVenda.Post;
  i := 0;
  for item in ListaItens do
    i := i + (item.Quantidade*item.Produto.Valor);
  edtValor.Text := FloatToStr(i);
end;

procedure TVendaF.FormShow(Sender: TObject);
begin
  ListaClientes := VendaController.BuscaClientes;
  ListaProdutos := VendaController.BuscaProdutos;
  ListaItens := TObjectList<TItemVenda>.Create;
  PopulaComboCliente;
  PopulaComboProduto;
end;

procedure TVendaF.PopulaComboCliente;
var
  cliente : TCliente;
begin
  for cliente in ListaClientes do
    CMBCliente.AddItem(cliente.Nome, cliente);
end;

procedure TVendaF.PopulaComboProduto;
var
  produto : TProduto;
begin
  for produto in ListaProdutos do
    CMBProduto.AddItem(produto.Descricao,produto);
end;

end.
