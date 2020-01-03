unit ControllerClienteU;

interface
uses
System.Generics.Collections, Vcl.Forms,  Classes, dialogs,
Vcl.Controls, ViewCadClienteC, VendaU, ClienteModelU;
type
TClienteController = class
  private

  public
  constructor create;
  destructor destroy;
  procedure BinInView();
  function BindInModel() : TCliente;
  function Salvar(cliente : TCliente) : boolean;
  procedure ClearControls();
  procedure AbrirForm();


end;

var

clienteController : TClienteController;
implementation

{ TClienteController }

procedure TClienteController.AbrirForm();
begin
  CadastroClienteF := TCadastroClienteF.Create(Application);
  CadastroClienteF.ShowModal;
end;

function TClienteController.BindInModel() : TCliente;
var
 cliente : TCliente;
begin
cliente            := TCliente.Create;
cliente.Nome       := CadastroClienteF.edtNome.Text;
cliente.CPF        := CadastroClienteF.edtCPF.Text;
cliente.Telefone   := CadastroClienteF.edtTelefone.Text;
Result := cliente;
end;

procedure TClienteController.BinInView;
begin

end;

procedure TClienteController.ClearControls;
begin

end;

constructor TClienteController.create;
begin
  ClienteModel := TClienteModel.Create;
end;

destructor TClienteController.destroy;
begin
ClienteModel.free;
ClienteModel := nil;
end;

function TClienteController.Salvar(cliente : TCliente): boolean;
var
clienteModel : TClienteModel;
begin
clienteModel := TClienteModel.Create;
if clienteModel.SaveOrUpdate(cliente) then
  Result := True
else
  Result := False;
end;

end.
