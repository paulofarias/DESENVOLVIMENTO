{
Guinther Pauli
GPauli Cursos e Treinamentos
Delphi Certified Professional - 3,5,6,7,2005,2006,Delphi Web,Kylix,XE
Microsoft Certified Professional - MCP,MCAD,MCSD.NET,MCTS,MCPD (C#,ASP.NET, Arquitetura)
Colaborador Editorial Revistas .net Magazine e ClubeDelphi
MVP (Most Valuable Professional) - Embarcadero Technologies - US
http://www.gpauli.com
http://www.facebook.com/guintherpauli
http://www.twitter.com/guintherpauli
http://br.linkedin.com/in/guintherpauli
Emails: guintherpauli@gmail.com; guinther@gpauli.com
}

unit uFrmMain;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, IdBaseComponent, IdComponent,
  IdTCPConnection, IdTCPClient, IdHTTP, Vcl.StdCtrls, Vcl.ComCtrls, Vcl.Grids,
  Vcl.DBGrids, Data.DB, Datasnap.DBClient, Vcl.Bind.Grid, System.Rtti,
  System.Bindings.Outputs, Vcl.Bind.Editors, Data.Bind.EngExt,
  Vcl.Bind.DBEngExt, Data.Bind.Components, Data.Bind.Grid, Data.Bind.DBScope,
  Xml.xmldom, Datasnap.Provider, Xmlxform, Vcl.ExtCtrls, Vcl.Buttons,
  Vcl.Bind.Navigator;

type
  TFrmMain = class(TForm)
    PageControl1: TPageControl;
    TabSheet1: TTabSheet;
    MM: TMemo;
    btnGet: TButton;
    txtENTITY: TEdit;
    IdHTTP: TIdHTTP;
    TabSheet2: TTabSheet;
    cds: TClientDataSet;
    grid: TStringGrid;
    BindSrc: TBindSourceDB;
    LinkGridToDataSource1: TLinkGridToDataSource;
    BindLst: TBindingsList;
    cdsIdProduto: TStringField;
    cdsNome: TStringField;
    cdsIDCategoria: TStringField;
    btnGetProdutos: TButton;
    prv: TXMLTransformProvider;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    txtIdProduto: TEdit;
    txtNomeProduto: TEdit;
    txtIdCategoria: TEdit;
    BindNavigator1: TBindNavigator;
    LinkControlToField1: TLinkControlToField;
    LinkControlToField2: TLinkControlToField;
    LinkControlToField3: TLinkControlToField;
    cdsCategorias: TClientDataSet;
    prvCategorias: TXMLTransformProvider;
    cdsCategoriasIdCategoria: TStringField;
    cdsCategoriasNome: TStringField;
    gridCategorias: TStringGrid;
    btnSelectCategorias: TButton;
    BindSourceDB1: TBindSourceDB;
    LinkGridToDataSource2: TLinkGridToDataSource;
    procedure btnGetClick(Sender: TObject);
    procedure btnGetProdutosClick(Sender: TObject);
    procedure btnSelectCategoriasClick(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  FrmMain: TFrmMain;

const
  URI = 'http://localhost:3312/Servico/WcfDataService.svc/';

implementation

{$R *.dfm}

procedure TFrmMain.btnGetClick(Sender: TObject);
var
  res: string;
begin
  res := IdHTTP.Get(URI + txtENTITY.Text);
  MM.Lines.Text := res;
end;

procedure TFrmMain.btnGetProdutosClick(Sender: TObject);
var
  XML: string;
  filter: string;
begin
  cds.Close();
  filter := '?$filter=IDCategoria%20eq%20' + cdsCategoriasIdCategoria.Value;
  XML := IdHTTP.Get(URI + 'PRODUTOS'+filter);
  prv.TransformRead.SourceXml := XML;
  cds.Open();
end;

procedure TFrmMain.btnSelectCategoriasClick(Sender: TObject);
var
  XML: string;
begin
  cdsCategorias.Close();
  XML := IdHTTP.Get(URI + 'CATEGORIAS');
  prvCategorias.TransformRead.SourceXml := XML;
  cdsCategorias.Open();
end;

end.
