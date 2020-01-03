unit UBaseController;

interface
uses
  System.Generics.Collections, Vcl.Forms, BaseViewCadastroU, Classes, dialogs, UBaseModel,
  Vcl.Controls;
 type
  TBaseController<TFormulario:TfrmCadBase; TModelo:class> = class(TObject)
  strict protected
    FFormulario:TFormulario;
    FModelo: TModelo;
    FModelosCadastrados: TList<TModelo>;
    servico: TBaseModel<TModelo>;
    FInseriondo: Boolean;
  public
    function ShowFormModal(modelo: TModelo; Inserindo: Boolean = False): Boolean;
    procedure ClearControls();virtual;abstract;
    procedure BindInView();virtual;abstract;
    procedure BindInModel();virtual;abstract;
    procedure Save();
    procedure SalvarClick(Sender: TObject);
    procedure CancelClick(Sender: TObject);
    constructor Create();
    destructor Destroy();override;
    procedure CloseForm(Sender: TObject; var Action: TCloseAction);
  end;


implementation


uses
  System.SysUtils;

{ TBaseController<TFormulario, TModelo> }

procedure TBaseController<TFormulario, TModelo>.CancelClick(Sender: TObject);
begin
  FFormulario.ModalResult := mrCancel;
end;

procedure TBaseController<TFormulario, TModelo>.CloseForm(Sender: TObject;
  var Action: TCloseAction);
begin
  Action := TCloseAction.caFree;
end;

constructor TBaseController<TFormulario, TModelo>.Create;
begin
  FModelosCadastrados := TList<TModelo>.Create();
  Application.CreateForm(TFormulario, FFormulario);
  FFormulario.OnClose := CloseForm;
end;

destructor TBaseController<TFormulario, TModelo>.Destroy;
begin
  FFormulario := nil;
  inherited;
end;

procedure TBaseController<TFormulario, TModelo>.SalvarClick(sender: TObject);
begin
   FFormulario.ModalResult := mrOk;
end;

procedure TBaseController<TFormulario, TModelo>.Save;
begin
  servico.Gravar(FModelo);
end;

function TBaseController<TFormulario, TModelo>.ShowFormModal(modelo: TModelo; Inserindo: Boolean): boolean;
begin
  Application.CreateForm(TFormulario, FFormulario);
  FFormulario.OnClose := CloseForm;
  FModelo := modelo;
  BindInView;
  Result := FFormulario.ShowModal = mrOk;
  if Result then
  begin
    BindInModel;
  end
  else
  begin
    if Inserindo then
        FreeAndNil(FModelo);
  end;
end;

end.

