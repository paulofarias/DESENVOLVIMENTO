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
    pgcPageControl: TPageControl;
    tbsCadastro: TTabSheet;
    tbsPesquisar: TTabSheet;
    stbPrincipal: TStatusBar;
    aclPrincipal: TActionList;
    actInserir: TAction;
    actEditar: TAction;
    actExcluir: TAction;
    actSalvar: TAction;
    actCancelar: TAction;
    actPesquisar: TAction;
    actImprimir: TAction;
    actFechar: TAction;
    imlPrincipal: TImageList;
    actPrimeiro: TAction;
    actAnterior: TAction;
    actProximo: TAction;
    actUltimo: TAction;
    actAtualizar: TAction;
    ctbPrincipal: TControlBar;
    tbrMenuPrincipal: TToolBar;
    tbrPrincipal: TToolBar;
    tbnPrimeiro: TToolButton;
    tbnAnterior: TToolButton;
    tbnProximo: TToolButton;
    tbnUltimo: TToolButton;
    tbnSeparador1: TToolButton;
    tbnInserir: TToolButton;
    tbnExcluir: TToolButton;
    tbnEditar: TToolButton;
    tbnSalvar: TToolButton;
    tbnCancelar: TToolButton;
    tbnAtualizar: TToolButton;
    tbnSeparador2: TToolButton;
    tbnPesquisar: TToolButton;
    tbnSeparador3: TToolButton;
    tbnImprimir: TToolButton;
    tbnSeparador4: TToolButton;
    tbnFechar: TToolButton;
    mnuPrincipal: TMainMenu;
    mniArquivo: TMenuItem;
    Inserir1: TMenuItem;
    Editar1: TMenuItem;
    Excluir1: TMenuItem;
    N1: TMenuItem;
    Imprimir1: TMenuItem;
    Fechar1: TMenuItem;
    mniEditar: TMenuItem;
    Primeiro1: TMenuItem;
    Anterior1: TMenuItem;
    Prximo1: TMenuItem;
    ltimo1: TMenuItem;
    N2: TMenuItem;
    Salvar1: TMenuItem;
    Cancelar1: TMenuItem;
    actAtualizar1: TMenuItem;
    mniAjuda: TMenuItem;
    tbnMenuArquivo: TToolButton;
    tbnMenuEditar: TToolButton;
    tbnMenuAjuda: TToolButton;
    procedure FormKeyPress(Sender: TObject; var Key: Char);
    procedure FormShow(Sender: TObject);
    procedure actInserirExecute(Sender: TObject);
    procedure actEditarExecute(Sender: TObject);
    procedure actExcluirExecute(Sender: TObject);
    procedure actSalvarExecute(Sender: TObject);
    procedure actCancelarExecute(Sender: TObject);
    procedure actImprimirExecute(Sender: TObject);
    procedure actInserirUpdate(Sender: TObject);
    procedure actEditarUpdate(Sender: TObject);
    procedure actExcluirUpdate(Sender: TObject);
    procedure actSalvarUpdate(Sender: TObject);
    procedure actCancelarUpdate(Sender: TObject);
    procedure actImprimirUpdate(Sender: TObject);
    {procedure dbgDadosDrawColumnCell(Sender: TObject; const Rect: TRect;
      DataCol: Integer; Column: TColumn; State: TGridDrawState);}
    procedure actPrimeiroExecute(Sender: TObject);
    procedure actAnteriorExecute(Sender: TObject);
    procedure actProximoExecute(Sender: TObject);
    procedure actUltimoExecute(Sender: TObject);
    procedure actPrimeiroUpdate(Sender: TObject);
    procedure actAnteriorUpdate(Sender: TObject);
    procedure actProximoUpdate(Sender: TObject);
    procedure actUltimoUpdate(Sender: TObject);
    procedure actAtualizarExecute(Sender: TObject);
    procedure actAtualizarUpdate(Sender: TObject);
    procedure actPesquisarExecute(Sender: TObject);
    procedure actPesquisarUpdate(Sender: TObject);
    procedure actFecharExecute(Sender: TObject);
  private
    { Private declarations }
    cModo : Char;
    procedure LimparTudo;
  public
    { Public declarations }
    property Modo: Char read cModo;
  end;

