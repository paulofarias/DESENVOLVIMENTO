unit uSistema;

interface

uses
  System.IniFiles, System.Classes,
  FireDAC.Stan.Intf, FireDAC.Stan.Option,
  FireDAC.Stan.Error, FireDAC.UI.Intf, FireDAC.Phys.Intf, FireDAC.Stan.Def,
  FireDAC.Stan.Pool, FireDAC.Stan.Async, FireDAC.Phys, FireDAC.Phys.MySQL,
  FireDAC.Phys.MySQLDef, FireDAC.VCLUI.Wait, FireDAC.Comp.Client,
  FireDAC.Stan.Param, FireDAC.DatS, FireDAC.DApt.Intf, FireDAC.DApt,
  FireDAC.Comp.DataSet;

type
  TSistema = class
  private
    class var fIniSistema : TIniFile;
    fConexao: TFDConnection;
  public
    constructor Create; reintroduce;
    class procedure SetUltimoAcesso(Usuario: String);
    class function GetUltimoAcesso : String;
    class function GetUsuarioAcesso : String;
    function GetConexao: TFDConnection;
    property Conexao: TFDConnection read GetConexao;
  end;

  var
    Sistema: TSistema;

implementation

uses
  Vcl.Forms, System.SysUtils;

const
  CRLF = #13#10;

{ TSistema }

constructor TSistema.Create;
begin
  //inherited Create;
  fConexao := TFDConnection.Create(Application);
  fConexao.LoginPrompt := False;
  fConexao.Params.Text :=
    'DriverID=MySQL' + CRLF +
    'Database=Financeiro' + CRLF +
    'Server=localhost' + CRLF +
    'User_Name=root' + CRLF +
    'Password=';
  fConexao.Connected := True;
end;

{class function TSistema.GetConexao_: TConexao;
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
  if not fConexao.Connected then
    fConexao.Connected := True;

  Result := fConexao;
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
  fIniSistema := TIniFile.Create(ExtractFilePath(Application.ExeName) + 'config.ini');
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
