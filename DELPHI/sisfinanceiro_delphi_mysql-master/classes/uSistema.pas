unit uSistema;

interface

uses
  System.IniFiles;

type
  TConexao = record
    DriverID: String;
    DataBase: String;
    Server: String;
    UserName: String;
    Passowrd: String;
  end;

  TSistema = class
  private
    class var fIniSistema : TIniFile;
  public
    class procedure SetUltimoAcesso(Usuario: String);
    class function GetUltimoAcesso : String;
    class function GetUsuarioAcesso : String;
    class function GetConexao: TConexao;
  end;

implementation

uses
  Vcl.Forms, System.SysUtils;

{ TSistema }

class function TSistema.GetConexao: TConexao;
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
end;

class function TSistema.GetUltimoAcesso: String;
begin
  fIniSistema := TIniFile.Create(ExtractFilePath(Application.ExeName)+'config.ini');
  try
    result := 'Último acesso: '+fIniSistema.ReadString('ACESSO','DATA','');
  finally
    FreeAndNil(fIniSistema);
  end;
end;

class function TSistema.GetUsuarioAcesso: String;
begin
  fIniSistema := TIniFile.Create(ExtractFilePath(Application.ExeName)+'config.ini');
  try
    result := fIniSistema.ReadString('ACESSO','USUARIO','');
  finally
    FreeAndNil(fIniSistema);
  end;
end;

class procedure TSistema.SetUltimoAcesso(Usuario: String);
begin
  fIniSistema := TIniFile.Create(ExtractFilePath(Application.ExeName)+'config.ini');
  try
    fIniSistema.WriteString('ACESSO','USUARIO',Usuario);
    fIniSistema.WriteString('ACESSO','DATA',DateTimeToStr(now));
  finally
    FreeAndNil(fIniSistema);
  end;
end;

end.