var
  frmCadastroBasico: TfrmCadastroBasico;

implementation

{$R *.dfm}

uses
  uFuncoes, Winapi.Windows, System.SysUtils, Winapi.Messages, Vcl.Dialogs;

procedure TfrmCadastroBasico.actPrimeiroExecute(Sender: TObject);
begin
  dsPrincipal.DataSet.First;
end;

procedure TfrmCadastroBasico.actPrimeiroUpdate(Sender: TObject);
begin
  if Assigned(dsPrincipal.DataSet) then
    TAction(Sender).Enabled := not dsPrincipal.DataSet.Bof
  else
    TAction(Sender).Enabled := False;
end;

procedure TfrmCadastroBasico.actAnteriorExecute(Sender: TObject);
begin
  dsPrincipal.DataSet.Prior;
end;

procedure TfrmCadastroBasico.actAnteriorUpdate(Sender: TObject);
begin
  if Assigned(dsPrincipal.DataSet) then
    TAction(Sender).Enabled := not dsPrincipal.DataSet.Bof
  else
    TAction(Sender).Enabled := False;
end;

procedure TfrmCadastroBasico.actProximoExecute(Sender: TObject);
begin
  dsPrincipal.DataSet.Next;
end;

procedure TfrmCadastroBasico.actProximoUpdate(Sender: TObject);
begin
  if Assigned(dsPrincipal.DataSet) then
    TAction(Sender).Enabled := not dsPrincipal.DataSet.Eof
  else
    TAction(Sender).Enabled := False;
end;

procedure TfrmCadastroBasico.actUltimoExecute(Sender: TObject);
begin
  dsPrincipal.DataSet.Last;
end;

procedure TfrmCadastroBasico.actUltimoUpdate(Sender: TObject);
begin
  if Assigned(dsPrincipal.DataSet) then
    TAction(Sender).Enabled := not dsPrincipal.DataSet.Eof
  else
    TAction(Sender).Enabled := False;
end;

procedure TfrmCadastroBasico.actInserirExecute(Sender: TObject);
begin
  cModo := 'I';
  if pgcPageControl.ActivePage = tbsPesquisar then
  begin
    tbsCadastro.TabVisible  := true;
    tbsPesquisar.TabVisible := false;
    pgcPageControl.ActivePage := tbsCadastro;
  end;
  if not dsPrincipal.DataSet.Active then
    dsPrincipal.DataSet.Open;
  dsPrincipal.DataSet.Insert;
end;

procedure TfrmCadastroBasico.actInserirUpdate(Sender: TObject);
begin
  if Assigned(dsPrincipal.DataSet) then
    TAction(Sender).Enabled := dsPrincipal.State in [dsBrowse, dsInactive]
  else
    TAction(Sender).Enabled := False;
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
  if Assigned(dsPrincipal.DataSet) then
  begin
    if not dsPrincipal.DataSet.IsEmpty then
      TAction(Sender).Enabled := dsPrincipal.State in [dsBrowse];
  end
  else
    TAction(Sender).Enabled := False;
end;

procedure TfrmCadastroBasico.actFecharExecute(Sender: TObject);
begin
  if pgcPageControl.ActivePage = tbsPesquisar then
  begin
    Close;
  end
  else
  if pgcPageControl.ActivePage = tbsCadastro then
  begin
    tbsPesquisar.TabVisible := True;
    pgcPageControl.ActivePage := tbsPesquisar;
    tbsCadastro.TabVisible := False;
  end;
end;

