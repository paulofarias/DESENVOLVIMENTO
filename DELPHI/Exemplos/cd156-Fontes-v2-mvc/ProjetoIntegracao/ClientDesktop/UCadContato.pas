unit UCadContato;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.Mask, Vcl.DBCtrls,
  Data.DB, Vcl.Grids, Vcl.DBGrids, Vcl.ExtCtrls;

type
  TFCadContato = class(TForm)
    lblNome: TLabel;
    EdtNome: TDBEdit;
    lblEmail: TLabel;
    EdtEmail: TDBEdit;
    lblTelefone: TLabel;
    EdtTelefone: TDBEdit;
    DSContato: TDataSource;
    BtnNovo: TButton;
    BtnAlterar: TButton;
    BtnSalvar: TButton;
    BtnExcluir: TButton;
    GridPesquisa: TDBGrid;
    Bevel1: TBevel;
    lblPesquisa: TLabel;
    EdtPesquisa: TEdit;
    EdtFiltro: TComboBox;
    lblFiltro: TLabel;
    procedure DSContatoStateChange(Sender: TObject);
    procedure BtnNovoClick(Sender: TObject);
    procedure BtnAlterarClick(Sender: TObject);
    procedure BtnSalvarClick(Sender: TObject);
    procedure BtnExcluirClick(Sender: TObject);
    procedure FormShow(Sender: TObject);
    procedure HabilitaDesabilitaCampos;
    procedure EdtPesquisaChange(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  FCadContato: TFCadContato;

implementation

{$R *.dfm}

uses UDataModule;

procedure TFCadContato.BtnAlterarClick(Sender: TObject);
begin
FDataModule.CDSContato.Edit;
EdtNome.SetFocus;
end;

procedure TFCadContato.BtnExcluirClick(Sender: TObject);
begin
FDataModule.CDSContato.Delete;
FDataModule.CDSContato.ApplyUpdates(0);
HabilitaDesabilitaCampos;
end;

procedure TFCadContato.BtnNovoClick(Sender: TObject);
begin
EdtPesquisa.Clear;
FDataModule.CDSContato.Append;
EdtNome.SetFocus;
end;

procedure TFCadContato.BtnSalvarClick(Sender: TObject);
begin
FDataModule.CDSContato.Post;
FDataModule.CDSContato.ApplyUpdates(0);
end;

procedure TFCadContato.DSContatoStateChange(Sender: TObject);
begin
HabilitaDesabilitaCampos;
end;

procedure TFCadContato.EdtPesquisaChange(Sender: TObject);
Var
  where: String;
begin
  case EdtFiltro.ItemIndex of
    //Nome
    0: where:='where Nome like '+QuotedStr('%'+EdtPesquisa.Text+'%');
    //Email
    1: where:='where Email like '+QuotedStr('%'+EdtPesquisa.Text+'%');
    //Telefone
    2: where:='where Telefone like '+QuotedStr('%'+EdtPesquisa.Text+'%');
  end;
  FDataModule.CDSContato.Close;
  FDataModule.CDSContato.CommandText := 'Select * from Contato '+where;
  FDataModule.CDSContato.Open;
end;

procedure TFCadContato.FormShow(Sender: TObject);
begin
FDataModule.CDSContato.Open;
end;

procedure TFCadContato.HabilitaDesabilitaCampos;
begin
EdtNome.Enabled     := FDataModule.CDSContato.State in [dsEdit,dsInsert];
EdtEmail.Enabled    := EdtNome.Enabled;
EdtTelefone.Enabled := EdtNome.Enabled;
BtnAlterar.Enabled  := (FDataModule.CDSContato.State in [dsBrowse]) and
                       (FDataModule.CDSContato.RecordCount>0);
BtnExcluir.Enabled  := BtnAlterar.Enabled;
BtnSalvar.Enabled   := EdtNome.Enabled;
end;

end.
