unit uGetConexao;

interface

uses
  FireDAC.Comp.Client;

type
  TGetConexao = class
  public
    class function Conexao : TFDConnection;
  end;

implementation

uses
  uSistema;

{ TGetConexao }

class function TGetConexao.Conexao: TFDConnection;
begin

end;

end.
