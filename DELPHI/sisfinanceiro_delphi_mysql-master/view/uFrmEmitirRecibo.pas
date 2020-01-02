unit uFrmEmitirRecibo;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.ExtCtrls,
  Vcl.Buttons;

type
  TfrmEmitirRecibo = class(TForm)
    GroupBox1: TGroupBox;
    rdgTipo: TRadioGroup;
    edtNome: TEdit;
    Label1: TLabel;
    edtReferente: TEdit;
    edtObservacoes: TEdit;
    edtEmitente: TEdit;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    edtEndereco: TEdit;
    edtCidade: TEdit;
    Label5: TLabel;
    Label6: TLabel;
    edtCpfcnpj: TEdit;
    Label7: TLabel;
    edtDataEmissao: TEdit;
    Label8: TLabel;
    edtValor: TEdit;
    Label9: TLabel;
    btnFechar: TBitBtn;
    btnPesquisar: TBitBtn;
    btnCancelar: TBitBtn;
    btnSalvar: TBitBtn;
    btnNovo: TBitBtn;
    procedure btnFecharClick(Sender: TObject);
    procedure FormKeyPress(Sender: TObject; var Key: Char);
    procedure btnNovoClick(Sender: TObject);
    procedure btnSalvarClick(Sender: TObject);
    procedure btnCancelarClick(Sender: TObject);
    procedure btnPesquisarClick(Sender: TObject);
    procedure rdgTipoClick(Sender: TObject);
  private
    { Private declarations }
    procedure HabilitarBotoes;
    procedure Limpar;
  public
    { Public declarations }
  end;

var
  frmEmitirRecibo: TfrmEmitirRecibo;

implementation

{$R *.dfm}

uses uFuncoes, uDmDados, uFrmConsRecibos{, uDmRelatorios}, System.StrUtils;

procedure TfrmEmitirRecibo.btnCancelarClick(Sender: TObject);
begin
  Limpar;
end;

procedure TfrmEmitirRecibo.btnFecharClick(Sender: TObject);
begin
  Close;
end;

procedure TfrmEmitirRecibo.btnNovoClick(Sender: TObject);
begin
  GroupBox1.Enabled   := true;
  edtDataEmissao.Text := DateToStr(now);
  edtNome.SetFocus;
  btnNovo.Enabled := false;

  HabilitarBotoes;
end;

procedure TfrmEmitirRecibo.btnPesquisarClick(Sender: TObject);
begin
  CriarForm(TfrmConsRecibos,frmConsRecibos);
end;

procedure TfrmEmitirRecibo.btnSalvarClick(Sender: TObject);
begin
  //validar
  if edtNome.Text = '' then
  begin
    Application.MessageBox('Informe o nome.','Atenção',48);
    edtNome.SetFocus;
    Abort;
  end;
  if edtReferente.Text = '' then
  begin
    Application.MessageBox('Informe o referente.','Atenção',48);
    edtReferente.SetFocus;
    Abort;
  end;
  if edtEmitente.Text = '' then
  begin
    Application.MessageBox('Informe o emitente.','Atenção',48);
    edtEmitente.SetFocus;
    Abort;
  end;
  if edtDataEmissao.Text = '' then
  begin
    Application.MessageBox('Informe a data de emissão.','Atenção',48);
    edtDataEmissao.SetFocus;
    Abort;
  end;
  if (edtValor.Text = '') or (StringParaFloat(edtValor.Text) = 0) then
  begin
    Application.MessageBox('Informe o valor.','Atenção',48);
    edtValor.SetFocus;
    Abort;
  end;

  try
    DmDados.cdsRecibos.Open;
    DmDados.cdsRecibos.Insert;

    DmDados.cdsRecibosid.AsInteger           := GetId('id','recibos');
    DmDados.cdsRecibostipo_recibo.AsInteger  := rdgTipo.ItemIndex;
    DmDados.cdsRecibosdt_emissao.AsDateTime  := StrToDateTime(edtDataEmissao.Text);
    DmDados.cdsRecibosvlr_recibo.AsCurrency  := StringParaFloat(edtValor.Text);
    DmDados.cdsRecibosreferente.AsString     := edtReferente.Text;
    DmDados.cdsRecibosemitente.AsString      := edtEmitente.Text;
    DmDados.cdsRecibosnome.AsString          := edtNome.Text;
    DmDados.cdsRecibosdt_cadastro.AsDateTime := now;
    DmDados.cdsReciboshr_cadastro.AsDateTime := now;
    DmDados.cdsRecibosuser_cadastro.AsString := 'SISTEMA';

    if edtCidade.Text <> '' then
      DmDados.cdsReciboscidade.AsString := edtCidade.Text;

    if edtCpfcnpj.Text <> '' then
      DmDados.cdsReciboscpf_cnpj.AsString := edtCpfcnpj.Text;

    if edtEndereco.Text <> '' then
      DmDados.cdsRecibosendereco.AsString := edtEndereco.Text;

    if edtObservacoes.Text <> '' then
      DmDados.cdsRecibosobservacao.AsString := edtObservacoes.Text;

    DmDados.cdsRecibos.Post;
    DmDados.cdsRecibos.ApplyUpdates(0);


    {DmRelatorios := TDmRelatorios.Create(nil);
    try
      DmRelatorios.ImprimirRecibo(DmDados.cdsRecibosid.AsInteger,DmDados.cdsRecibostipo_recibo.AsInteger);
    finally
      FreeAndNil(DmRelatorios);
    end;}

    DmDados.cdsRecibos.Close;

    Application.MessageBox('Recibo gerado com sucesso!','Informação', 64);
    Limpar;
  except on E: Exception do
    raise Exception.Create('Erro ao gerar recibo: '+E.Message);
  end;
end;

procedure TfrmEmitirRecibo.FormKeyPress(Sender: TObject; var Key: Char);
begin
  EnterporTab(key,self);
  FechaFormEsc(key,self);
end;

procedure TfrmEmitirRecibo.HabilitarBotoes;
begin
  btnSalvar.Enabled    := not btnNovo.Enabled;
  btnCancelar.Enabled  := not btnNovo.Enabled;
  btnNovo.Enabled      := not btnSalvar.Enabled;
  btnPesquisar.Enabled := btnNovo.Enabled;
end;

procedure TfrmEmitirRecibo.Limpar;
var
  i: integer;
begin
  for I := 0 to ComponentCount -1 do
  begin
   if Components[i] is TCustomEdit then
     TCustomEdit(Components[I]).Clear;
  end;

  rdgTipo.ItemIndex := 0;
  GroupBox1.Enabled := false;
  btnNovo.Enabled := true;
  HabilitarBotoes;
end;

procedure TfrmEmitirRecibo.rdgTipoClick(Sender: TObject);
begin
  case rdgTipo.ItemIndex of
    0: Label1.Caption := 'Recebi (emos) de:';
    1: Label1.Caption := 'Pagei (emos) a:';
  end;
end;

end.
