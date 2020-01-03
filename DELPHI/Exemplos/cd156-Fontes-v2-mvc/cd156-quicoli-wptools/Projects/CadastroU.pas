unit CadastroU;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Data.DB, Datasnap.DBClient, Vcl.Grids,
  Vcl.DBGrids, Vcl.StdCtrls, WPRTEDefs, WPCTRMemo, WPCTRRich, WPRTEEdit;

type
  TCadastroF = class(TForm)
    cdsClientes: TClientDataSet;
    cdsClientesNome: TStringField;
    cdsClientesEndereco: TStringField;
    cdsClientesBairro: TStringField;
    cdsClientesCidade: TStringField;
    cdsClientesUf: TStringField;
    cdsClientesCEP: TStringField;
    dsClientes: TDataSource;
    gridClientes: TDBGrid;
    Button1: TButton;
    WPRichText1: TWPRichText;
    procedure FormShow(Sender: TObject);
    procedure WPRichText1MailMergeGetText(Sender: TObject;
      const inspname: string; Contents: TWPMMInsertTextContents);
    procedure Button1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  CadastroF: TCadastroF;

implementation

{$R *.dfm}

procedure TCadastroF.Button1Click(Sender: TObject);
begin
  cdsClientes.First;
  while not cdsClientes.Eof do
  begin
    WPRichText1.Clear;
    WPRichText1.LoadFromFile('d:\modelo.rtf');
    WPRichText1.InsertPointAttr.Hidden := true;
    WPRichText1.MergeText;
    WPRichText1.Print;
    cdsClientes.Next;
  end;
end;

procedure TCadastroF.FormShow(Sender: TObject);
begin
  cdsClientes.CreateDataSet;
end;

procedure TCadastroF.WPRichText1MailMergeGetText(Sender: TObject;
  const inspname: string; Contents: TWPMMInsertTextContents);
begin
  if inspname = 'Nome' then
  begin
    Contents.StringValue := cdsClientesNome.AsString;
    Exit;
  end;
  if inspname = 'Endereco' then
  begin
    Contents.StringValue := cdsClientesEndereco.AsString;
    Exit;
  end;
  if inspname = 'Bairro' then
  begin
    Contents.StringValue := cdsClientesBairro.AsString;
    Exit;
  end;
  if inspname = 'Cidade' then
  begin
    Contents.StringValue := cdsClientesCidade.AsString;
    Exit;
  end;
  if inspname = 'Uf' then
  begin
    Contents.StringValue := cdsClientesUf.AsString;
    Exit;
  end;
  if inspname = 'CEP' then
  begin
    Contents.StringValue := cdsClientesCEP.AsString;
    Exit;
  end;
end;

end.
