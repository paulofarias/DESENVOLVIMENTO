unit uFireDACConexao;

interface

uses
  FireDAC.Comp.Client;

type

  TFiredacConexao = class
  private
      FConexao : TFDConnection;
  public
     constructor Create;
     destructor Destroy; override;
     function Connection : TObject;
  end;


implementation

uses
  System.SysUtils;

{ TFiredacConexao }

const
  CRLF = #13#10;

function TFiredacConexao.Connection: TObject;
begin
  Result := FConexao;
end;

constructor TFiredacConexao.Create;
begin
  fConexao := TFDConnection.Create(nil);
  fConexao.LoginPrompt := False;
  fConexao.Params.Text :=
    'DriverID=MySQL' + CRLF +
    'Database=Financeiro' + CRLF +
    'Server=localhost' + CRLF +
    'User_Name=root' + CRLF +
    'Password=';
  fConexao.Connected := True;
end;

destructor TFiredacConexao.Destroy;
begin
  FreeAndNil(fConexao);
  inherited;
end;

end.
