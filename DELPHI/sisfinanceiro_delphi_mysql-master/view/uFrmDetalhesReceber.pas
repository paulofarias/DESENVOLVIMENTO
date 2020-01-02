unit uFrmDetalhesReceber;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Data.DB, Vcl.Grids, Vcl.DBGrids;

type
  TfrmDetalhesReceber = class(TForm)
    DBGrid1: TDBGrid;
    ds: TDataSource;
    procedure DBGrid1DrawColumnCell(Sender: TObject; const Rect: TRect;
      DataCol: Integer; Column: TColumn; State: TGridDrawState);
    procedure FormShow(Sender: TObject);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure FormKeyPress(Sender: TObject; var Key: Char);
  private
    { Private declarations }
  public
    fId: Integer;
    { Public declarations }
  end;

var
  frmDetalhesReceber: TfrmDetalhesReceber;

implementation

{$R *.dfm}

uses uDmDados, uFuncoes;

procedure TfrmDetalhesReceber.DBGrid1DrawColumnCell(Sender: TObject;
  const Rect: TRect; DataCol: Integer; Column: TColumn; State: TGridDrawState);
begin
  ZebrarDBGrid(ds,DBGrid1,State,Rect,Column);
end;

procedure TfrmDetalhesReceber.FormClose(Sender: TObject;
  var Action: TCloseAction);
begin
  DmDados.cdsReceber_detalhes.Close;
end;

procedure TfrmDetalhesReceber.FormKeyPress(Sender: TObject; var Key: Char);
begin
  FechaFormEsc(key,self);
end;

procedure TfrmDetalhesReceber.FormShow(Sender: TObject);
begin
  try
    DmDados.cdsReceber_detalhes.Close;
    DmDados.cdsReceber_detalhes.CommandText := 'select * from receber_detalhes where id_receber = '+inttostr(fid);
    DmDados.cdsReceber_detalhes.Open;
  except on E: Exception do
    raise Exception.Create('Erro ao consultar histórico a receber: '+E.Message);
  end;
end;

end.

