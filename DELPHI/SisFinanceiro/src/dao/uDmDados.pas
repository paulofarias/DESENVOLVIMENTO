unit uDmDados;

interface

uses
  System.SysUtils, System.Classes, Data.DB, Data.SqlExpr, Data.DBXMySQL,
  Data.FMTBcd, Datasnap.Provider, Datasnap.DBClient, 
  Datasnap.Win.TConnect, FireDAC.Stan.Intf, FireDAC.Stan.Option,
  FireDAC.Stan.Error, FireDAC.UI.Intf, FireDAC.Phys.Intf, FireDAC.Stan.Def,
  FireDAC.Stan.Pool, FireDAC.Stan.Async, FireDAC.Phys, FireDAC.Phys.MySQL,
  FireDAC.Phys.MySQLDef, FireDAC.VCLUI.Wait, FireDAC.Comp.Client,
  FireDAC.Stan.Param, FireDAC.DatS, FireDAC.DApt.Intf, FireDAC.DApt,
  FireDAC.Comp.DataSet;

type
  TDmDados = class(TDataModule)
    SQLConnection: TSQLConnection;
    cdsCaixa: TClientDataSet;
    dspCaixa: TDataSetProvider;
    cdsContas_pagar: TClientDataSet;
    dspContas_pagar: TDataSetProvider;
    cdsContas_receber: TClientDataSet;
    dspContas_receber: TDataSetProvider;
    cdsUsuarios: TClientDataSet;
    dspUsuarios: TDataSetProvider;
    sdsCaixa: TSQLDataSet;
    sdsContas_pagar: TSQLDataSet;
    sdsContas_receber: TSQLDataSet;
    sdsUsuarios: TSQLDataSet;
    cdsCaixaid: TIntegerField;
    cdsCaixanumero_doc: TStringField;
    cdsCaixadescricao: TStringField;
    cdsCaixavalor: TFMTBCDField;
    cdsCaixatipo: TStringField;
    cdsCaixadt_cadastro: TDateField;
    cdsContas_pagarid: TIntegerField;
    cdsContas_pagarnumero_doc: TStringField;
    cdsContas_pagardescricao: TStringField;
    cdsContas_pagarparcela: TIntegerField;
    cdsContas_pagarvlr_parcela: TFMTBCDField;
    cdsContas_pagarvlr_compra: TFMTBCDField;
    cdsContas_pagarvlr_abatido: TFMTBCDField;
    cdsContas_pagardt_compra: TDateField;
    cdsContas_pagardt_cadastro: TDateField;
    cdsContas_pagardt_vencimento: TDateField;
    cdsContas_pagardt_pagamento: TDateField;
    cdsContas_pagarstatus: TStringField;
    cdsContas_receberid: TIntegerField;
    cdsContas_receberdocumento: TStringField;
    cdsContas_receberdescricao: TStringField;
    cdsContas_receberparcela: TIntegerField;
    cdsContas_recebervlr_parcela: TFMTBCDField;
    cdsContas_recebervlr_compra: TFMTBCDField;
    cdsContas_recebervlr_abatido: TFMTBCDField;
    cdsContas_receberdt_compra: TDateField;
    cdsContas_receberdt_vencimento: TDateField;
    cdsContas_receberdt_cadastro: TDateField;
    cdsContas_receberstatus: TStringField;
    cdsContas_receberdt_pagamento: TDateField;
    cdsUsuariosnome: TStringField;
    cdsUsuarioslogin: TStringField;
    cdsUsuariossenha: TStringField;
    cdsUsuariosstatus: TStringField;
    cdsUsuariosdt_cadastro: TDateField;
    cdsUsuariosid: TIntegerField;
    sqlConsultas: TSQLQuery;
    dspConsultas: TDataSetProvider;
    cdsReceber_detalhes: TClientDataSet;
    dspReceber_detalhes: TDataSetProvider;
    sdsReceber_detalhes: TSQLDataSet;
    cdsPagar_detalhes: TClientDataSet;
    dspPagar_detalhes: TDataSetProvider;
    sdsPagar_detalhes: TSQLDataSet;
    cdsReceber_detalhesid: TIntegerField;
    cdsReceber_detalhesid_receber: TIntegerField;
    cdsReceber_detalhesdetalhes: TStringField;
    cdsReceber_detalhesvalor: TFMTBCDField;
    cdsReceber_detalhesdata: TDateField;
    cdsReceber_detalhesusuario: TStringField;
    cdsPagar_detalhesid: TIntegerField;
    cdsPagar_detalhesid_pagar: TIntegerField;
    cdsPagar_detalhesdetalhes: TStringField;
    cdsPagar_detalhesvalor: TFMTBCDField;
    cdsPagar_detalhesdata: TDateField;
    cdsPagar_detalhesusuario: TStringField;
    sdsRecibos: TSQLDataSet;
    dspRecibos: TDataSetProvider;
    cdsRecibos: TClientDataSet;
    cdsRecibosid: TIntegerField;
    cdsRecibostipo_recibo: TIntegerField;
    cdsRecibosdt_emissao: TDateField;
    cdsRecibosnome: TStringField;
    cdsRecibosvlr_recibo: TFMTBCDField;
    cdsRecibosreferente: TStringField;
    cdsRecibosobservacao: TStringField;
    cdsRecibosemitente: TStringField;
    cdsRecibosendereco: TStringField;
    cdsReciboscpf_cnpj: TStringField;
    cdsReciboscidade: TStringField;
    cdsRecibosdt_cadastro: TDateField;
    cdsReciboshr_cadastro: TTimeField;
    cdsRecibosuser_cadastro: TStringField;
    FDConnection: TFDConnection;
    fdqCaixa: TFDQuery;
    fdqCaixaid: TFDAutoIncField;
    fdqCaixanumero_doc: TStringField;
    fdqCaixadescricao: TStringField;
    fdqCaixavalor: TFMTBCDField;
    fdqCaixatipo: TStringField;
    fdqCaixadt_cadastro: TDateField;
    fdqContas_pagar: TFDQuery;
    fdqContas_pagarid: TFDAutoIncField;
    fdqContas_pagarnumero_doc: TStringField;
    fdqContas_pagardescricao: TStringField;
    fdqContas_pagarparcela: TIntegerField;
    fdqContas_pagarvlr_parcela: TFMTBCDField;
    fdqContas_pagarvlr_compra: TFMTBCDField;
    fdqContas_pagarvlr_abatido: TFMTBCDField;
    fdqContas_pagardt_compra: TDateField;
    fdqContas_pagardt_cadastro: TDateField;
    fdqContas_pagardt_vencimento: TDateField;
    fdqContas_pagardt_pagamento: TDateField;
    fdqContas_pagarstatus: TStringField;
    fdqContas_receber: TFDQuery;
    fdqUsuarios: TFDQuery;
    fdqReceber_detalhes: TFDQuery;
    fdqUsuariosid: TFDAutoIncField;
    fdqUsuariosnome: TStringField;
    fdqUsuarioslogin: TStringField;
    fdqUsuariossenha: TStringField;
    fdqUsuariosstatus: TStringField;
    fdqUsuariosdt_cadastro: TDateField;
    fdqContas_receberid: TFDAutoIncField;
    fdqContas_receberdocumento: TStringField;
    fdqContas_receberdescricao: TStringField;
    fdqContas_receberparcela: TIntegerField;
    fdqContas_recebervlr_parcela: TFMTBCDField;
    fdqContas_recebervlr_compra: TFMTBCDField;
    fdqContas_recebervlr_abatido: TFMTBCDField;
    fdqContas_receberdt_compra: TDateField;
    fdqContas_receberdt_vencimento: TDateField;
    fdqContas_receberdt_cadastro: TDateField;
    fdqContas_receberstatus: TStringField;
    fdqContas_receberdt_pagamento: TDateField;
    fdqReceber_detalhesid: TFDAutoIncField;
    fdqReceber_detalhesid_receber: TIntegerField;
    fdqReceber_detalhesdetalhes: TStringField;
    fdqReceber_detalhesvalor: TFMTBCDField;
    fdqReceber_detalhesdata: TDateField;
    fdqReceber_detalhesusuario: TStringField;
    fdqPagar_Detalhes: TFDQuery;
    fdqPagar_Detalhesid: TFDAutoIncField;
    fdqPagar_Detalhesid_pagar: TIntegerField;
    fdqPagar_Detalhesdetalhes: TStringField;
    fdqPagar_Detalhesvalor: TFMTBCDField;
    fdqPagar_Detalhesdata: TDateField;
    fdqPagar_Detalhesusuario: TStringField;
    fdqRecibos: TFDQuery;
    fdqConsultas: TFDQuery;
    cdsUsuariosCALC_Status: TStringField;
    procedure FDConnectionError(ASender, AInitiator: TObject;
      var AException: Exception);
    procedure DataModuleCreate(Sender: TObject);
    procedure cdsUsuariosCalcFields(DataSet: TDataSet);
  private
    { Private declarations }
    function getParametrosConexao: TFDConnectionDefParams;
  public
    { Public declarations }
    property ParametrosConexao: TFDConnectionDefParams read getParametrosConexao;
  end;

var
  DmDados: TDmDados;

implementation

uses
  Vcl.Dialogs;
{%CLASSGROUP 'Vcl.Controls.TControl'}

{$R *.dfm}

{ TDmDados }

procedure TDmDados.cdsUsuariosCalcFields(DataSet: TDataSet);
begin
  if cdsUsuariosstatus.AsString = 'A' then
    cdsUsuariosCALC_Status.AsString := 'Ativo'
  else if cdsUsuariosstatus.AsString = 'A' then
    cdsUsuariosCALC_Status.AsString := 'Inativo'
end;

procedure TDmDados.DataModuleCreate(Sender: TObject);
begin
  //FDConnection.Params.
end;

procedure TDmDados.FDConnectionError(ASender, AInitiator: TObject;
  var AException: Exception);
begin
  //MessageDlg(AException.Message, mtError, [mbOk], 0);
  showMessage(AException.Message);
end;

function TDmDados.getParametrosConexao: TFDConnectionDefParams;
begin
  Result := FDConnection.Params;
end;



end.
