unit uFrmBaixarPagar;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.Buttons,
  Data.FMTBcd, Data.DB, Data.SqlExpr;

type
  TfrmBaixarPagar = class(TForm)
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
    Label6: TLabel;
    Label7: TLabel;
    edtObservacao: TEdit;
    edtValor: TEdit;
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
  frmBaixarPagar: TfrmBaixarPagar;

implementation

{$R *.dfm}

uses uDmDados, uFuncoes;

procedure TfrmBaixarPagar.btnBaixarClick(Sender: TObject);
begin
  //validações
  if (edtValor.Text = '') or (StringParaFloat(edtValor.Text) = 0) then
  begin
    Application.MessageBox('Informe o valor a receber.','Atenção',48);
    edtValor.SetFocus;
    Abort;
  end;

  try
    DmDados.cdsContas_pagar.Close;
    DmDados.cdsContas_pagar.CommandText := 'select * from contas_pagar where id = '+inttostr(fid);
    DmDados.cdsContas_pagar.Open;
    DmDados.cdsContas_pagar.Edit;
    DmDados.cdsContas_pagarvlr_abatido.AsCurrency := DmDados.cdsContas_pagarvlr_abatido.AsCurrency
                                                       + StringParaFloat(edtValor.Text);

    if DmDados.cdsContas_pagarvlr_abatido.AsCurrency >=
       DmDados.cdsContas_pagarvlr_parcela.AsCurrency then
    begin
      DmDados.cdsContas_pagarstatus.AsString := 'B';
      DmDados.cdsContas_pagardt_pagamento.AsDateTime := date;
    end;

    DmDados.cdsContas_pagar.Post;
    DmDados.cdsContas_pagar.ApplyUpdates(0);
    DmDados.cdsContas_pagar.Close;

    //Histórico
    DmDados.cdsPagar_detalhes.Close;
    DmDados.cdsPagar_detalhes.Open;
    DmDados.cdsPagar_detalhes.Insert;
    DmDados.cdsPagar_detalhesid.AsInteger       := GetId('ID','PAGAR_DETALHES');
    DmDados.cdsPagar_detalhesid_pagar.AsInteger := fid;
    DmDados.cdsPagar_detalhesdetalhes.AsString  := edtObservacao.Text;
    DmDados.cdsPagar_detalhesvalor.AsCurrency   := StringParaFloat(edtValor.Text);
    DmDados.cdsPagar_detalhesdata.AsDateTime    := date;
    DmDados.cdsPagar_detalhesusuario.AsString   := 'SISTEMA';
    DmDados.cdsPagar_detalhes.Post;
    DmDados.cdsPagar_detalhes.ApplyUpdates(0);

    Application.MessageBox('Baixa efetuada com sucesso!','Informação',64);
    ModalResult := mrOk;
  except on E: Exception do
    begin
      DmDados.cdsContas_pagar.CancelUpdates;
      DmDados.cdsPagar_detalhes.CancelUpdates;
      raise Exception.Create('Erro ao efetuar baixa: '+E.Message);
    end;
  end;
end;

procedure TfrmBaixarPagar.FormKeyPress(Sender: TObject; var Key: Char);
begin
  FechaFormEsc(key,self);
  EnterporTab(key,self);
end;

procedure TfrmBaixarPagar.FormShow(Sender: TObject);
begin
  if fId = 0 then
    raise Exception.Create('O fid não pode ser zero.');

  with TSQLQuery.Create(nil) do
  try
    SQLConnection := DmDados.SQLConnection;
    sql.Add('select id, numero_doc, parcela, vlr_parcela, vlr_abatido, dt_vencimento');
    sql.Add('from contas_pagar where id = :prm');
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
