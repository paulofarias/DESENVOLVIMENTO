unit uSistema;

interface

uses
  System.IniFiles, System.Classes, FireDAC.Comp.Client;

type
  TSistema = class
  private
    var fIniSistema : TIniFile;
    fUsuarioLogado: String;
  public
    procedure SetUsuarioLogado(pUsuario: String);
    function GetUltimoAcesso : String;
    function GetUsuarioAcesso : String;
    function GetConexao: TFDConnection;
    property Conexao: TFDConnection read GetConexao;
    property UsuarioLogado: String read fUsuarioLogado write SetUsuarioLogado;
  end;

  var
    Sistema: TSistema;

implementation

uses
  Vcl.Forms, System.SysUtils, uDmPrincipal;

const
  CRLF = #13#10;

{ TSistema }

{function TSistema.GetConexao: TConexao;
begin
  fIniSistema := TIniFile.Create(ExtractFilePath(Application.ExeName)+'config.ini');
  try
    Result.DriverID := fIniSistema.ReadString('CONEXAO','DRIVERID','');
    Result.DataBase := fIniSistema.ReadString('CONEXAO','DATABASE','');
    Result.Server := fIniSistema.ReadString('CONEXAO','SERVER','');
    Result.UserName := fIniSistema.ReadString('CONEXAO','USERNAME','');
    Result.Passowrd := fIniSistema.ReadString('CONEXAO','PASSWORD','');
  finally
    FreeAndNil(fIniSistema);
  end;
end;}

function TSistema.GetConexao: TFDConnection;
begin
  Result := dmPrincipal.FDConnection;
end;

function TSistema.GetUltimoAcesso: String;
begin
  fIniSistema := TIniFile.Create(ExtractFilePath(Application.ExeName)+'config.ini');
  try
    result := 'Último acesso: '+fIniSistema.ReadString('ACESSO','DATA','');
  finally
    FreeAndNil(fIniSistema);
  end;
end;

function TSistema.GetUsuarioAcesso: String;
begin
  fIniSistema := TIniFile.Create(ExtractFilePath(Application.ExeName) + 'config.ini');
  try
    result := fIniSistema.ReadString('ACESSO','USUARIO','');
  finally
    FreeAndNil(fIniSistema);
  end;
end;

procedure TSistema.SetUsuarioLogado(pUsuario: String);
begin
  fUsuarioLogado := pUsuario;
  fIniSistema := TIniFile.Create(ExtractFilePath(Application.ExeName)+'config.ini');
  try
    fIniSistema.WriteString('ACESSO','USUARIO', pUsuario);
    fIniSistema.WriteString('ACESSO','DATA',DateTimeToStr(now));
  finally
    FreeAndNil(fIniSistema);
  end;
end;

end.
