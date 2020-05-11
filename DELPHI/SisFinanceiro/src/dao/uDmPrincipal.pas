unit uDmPrincipal;

interface

uses
  System.Classes, ZConnection, Data.DB, ZAbstractConnection;

type
  TDmPrincipal = class(TDataModule)
    ZConnection: TZConnection;
  private
    { Private declarations }
  public
    { Public declarations }
  end;


var
  DmPrincipal: TDmPrincipal;

implementation

{%CLASSGROUP 'Vcl.Controls.TControl'}

{$R *.dfm}

end.

//Provider=SQLNCLI11.1;Persist Security Info=True;User ID=sa;Password=masterkey;Initial Catalog=SISFINANCEIRO;Data Source=(LocalDB)\MSSQLLocalDB;Initial File Name="";Server SPN=""
