unit uLogin;

interface

type
  TLogin = class
  private
    FLogin: String;
    FSenha: String;
    // getters
    function GetUsuario: string;
    function GetSenha: string;
    // setters
    procedure SetUsuario(const Value: string);
    procedure SetSenha(const Value: string);

  public
    // propriedades
    property Usuario : string read GetUsuario write SetUsuario;
    property Senha : string read GetSenha write SetSenha;
  end;

implementation

{ TLogin }

function TLogin.GetSenha: string;
begin
 Result := FSenha;
end;

function TLogin.GetUsuario: string;
begin
 Result := FLogin;
end;
procedure TLogin.SetSenha(const Value: string);
begin
  FSenha := Value;
end;

procedure TLogin.SetUsuario(const Value: string);
begin
  FLogin := Value;
end;

end.
