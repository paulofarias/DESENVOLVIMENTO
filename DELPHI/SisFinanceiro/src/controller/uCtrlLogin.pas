unit uCtrlLogin;

interface

type

  TCtrlLogin = class
  public
    function Logar(pLogin: String; pSenha: String): Boolean;
  end;

implementation

uses
  uUsuario;

{ TCtrlLogin }

function TCtrlLogin.Logar(pLogin, pSenha: String): Boolean;
begin
  Result := False;
  with TUsuario.Create(pLogin, pSenha) do
    try
      Result := Logar;
    finally
      Free;
    end;
end;

end.
