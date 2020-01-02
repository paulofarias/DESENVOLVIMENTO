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

{ TSql }

uses uGetConexao;

constructor TSql.Create(Aowner: TComponent);
begin
  inherited;
  Connection := TGetConexao.Conexao;
end;

end.
