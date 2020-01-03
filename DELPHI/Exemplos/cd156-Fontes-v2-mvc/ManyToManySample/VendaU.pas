unit VendaU;

interface

uses
  System.Generics.Collections,
  Aurelius.Mapping.Attributes;

type
  TVenda = class;
  TProduto = class;


  [Entity]
  [Table('ITEM_VENDA')]
  [Sequence('GEN_ITEM_VENDA')]
  [Id('FId', TIdGenerator.IdentityOrSequence)]
  TItemVenda = class
  private
    [Column('ITEM_ID', [TColumnProp.Unique, TColumnProp.Required, TColumnProp.NoUpdate])]
    FId: Integer;
    [Association([TAssociationProp.Required], [TCascadeType.SaveUpdate])]
    [JoinColumn('ITEM_PRODUTO_ID', [TColumnProp.Required])]
    FProduto: TProduto;
    [Column('ITEM_QUANTIDADE', [])]
    FQuantidade: Integer;
    procedure SetId(const Value: Integer);
    procedure SetProduto(const Value: TProduto);
    procedure SetQuantidade(const Value: Integer);
  public
    property Id: Integer read FId write SetId;
    property Produto: TProduto read FProduto write SetProduto;
    property Quantidade : Integer read FQuantidade write SetQuantidade;
  end;

    [Entity]
  [Table('CLIENTE')]
  [Sequence('GEN_CLIENTE')]
  [Id('FId', TIdGenerator.IdentityOrSequence)]
  TCliente = class
  private
    [Column('CLIENTE_CPF', [TColumnProp.Required])]
    FCPF: string;
    [Column('CLIENTE_ID', [TColumnProp.Unique, TColumnProp.Required, TColumnProp.NoUpdate])]
    FId: Integer;
    [Column('CLIENTE_NOME', [TColumnProp.Required])]
    FNome: string;
    [Column('CLIENTE_TELEFONE', [TColumnProp.Required])]
    FTelefone: string;
    procedure SetCPF(const Value: string);
    procedure SetId(const Value: Integer);
    procedure SetNome(const Value: string);
    procedure SetTelefone(const Value: string);
  public
    property Id       : Integer read FId write SetId;
    property Nome     : string read FNome write SetNome;
    property CPF      : string read FCPF write SetCPF;
    property Telefone : string  read FTelefone write SetTelefone;
  end;


  [Entity]
  [Table('VENDA')]
  [Sequence('GEN_VENDA')]
  [Id('FId', TIdGenerator.IdentityOrSequence)]
  TVenda = class
  private
    [Column('VENDA_ID', [TColumnProp.Unique, TColumnProp.Required, TColumnProp.NoUpdate])]
    FId: Integer;
    [Column('VENDA_DATA', [TColumnProp.Required])]
    FData: TDate;
    [ManyValuedAssociation([], CascadeTypeAll)]
    [ForeignJoinColumn('ITEM_VENDA_ID', [TColumnProp.Required])]
    FItems: TList<TItemVenda>;
    [Column('VENDA_VALOR', [])]
    FValor: Double;
    [Association([TAssociationProp.Required], [TCascadeType.SaveUpdate])]
    [JoinColumn('VENDA_CLIENTE_ID', [TColumnProp.Required])]
    FCliente: TCliente;
    [Column('VENDA_DATAP_PAGAMENTO', [])]
    FDataPagamento: TDate;

    procedure SetData(const Value: TDate);
    procedure SetId(const Value: Integer);
    procedure SetItems(const Value: TList<TItemVenda>);
    procedure SetCliente(const Value: TCliente);
    procedure SetDataPagamento(const Value: TDate);
    procedure SetValor(const Value: Double);
  public
    property Id: Integer read FId write SetId;
    property Data: TDate read FData write SetData;
    property Items: TList<TItemVenda> read FItems write SetItems;
    property Cliente : TCliente read FCliente write SetCliente;
    property DataPagamento : TDate read FDataPagamento write SetDataPagamento;
    property Valor : Double read FValor write SetValor;
  end;


  [Entity]
  [Automapping]
  [Sequence('GEN_PRODUTO')]
  [Id('FId', TIdGenerator.IdentityOrSequence)]
  TProduto = class
  private
    [Column('ID', [TColumnProp.Unique, TColumnProp.Required, TColumnProp.NoUpdate])]
    FId: Integer;
    FDescricao: String;
    FValor: Double;
    FValorCompra: Double;
    FQuantidade: integer;
    procedure SetDescricao(const Value: String);
    procedure SetId(const Value: Integer);
    procedure SetValor(const Value: Double);
    procedure SetQuantidade(const Value: integer);
    procedure SetValorCompra(const Value: Double);
  public
    property Id: Integer read FId write SetId;
    property Descricao: String read FDescricao write SetDescricao;
    property Valor: Double read FValor write SetValor;
    property ValorCompra : Double read FValorCompra write SetValorCompra;
    property Quantidade : integer read FQuantidade write SetQuantidade;

  end;

implementation

{ TItemVenda }

procedure TItemVenda.SetId(const Value: Integer);
begin
  FId := Value;
end;

procedure TItemVenda.SetProduto(const Value: TProduto);
begin
  FProduto := Value;
end;

procedure TItemVenda.SetQuantidade(const Value: Integer);
begin
  FQuantidade := Value;
end;

{ TVenda }

procedure TVenda.SetCliente(const Value: TCliente);
begin
  FCliente := Value;
end;

procedure TVenda.SetData(const Value: TDate);
begin
  FData := Value;
end;

procedure TVenda.SetDataPagamento(const Value: TDate);
begin
  FDataPagamento := Value;
end;

procedure TVenda.SetId(const Value: Integer);
begin
  FId := Value;
end;

procedure TVenda.SetItems(const Value: TList<TItemVenda>);
begin
  FItems := Value;
end;

procedure TVenda.SetValor(const Value: Double);
begin
  FValor := Value;
end;

{ TProduto }

procedure TProduto.SetDescricao(const Value: String);
begin
  FDescricao := Value;
end;

procedure TProduto.SetId(const Value: Integer);
begin
  FId := Value;
end;

procedure TProduto.SetQuantidade(const Value: integer);
begin
  FQuantidade := Value;
end;

procedure TProduto.SetValor(const Value: Double);
begin
  FValor := Value;
end;

procedure TProduto.SetValorCompra(const Value: Double);
begin
  FValorCompra := Value;
end;

{ TCliente }

procedure TCliente.SetCPF(const Value: string);
begin
  FCPF := Value;
end;

procedure TCliente.SetId(const Value: Integer);
begin
  FId := Value;
end;

procedure TCliente.SetNome(const Value: string);
begin
  FNome := Value;
end;

procedure TCliente.SetTelefone(const Value: string);
begin
  FTelefone := Value;
end;

end.
