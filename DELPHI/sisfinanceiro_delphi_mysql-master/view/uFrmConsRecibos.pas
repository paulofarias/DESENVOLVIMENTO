unit uFrmConsRecibos;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Data.DB, Datasnap.DBClient, Vcl.Grids,
  Vcl.DBGrids, Vcl.Menus;

type
  TfrmConsRecibos = class(TForm)
    DBGrid1: TDBGrid;
    cds: TClientDataSet;
    ds: TDataSource;
    cdsid: TIntegerField;
    cdstipo_recibo: TIntegerField;
    cdsdt_emissao: TDateField;
    cdsnome: TStringField;
    cdsvlr_recibo: TFMTBCDField;
    cdsreferente: TStringField;
    cdsobservacao: TStringField;
    cdsemitente: TStringField;
    cdsendereco: TStringField;
    cdscpf_cnpj: TStringField;
    cdscidade: TStringField;
    cdsdt_cadastro: TDateField;
    cdshr_cadastro: TTimeField;
    cdsuser_cadastro: TStringField;
    cdsTipo: TStringField;
    PopupMenu1: TPopupMenu;
    Imprimir1: TMenuItem;
    procedure FormCreate(Sender: TObject);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure DBGrid1DrawColumnCell(Sender: TObject; const Rect: TRect;
      DataCol: Integer; Column: TColumn; State: TGridDrawState);
    procedure Imprimir1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  frmConsRecibos: TfrmConsRecibos;

implementation

{$R *.dfm}

uses uDmDados, uFuncoes{, uDmRelatorios};

procedure TfrmConsRecibos.DBGrid1DrawColumnCell(Sender: TObject;
  const Rect: TRect; DataCol: Integer; Column: TColumn; State: TGridDrawState);
begin
  ZebrarDBGrid(ds, DBGrid1, state, rect, column);
end;

procedure TfrmConsRecibos.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  cds.Close;
end;

procedure TfrmConsRecibos.FormCreate(Sender: TObject);
var
  sSql: TStringList;
begin
  sSql := TStringList.Create;
  try
    sSql.Add('select id, tipo_recibo, dt_emissao, nome, vlr_recibo, referente,');
    sSql.Add(' observacao, emitente, endereco, cpf_cnpj, cidade, dt_cadastro,');
    sSql.Add(' hr_cadastro, user_cadastro, ');
    sSql.Add(' case tipo_recibo when 0 then ''Recebimento'' when 1 then ''Pagamento'' end as Tipo');
    sSql.Add('from recibos order by id desc');
    cds.Close;
    cds.CommandText := sSql.Text;
    cds.Open;
  finally
    FreeAndNil(sSql);
  end;
end;

procedure TfrmConsRecibos.Imprimir1Click(Sender: TObject);
begin
  {DmRelatorios := TDmRelatorios.Create(nil);
  try
    DmRelatorios.ImprimirRecibo(cdsid.AsInteger,cdstipo_recibo.AsInteger);
  finally
    FreeAndNil(DmRelatorios);
  end;}
end;

end.
