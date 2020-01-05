unit uFrmCadastroBasico;

interface

uses
  Data.DB, Vcl.ComCtrls, Vcl.Menus, System.ImageList, Vcl.ImgList,
  Vcl.Controls, System.Classes, System.Actions, Vcl.ActnList, Vcl.ToolWin,
  Vcl.StdCtrls, Vcl.Buttons, Vcl.ExtCtrls, Vcl.Grids, Vcl.DBGrids, Vcl.Forms,
  System.Types;


type
  TfrmCadastroBasico = class(TForm)
    dsPrincipal: TDataSource;
    PageControl1: TPageControl;
    tbsCadastro: TTabSheet;
    tbsPesquisar: TTabSheet;
    dbgDados: TDBGrid;
    StatusBar1: TStatusBar;
    aclAcoes: TActionList;
    actInserir: TAction;
    actEditar: TAction;
    actExcluir: TAction;
    actSalvar: TAction;
    actCancelar: TAction;
    actPesquisar: TAction;
    actImprimir: TAction;
    actFechar: TAction;
    pnlPesquisar: TPanel;
    btnFiltrar: TBitBtn;
    edtPesquisar: TEdit;
    lblPesquisar: TLabel;
    lblFiltros: TLabel;
    cbxFiltros: TComboBox;
    ImageList1: TImageList;
    cbrPrincipal: TCoolBar;
    MainMenu1: TMainMenu;
    Arquivo1: TMenuItem;
    Funes1: TMenuItem;
    ImageListCadastro: TImageList;
    tbrPrincipal: TToolBar;
    ToolButton1: TToolButton;
    ToolButton2: TToolButton;
    ToolButton3: TToolButton;
    ToolButton4: TToolButton;
    actPrimeiro: TAction;
    actAnterior: TAction;
    actProximo: TAction;
    actUltimo: TAction;
    ToolButton5: TToolButton;
    ToolButton6: TToolButton;
    ToolButton7: TToolButton;
    ToolButton8: TToolButton;
    ToolButton9: TToolButton;
    ToolButton10: TToolButton;
    ToolButton11: TToolButton;
    ToolButton12: TToolButton;
    ToolButton13: TToolButton;
    Sair1: TMenuItem;
    Primeiro1: TMenuItem;
    actAnterior1: TMenuItem;
    Prximo1: TMenuItem;
    ltimo1: TMenuItem;
    ToolButton14: TToolButton;
    ToolButton15: TToolButton;
    actAtualizar: TAction;
    ToolButton16: TToolButton;
    ToolButton17: TToolButton;
    N1: TMenuItem;
    Inserir1: TMenuItem;
    Excluir1: TMenuItem;
    Editar1: TMenuItem;
    Salvar1: TMenuItem;
    Cancelar1: TMenuItem;
    actAtualizar1: TMenuItem;
    N2: TMenuItem;
    Pesquisar1: TMenuItem;
    N3: TMenuItem;
    Imprimir1: TMenuItem;
    procedure FormKeyPress(Sender: TObject; var Key: Char);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure FormShow(Sender: TObject);
    procedure actInserirExecute(Sender: TObject);
    procedure actEditarExecute(Sender: TObject);
    procedure actExcluirExecute(Sender: TObject);
    procedure actSalvarExecute(Sender: TObject);
    procedure actCancelarExecute(Sender: TObject);
    procedure actImprimirExecute(Sender: TObject);
    procedure actFecharExecute(Sender: TObject);
    procedure actInserirUpdate(Sender: TObject);
    procedure actEditarUpdate(Sender: TObject);
    procedure actExcluirUpdate(Sender: TObject);
    procedure actSalvarUpdate(Sender: TObject);
    procedure actCancelarUpdate(Sender: TObject);
    procedure actImprimirUpdate(Sender: TObject);
    procedure actPesquisarExecute(Sender: TObject);
    procedure dbgDadosDrawColumnCell(Sender: TObject; const Rect: TRect;
      DataCol: Integer; Column: TColumn; State: TGridDrawState);
    procedure actPrimeiroExecute(Sender: TObject);
    procedure actAnteriorExecute(Sender: TObject);
    procedure actProximoExecute(Sender: TObject);
    procedure actUltimoExecute(Sender: TObject);
    procedure actSairExecute(Sender: TObject);
  private
    { Private declarations }
    cModo : Char;
    procedure LimparTudo;
  public
    { Public declarations }
  end;

var
  frmCadastroBasico: TfrmCadastroBasico;

implementation

{$R *.dfm}

uses uDmDados, uFuncoes, Winapi.Windows, System.SysUtils, Winapi.Messages,
  Vcl.Dialogs;

procedure TfrmCadastroBasico.actCancelarExecute(Sender: TObject);
begin
  dsPrincipal.DataSet.Cancel;
  LimparTudo;
end;

procedure TfrmCadastroBasico.actCancelarUpdate(Sender: TObject);
begin
  actCancelar.Enabled := actSalvar.Enabled;
end;

procedure TfrmCadastroBasico.actEditarExecute(Sender: TObject);
begin
  cModo := 'A';
  if PageControl1.ActivePage = tbsPesquisar then
  begin
    tbsCadastro.TabVisible  := true;
    tbsPesquisar.TabVisible := false;
    PageControl1.ActivePage := tbsCadastro;
  end;
  dsPrincipal.DataSet.Edit;
