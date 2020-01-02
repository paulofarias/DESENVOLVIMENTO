unit uGetConexao;

interface

uses
  FireDAC.Comp.Client;

type
  TGetConexao = class
  public
    class function Conexao : TFDConnection; //TSqlConnection;
  end;

implementation

uses
  uDmDados;

{ TGetConexao }

class function TGetConexao.Conexao: TFDConnection;
begin
  result := DmDados.FDConnection;
end;

end.