procedure TfrmCadastroBasico.actEditarExecute(Sender: TObject);
begin
  cModo := 'A';
  if pgcPageControl.ActivePage = tbsPesquisar then
  begin
    tbsCadastro.TabVisible  := true;
    tbsPesquisar.TabVisible := false;
    pgcPageControl.ActivePage := tbsCadastro;
  end;
  dsPrincipal.DataSet.Edit;
end;

procedure TfrmCadastroBasico.actEditarUpdate(Sender: TObject);
begin
  if Assigned(dsPrincipal.DataSet) then
  begin
    if not dsPrincipal.DataSet.IsEmpty then
      TAction(Sender).Enabled := dsPrincipal.State in [dsBrowse]
  end
  else
    TAction(Sender).Enabled := False;
end;

procedure TfrmCadastroBasico.actSalvarExecute(Sender: TObject);
begin
  try
    dsPrincipal.DataSet.Post;
    case cModo of
      'I' : Application.MessageBox('Registro inserido com sucesso!','Informação',MB_OK+MB_ICONINFORMATION);
      'A' : Application.MessageBox('Registro atualizado com sucesso!','Informação',MB_OK+MB_ICONINFORMATION);
    end;
  except on E : Exception do
    raise Exception.Create('Erro ao salvar registro: '+E.Message);
  end;
end;

procedure TfrmCadastroBasico.actSalvarUpdate(Sender: TObject);
begin
  if Assigned(dsPrincipal.DataSet) then
    TAction(Sender).Enabled := dsPrincipal.State in [dsInsert,dsEdit]
  else
    TAction(Sender).Enabled := False;
end;

procedure TfrmCadastroBasico.actCancelarExecute(Sender: TObject);
begin
  if dsPrincipal.State in dsEditModes then
    dsPrincipal.DataSet.Cancel;
end;

procedure TfrmCadastroBasico.actCancelarUpdate(Sender: TObject);
begin
  {if Assigned(dsPrincipal.DataSet) then
    TAction(Sender).Enabled := dsPrincipal.State in dsEditModes;}
  TAction(Sender).Enabled := True;
end;

procedure TfrmCadastroBasico.actAtualizarExecute(Sender: TObject);
begin
  dsPrincipal.DataSet.Refresh;
end;

procedure TfrmCadastroBasico.actAtualizarUpdate(Sender: TObject);
begin
  TAction(Sender).Enabled := True;
end;

procedure TfrmCadastroBasico.actPesquisarExecute(Sender: TObject);
begin
  //showMessage('Em Desenvolvimento');
end;

procedure TfrmCadastroBasico.actPesquisarUpdate(Sender: TObject);
begin
  if Assigned(dsPrincipal.DataSet) then
    TAction(Sender).Enabled:= not (dsPrincipal.State in dsEditModes)
  else
    TAction(Sender).Enabled := False;
end;

procedure TfrmCadastroBasico.actImprimirExecute(Sender: TObject);
begin
  showmessage('Em desenvolvimento...');
end;

procedure TfrmCadastroBasico.actImprimirUpdate(Sender: TObject);
begin
  TAction(Sender).Enabled := False;
end;

{procedure TfrmCadastroBasico.dbgDadosDrawColumnCell(Sender: TObject;
  const Rect: TRect; DataCol: Integer; Column: TColumn; State: TGridDrawState);
begin
  ZebrarDBGrid(dsPrincipal,dbgDados,State,Rect,Column);
end;}

procedure TfrmCadastroBasico.FormKeyPress(Sender: TObject; var Key: Char);
begin
  if key = #27 then
    Close;
  if key = #13 then
    Perform(WM_NEXTDLGCTL,0,0);
end;

procedure TfrmCadastroBasico.FormShow(Sender: TObject);
begin
  pgcPageControl.ActivePage := tbsPesquisar;
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

  if pgcPageControl.ActivePage = tbsCadastro then
  begin
    tbsCadastro.TabVisible  := false;
    tbsPesquisar.TabVisible := true;
    pgcPageControl.ActivePage := tbsPesquisar;
  end;
end;

end.