end;

procedure TfrmCadastroBasico.actEditarUpdate(Sender: TObject);
begin
  if not dsPrincipal.DataSet.IsEmpty then
    actEditar.Enabled := dsPrincipal.State in [dsBrowse];
end;

procedure TfrmCadastroBasico.actExcluirExecute(Sender: TObject);
begin
  if Application.MessageBox('Deseja realmente excluir o registro?','Pergunta',MB_YESNO+MB_ICONQUESTION) = mrYes then
  begin
    try
      dsPrincipal.DataSet.Delete;
      Application.MessageBox('Registro excluído com sucesso!','Informação',0+64);
      dsPrincipal.DataSet.Open;
    except on E : Exception do
      raise Exception.Create('Erro ao excluir registro: ' + E.Message);
    end;
  end;
end;

procedure TfrmCadastroBasico.actExcluirUpdate(Sender: TObject);
begin
  if not dsPrincipal.DataSet.IsEmpty then
    actExcluir.Enabled := dsPrincipal.State in [dsBrowse];
end;

procedure TfrmCadastroBasico.actFecharExecute(Sender: TObject);
begin
  Close;
end;

procedure TfrmCadastroBasico.actImprimirExecute(Sender: TObject);
begin
  showmessage('Em desenvolvimento...');
end;

procedure TfrmCadastroBasico.actImprimirUpdate(Sender: TObject);
begin
  if not dsPrincipal.DataSet.IsEmpty then
    actImprimir.Enabled := dsPrincipal.State in [dsBrowse];
end;

procedure TfrmCadastroBasico.actInserirExecute(Sender: TObject);
begin
  cModo := 'I';
  if PageControl1.ActivePage = tbsPesquisar then
  begin
    tbsCadastro.TabVisible  := true;
    tbsPesquisar.TabVisible := false;
    PageControl1.ActivePage := tbsCadastro;
  end;
  if not dsPrincipal.DataSet.Active then
    dsPrincipal.DataSet.Open;
  dsPrincipal.DataSet.Insert;
end;

procedure TfrmCadastroBasico.actInserirUpdate(Sender: TObject);
begin
  actInserir.Enabled := dsPrincipal.State in [dsBrowse,dsInactive];
end;

procedure TfrmCadastroBasico.actPesquisarExecute(Sender: TObject);
begin
  edtPesquisar.Clear;
end;

procedure TfrmCadastroBasico.actSalvarExecute(Sender: TObject);
begin
  try
    dsPrincipal.DataSet.Post;

    case cModo of
      'I' : Application.MessageBox('Registro inserido com sucesso!','Informação',MB_OK+MB_ICONINFORMATION);
      'A' : Application.MessageBox('Registro atualizado com sucesso!','Informação',MB_OK+MB_ICONINFORMATION);
    end;
    //Limpar os campos
    LimparTudo;
    dsPrincipal.DataSet.Open;
  except on E : Exception do
    raise Exception.Create('Erro ao salvar registro: '+E.Message);
  end;
end;

procedure TfrmCadastroBasico.actSalvarUpdate(Sender: TObject);
begin
  actSalvar.Enabled := dsPrincipal.State in [dsInsert,dsEdit];
end;

procedure TfrmCadastroBasico.actAnteriorExecute(Sender: TObject);
begin
  dsPrincipal.DataSet.Prior;
end;

procedure TfrmCadastroBasico.actPrimeiroExecute(Sender: TObject);
begin
  dsPrincipal.DataSet.First;
end;

procedure TfrmCadastroBasico.actProximoExecute(Sender: TObject);
begin
  dsPrincipal.DataSet.Next;
end;

procedure TfrmCadastroBasico.actSairExecute(Sender: TObject);
begin
  Close;
end;

procedure TfrmCadastroBasico.actUltimoExecute(Sender: TObject);
begin
  dsPrincipal.DataSet.Last;
end;

procedure TfrmCadastroBasico.dbgDadosDrawColumnCell(Sender: TObject;
  const Rect: TRect; DataCol: Integer; Column: TColumn; State: TGridDrawState);
begin
  ZebrarDBGrid(dsPrincipal,dbgDados,State,Rect,Column);
end;

procedure TfrmCadastroBasico.FormClose(Sender: TObject;
  var Action: TCloseAction);
begin
  dsPrincipal.DataSet.Cancel;
  dsPrincipal.DataSet.Close;
end;

procedure TfrmCadastroBasico.FormKeyPress(Sender: TObject; var Key: Char);
begin
  if key = #27 then
    Close;
  if key = #13 then
    Perform(WM_NEXTDLGCTL,0,0);
end;

procedure TfrmCadastroBasico.FormShow(Sender: TObject);
begin
  PageControl1.ActivePage := tbsPesquisar;
  tbsCadastro.TabVisible  := False;
end;

procedure TfrmCadastroBasico.LimparTudo;
var
  I: Integer;
begin
  for I := 0 to ComponentCount -1 do
  begin
    if Components[i] is TCustomEdit then
      TCustomEdit(Components[i]).Clear;
  end;

  if PageControl1.ActivePage = tbsCadastro then
  begin
    tbsCadastro.TabVisible  := false;
    tbsPesquisar.TabVisible := true;
    PageControl1.ActivePage := tbsPesquisar;
  end;
  edtPesquisar.SetFocus;
end;

end.
