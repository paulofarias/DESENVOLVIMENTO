unit UDataModule;

interface

uses
  System.SysUtils, System.Classes, Data.DBXFirebird, Data.DB, Data.SqlExpr,
  Data.FMTBcd, Datasnap.Provider, Datasnap.DBClient;

type
  TFDataModule = class(TDataModule)
    Conexao: TSQLConnection;
    QrContato: TSQLDataSet;
    CDSContato: TClientDataSet;
    dspContato: TDataSetProvider;
    QrContatoID: TIntegerField;
    QrContatoNOME: TStringField;
    QrContatoEMAIL: TStringField;
    QrContatoTELEFONE: TStringField;
    CDSContatoID: TIntegerField;
    CDSContatoNOME: TStringField;
    CDSContatoEMAIL: TStringField;
    CDSContatoTELEFONE: TStringField;
    function Chave(Tabela: String): Integer;
    procedure CDSContatoBeforePost(DataSet: TDataSet);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  FDataModule: TFDataModule;

implementation

{%CLASSGROUP 'Vcl.Controls.TControl'}

{$R *.dfm}

procedure TFDataModule.CDSContatoBeforePost(DataSet: TDataSet);
begin
if CDSContatoID.AsInteger=0 then
  CDSContatoID.AsInteger:=Chave('Contato');
end;

function TFDataModule.Chave(Tabela: String): Integer;
var
   SQLDataSet : TSQLDataSet;
begin
   SQLDataSet := TSQLDataSet.Create(nil);
   try
     try
       SQLDataSet.SQLConnection := Conexao;
       SQLDataSet.Close;
       SQLDataSet.CommandText := 'SELECT GEN_ID(GEN_ID_'+ Tabela+',1) FROM RDB$DATABASE';
       SQLDataSet.Open;
       Result := SQLDataSet.Fields[0].Value;
     except
       Result := -1
     end;
   finally
     SQLDataSet.Close;
     FreeAndNil(SQLDataSet);
   end;
end;

end.
