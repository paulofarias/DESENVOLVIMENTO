unit uFrmDetalhesPagar;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.Grids, Vcl.DBGrids, Data.DB;

type
  TfrmDetalhesPagar = class(TForm)
    ds: TDataSource;
    DBGrid1: TDBGrid;
    procedure DBGrid1DrawColumnCell(Sender: TObject; const Rect: TRect;
      DataCol: Integer; Column: TColumn; State: TGridDrawState);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure FormKeyPress(Sender: TObject; var Key: Char);
    procedure FormShow(Sender: TObject);
  private
    { Private declarations }
  public
    fId: Integer;
    { Public declarations }
  end;

var
  frmDetalhesPagar: TfrmDetalhesPagar;

implementation

{$R *.dfm}

uses uDmDados, uFuncoes;

procedure TfrmDetalhesPagar.DBGrid1DrawColumnCell(Sender: TObject;
  const Rect: TRect; DataCol: Integer; Column: TColumn; State: TGridDrawState);
begin
  ZebrarDBGrid(ds,DBGrid1,State,Rect,Column);
end;

procedure TfrmDetalhesPagar.FormClose(Sender: TObject;
  var Action: TCloseAction);
begin
  DmDados.cdsPagar_detalhes.Close;
end;

procedure TfrmDetalhesPagar.FormKeyPress(Sender: TObject; var Key: Char);
begin
  FechaFormEsc(key,self);
end;

procedure TfrmDetalhesPagar.FormShow(Sender: TObject);
begin
  try
    DmDados.cdsPagar_detalhes.Close;
    DmDados.cdsPagar_detalhes.CommandText := 'select * from pagar_detalhes where id_pagar = '+inttostr(fid);
    DmDados.cdsPagar_detalhes.Open;
  except on E: Exception do
    raise Exception.Create('Erro ao consultar histórico a pagar: '+E.Message);
  end;
end;

end.
