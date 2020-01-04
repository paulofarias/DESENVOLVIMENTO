unit uLoginDAO;

interface

uses
  uLogin;

type
  TLoginDAO = class
  public
    function Logar(pLogin: TLogin): Boolean;
  end;

implementation

uses
  FireDAC.Comp.Client, uSistema;

const
  CRLF = #13#10;

  S_SQL_LOGIN =
    'SELECT             ' + CRLF +
    '  ID               ' + CRLF +
    'FROM               ' + CRLF +
    '  USUARIOS         ' + CRLF +
    'WHERE              ' + CRLF +
    '    LOGIN = :LOGIN ' + CRLF +
    'AND SENHA = :SENHA ' ;

{ TLoginDAO }

function TLoginDAO.Logar(pLogin: TLogin): Boolean;
var
  qryAux: TFDQuery;
begin
  qryAux := TFDQuery.Create(nil);
  with qryAux do
    try
      Connection := Sistema.Conexao;
      SQL.Add(S_SQL_LOGIN);
      Params[0].AsString := pLogin.Usuario;
      Params[1].AsString := pLogin.Senha;
      Open;
      Result := Fields[0].AsInteger > 0;
    finally
      Close;
      Free;
    end;
end;

end.
