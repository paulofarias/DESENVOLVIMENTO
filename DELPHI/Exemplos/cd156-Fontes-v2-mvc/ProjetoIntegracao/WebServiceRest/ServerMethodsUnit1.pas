unit ServerMethodsUnit1;

interface

uses System.SysUtils, System.Classes, Datasnap.DSServer, Datasnap.DSAuth, DBXJson;

type
  TServerMethods1 = class(TDSServerModule)
  private
    { Private declarations }
  public
    { Public declarations }
    function listaContato(): TJSonArray;
    function updateInsereContato(Contato: TJsonOBject): String;
  end;

implementation

{$R *.dfm}

uses System.StrUtils, UDataModule;





{ TServerMethods1 }

function TServerMethods1.listaContato: TJSonArray;
Var
  Obj: TJsonObject;
begin
  FDataModule.QrContato.Close;
  FDataModule.QrContato.CommandText:=('Select * from Contato');
  FDataModule.QrContato.Open;
  result:=TJSONArray.Create;
  while not FDataModule.QrContato.Eof do
    Begin
      OBj:=TJsonObject.Create;
      Obj.AddPair('Nome',TJSONString.Create(FDataModule.QrContato.FieldByName('Nome').AsString));
      Obj.AddPair('Email',TJSONString.Create(FDataModule.QrContato.FieldByName('Email').AsString));
      Obj.AddPair('Telefone',TJSONString.Create(FDataModule.QrContato.FieldByName('Telefone').AsString));
      Result.AddElement(obj);
      FDataModule.QrContato.Next;
    End;
end;

function TServerMethods1.updateInsereContato(Contato: TJsonOBject): String;
Var
Nome, Email, Telefone, xSql: String;
ID: Integer;
Par: TJSONPair;
begin
   Par := TJSONPair.Create;
   //Nome
   Par := Contato.Get(0);
   Nome:=(Par.JsonValue.Value);
   //Email
   Par := Contato.Get(1);
   Email:=Par.JsonValue.Value;
   //Telefone
   Par := Contato.Get(2);
   Telefone:=Par.JsonValue.Value;
   //GENERATOR
   FDataModule.QrContato.Close;
   FDataModule.QrContato.CommandText:=('SELECT GEN_ID(GEN_ID_CONTATO,1) FROM RDB$DATABASE');
   FDataModule.QrContato.Open;
   ID := FDataModule.QrContato.Fields[0].Value;

    xSql:='Insert into Contato'
         +'   (ID, Nome, Email, Telefone)'
         +'   values ('+IntToStr(ID)+','
         +QuotedStr(Nome)+','
         +QuotedStr(Email)+','
         +QuotedStr(Telefone)
         +')';
    Try
      //INSERE CONTATO
      FDataModule.QrContato.Close;
      FDataModule.QrContato.CommandText:=xSQL;
      FDataModule.QrContato.ExecSQL();
      result:=('OK!');
    Except on E:Exception Do
      Begin
        result:=('ERRO - '+slinebreak+'Erro: '+E.Message);
      End;
    End;
end;

end.

