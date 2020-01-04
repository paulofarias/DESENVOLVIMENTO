unit uSQL;

interface

uses
  System.Classes, FireDAC.Comp.Client;

type
  TSql = class(TFDQuery)
  public
    constructor Create(Aowner : TComponent); override;
  end;

implementation

uses
  uSistema;
{ TSql }

constructor TSql.Create(Aowner: TComponent);
begin
  inherited;
  Connection := Sistema.Conexao; //TGetConexao.Conexao;
end;

end.
