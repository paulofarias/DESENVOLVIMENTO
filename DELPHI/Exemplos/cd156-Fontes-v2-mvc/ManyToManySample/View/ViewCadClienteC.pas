unit ViewCadClienteC;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.Buttons, VendaU;

type
  TCadastroClienteF = class(TForm)
    edtNome: TEdit;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    edtCPF: TEdit;
    edtTelefone: TEdit;
    BtnSalvar: TBitBtn;
    BitBtn2: TBitBtn;
    procedure BtnSalvarClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  CadastroClienteF: TCadastroClienteF;

implementation

{$R *.dfm}

uses ControllerClienteU;

procedure TCadastroClienteF.BtnSalvarClick(Sender: TObject);
var
cliente : TCliente;
begin
  clienteController := TClienteController.Create;
  cliente := clienteController.BindInModel;
  clienteController.Salvar(cliente);
end;

end.
