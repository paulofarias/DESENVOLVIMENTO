unit uFrmBaixarReceber;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.Buttons;

type
  TfrmBaixarReceber = class(TForm)
    GroupBox1: TGroupBox;
    Label2: TLabel;
    lblDocumento: TLabel;
    Label1: TLabel;
    lblParcela: TLabel;
    Label3: TLabel;
    lblVencimento: TLabel;
    lblVlrParcela: TLabel;
    Label5: TLabel;
    Label4: TLabel;
    lblVlrAbatido: TLabel;
    GroupBox2: TGroupBox;
    edtObservacao: TEdit;
    edtValor: TEdit;
    Label6: TLabel;
    Label7: TLabel;
    btnBaixar: TBitBtn;
    procedure FormKeyPress(Sender: TObject; var Key: Char);
    procedure FormShow(Sender: TObject);
    procedure btnBaixarClick(Sender: TObject);
  private
    fValorParcela : Currency;
    fValorAbatido : Currency;
    { Private declarations }
  public
    fId : Integer;
    { Public declarations }
  end;

var
  frmBaixarReceber: TfrmBaixarReceber;

implementation

uses
  Data.SqlExpr, uDmDados, uFuncoes;

{$R *.dfm}

procedure TfrmBaixarReceber.btnBaixarClick(Sender: TObject);
begin
  //validações
  if (edtValor.Text = '') or (StringParaFloat(edtValor.Text) = 0) then
  begin
    Application.MessageBox('Informe o valor a receber.','Atenção',48);
    edtValor.SetFocus;
    Abort;
  end;

  try
    DmDados.cdsContas_receber.Close;
    DmDados.cdsContas_receber.CommandText := 'select * from contas_receber where id = '+inttostr(fid);
    DmDados.cdsContas_receber.Open;
    DmDados.cdsContas_receber.Edit;
    DmDados.cdsContas_recebervlr_abatido.AsCurrency := DmDados.cdsContas_recebervlr_abatido.AsCurrency
                                                       + StringParaFloat(edtValor.Text);

    if DmDados.cdsContas_recebervlr_abatido.AsCurrency >=
       DmDados.cdsContas_recebervlr_parcela.AsCurrency then
    begin
      DmDados.cdsContas_receberstatus.AsString := 'B';
      DmDados.cdsContas_receberdt_pagamento.AsDateTime := date;
    end;

    DmDados.cdsContas_receber.Post;
    DmDados.cdsContas_receber.ApplyUpdates(0);
    DmDados.cdsContas_receber.Close;

    //Histórico
    DmDados.cdsReceber_detalhes.Close;
    DmDados.cdsReceber_detalhes.Open;
    DmDados.cdsReceber_detalhes.Insert;
    DmDados.cdsReceber_detalhesid.AsInteger         := GetId('ID','RECEBER_DETALHES');
    DmDados.cdsReceber_detalhesid_receber.AsInteger := fid;
    DmDados.cdsReceber_detalhesdetalhes.AsString    := edtObservacao.Text;
    DmDados.cdsReceber_detalhesvalor.AsCurrency     := StringParaFloat(edtValor.Text);
    DmDados.cdsReceber_detalhesdata.AsDateTime      := date;
    DmDados.cdsReceber_detalhesusuario.AsString     := 'SISTEMA';
    DmDados.cdsReceber_detalhes.Post;
    DmDados.cdsReceber_detalhes.ApplyUpdates(0);

    Application.MessageBox('Baixa efetuada com sucesso!','Informação',64);
    ModalResult := mrOk;
  except on E: Exception do
    begin
      DmDados.cdsContas_receber.CancelUpdates;
      DmDados.cdsReceber_detalhes.CancelUpdates;
      raise Exception.Create('Erro ao efetuar baixa: '+E.Message);
    end;
  end;
end;

procedure TfrmBaixarReceber.FormKeyPress(Sender: TObject; var Key: Char);
begin
  FechaFormEsc(key,self);
  EnterporTab(key,self);
end;

procedure TfrmBaixarReceber.FormShow(Sender: TObject);
begin
  if fId = 0 then
    raise Exception.Create('O fid não pode ser zero.');

  with TSQLQuery.Create(nil) do
  try
    SQLConnection := DmDados.SQLConnection;
    sql.Add('select id, documento, parcela, vlr_parcela, vlr_abatido, dt_vencimento');
    sql.Add('from contas_receber where id = :prm');
    Params[0].AsInteger := fId;
    Open;

    lblDocumento.Caption  := Fields[1].AsString;
    lblParcela.Caption    := Fields[2].AsString;
    lblVlrParcela.Caption := FormatFloat('R$ ,#0.00',Fields[3].AsCurrency);
    lblVlrAbatido.Caption := FormatFloat('R$ ,#0.00',Fields[4].AsCurrency);
    lblVencimento.Caption := Fields[5].AsString;

    fValorParcela := Fields[3].AsCurrency;
    fValorAbatido := Fields[4].AsCurrency;
  finally
    Close;
    Free;
  end;
end;

end.
