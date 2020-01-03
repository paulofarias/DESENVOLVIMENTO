unit ViewCadProdutoU;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.Buttons;

type
  TCadastroProdutoF = class(TForm)
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    edtDescricaoProduto: TEdit;
    edtValorCompra: TEdit;
    edtValorVenda: TEdit;
    Label4: TLabel;
    edtQtd: TEdit;
    BtnSalvar: TBitBtn;
    BitBtn2: TBitBtn;
    procedure BtnSalvarClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  CadastroProdutoF: TCadastroProdutoF;

implementation

{$R *.dfm}

uses ControllerProdutoU, VendaU;

procedure TCadastroProdutoF.BtnSalvarClick(Sender: TObject);
var
produto : TProduto;
begin
  produto := ProdutoController.BindInModel;
  ProdutoController.Salvar(produto);
end;

end.
