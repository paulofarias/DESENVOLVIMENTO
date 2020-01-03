unit FrmPrincipalU;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, ServiceU, Vcl.Menus, ControllerClienteU, ControllerVendaU;

type
  TForm1 = class(TForm)
    MainMenu1: TMainMenu;
    Cadastros1: TMenuItem;
    Cliente1: TMenuItem;
    Produto1: TMenuItem;
    Movimentaess1: TMenuItem;
    Vendas1: TMenuItem;
    procedure FormCreate(Sender: TObject);
    procedure Cliente1Click(Sender: TObject);
    procedure Vendas1Click(Sender: TObject);
    procedure Produto1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.dfm}

uses VendaU, ControllerProdutoU;

procedure TForm1.Cliente1Click(Sender: TObject);
var
cliente : TCliente;
begin
  clienteController := TClienteController.Create;
  clienteCOntroller.AbrirForm;
end;

procedure TForm1.FormCreate(Sender: TObject);
var
  s: ISession;
  p: TProduto;
begin
{  s := TService.GetSession;
  p := s.ObjectManager.Find<TProduto>(2);
  p.Valor := 1545.70;
  s.ObjectManager.SaveOrUpdate(p);}
end;

procedure TForm1.Produto1Click(Sender: TObject);
begin
  ProdutoController := TProdutoController.Create;
  ProdutoController.AbrirForm;
end;

procedure TForm1.Vendas1Click(Sender: TObject);
begin
  VendaController := TVendaController.create;
  VendaController.AbrirForm;
end;

end.
