unit uFrmConsPagar;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants,
  System.Classes, Vcl.Graphics, Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Data.DB,
  Datasnap.DBClient, Vcl.Grids, Vcl.DBGrids, Vcl.StdCtrls, Vcl.ExtCtrls,
  Vcl.Buttons, Vcl.ComCtrls, Vcl.Menus;

type
  TfrmConsPagar = class(TForm)
    cdsConsulta: TClientDataSet;
    dsConsulta: TDataSource;
    cdsConsultaid: TIntegerField;
    cdsConsultanumero_doc: TStringField;
    cdsConsultadescricao: TStringField;
    cdsConsultaparcela: TIntegerField;
    cdsConsultavlr_parcela: TFMTBCDField;
    cdsConsultavlr_compra: TFMTBCDField;
    cdsConsultavlr_abatido: TFMTBCDField;
    cdsConsultadt_compra: TDateField;
    cdsConsultadt_cadastro: TDateField;
    cdsConsultadt_vencimento: TDateField;
    cdsConsultadt_pagamento: TDateField;
    cdsConsultastatus: TStringField;
    GroupBox1: TGroupBox;
    rdgPeriodo: TRadioGroup;
    GroupBox2: TGroupBox;
    edtDataIni: TEdit;
    edtDataFim: TEdit;
    Label2: TLabel;
    Label3: TLabel;
    GroupBox3: TGroupBox;
    edtDocumento: TEdit;
    edtParcela: TEdit;
    Label1: TLabel;
    Label4: TLabel;
    rdgStatus: TRadioGroup;
    SpeedButton1: TSpeedButton;
    GroupBox4: TGroupBox;
    StatusBar1: TStatusBar;
    DBGrid1: TDBGrid;
    BitBtn1: TBitBtn;
    BitBtn2: TBitBtn;
    Label5: TLabel;
    cdsConsultaTotal: TAggregateField;
    btnBaixar: TBitBtn;
    PopupMenu1: TPopupMenu;
    Visualizarhistrico1: TMenuItem;
    procedure BitBtn2Click(Sender: TObject);
    procedure FormKeyPress(Sender: TObject; var Key: Char);
    procedure FormKeyDown(Sender: TObject; var Key: Word; Shift: TShiftState);
    procedure SpeedButton1Click(Sender: TObject);
    procedure BitBtn1Click(Sender: TObject);
    procedure DBGrid1DrawColumnCell(Sender: TObject; const Rect: TRect;
      DataCol: Integer; Column: TColumn; State: TGridDrawState);
    procedure btnBaixarClick(Sender: TObject);
    procedure Visualizarhistrico1Click(Sender: TObject);
  private
    procedure Pesquisar;
    { Private declarations }
  public
    { Public declarations }
  end;

var
  frmConsPagar: TfrmConsPagar;

implementation

{$R *.dfm}

uses uDmDados, uFuncoes, uFrmBaixarPagar, uFrmDetalhesPagar;

procedure TfrmConsPagar.BitBtn1Click(Sender: TObject);
begin
  rdgPeriodo.ItemIndex := -1;
  rdgStatus.ItemIndex  := -1;
  edtDataIni.Clear;
  edtDataFim.Clear;
  edtDocumento.Clear;
  edtParcela.Clear;
  cdsConsulta.Close;
  StatusBar1.Panels[0].Text := '';
end;

procedure TfrmConsPagar.BitBtn2Click(Sender: TObject);
begin
  Close;
end;

procedure TfrmConsPagar.btnBaixarClick(Sender: TObject);
begin
  if (cdsConsultastatus.AsString = 'B') then
  begin
    Application.MessageBox(
      'N�o � poss�vel baixar um documento baixado.',
      'Aten��O',
      MB_OK+MB_ICONWARNING
    );
    abort;
  end;

  if (cdsConsultastatus.AsString = 'C') then
  begin
    Application.MessageBox(
      'N�o � poss�vel baixar um documento cancelado.',
      'Aten��O',
      MB_OK+MB_ICONWARNING
    );
    abort;
  end;

  frmBaixarPagar := TfrmBaixarPagar.Create(nil);
  try
    frmBaixarPagar.fId := cdsConsultaid.AsInteger;
    frmBaixarPagar.ShowModal;
    if frmBaixarPagar.ModalResult = mrOk then
      cdsConsulta.Refresh;
  finally
    FreeAndNil(frmBaixarPagar);
  end;
end;

procedure TfrmConsPagar.DBGrid1DrawColumnCell(Sender: TObject;
  const Rect: TRect; DataCol: Integer; Column: TColumn; State: TGridDrawState);
begin
  ZebrarDBGrid(dsConsulta,DBGrid1,State,Rect,Column);
end;

procedure TfrmConsPagar.FormKeyDown(Sender: TObject; var Key: Word;
  Shift: TShiftState);
begin
  if key = Vk_f2 then
    Pesquisar;
end;

procedure TfrmConsPagar.FormKeyPress(Sender: TObject; var Key: Char);
begin
  EnterporTab(key,self);
  FechaFormEsc(key,self);
end;

procedure TfrmConsPagar.Pesquisar;
var
  Sql : TStringList;
begin
  //Valida��o
  if rdgPeriodo.ItemIndex > -1 then
  begin
    if (edtDataIni.Text = '') or (edtDataFim.Text = '') then
    begin
      Application.MessageBox('Informe a data.','Aten��o', MB_OK+MB_ICONWARNING);
      edtDataIni.SetFocus;
      Abort;
    end;
  end;

  Sql := TStringList.Create;
  try
    sql.Add('select * from contas_pagar');
    sql.Add('where id > 0');

    //Pesquisar por per�odo
    if (rdgPeriodo.ItemIndex > -1) and (edtDataIni.Text <> '') and (edtDataFim.Text <> '') then
    begin
      case rdgPeriodo.ItemIndex of
        0 : sql.Add('and dt_compra between '+QuotedStr(ReveterData(edtDataIni.Text))+' and '+QuotedStr(ReveterData(edtDataFim.Text)));
        1 : sql.Add('and dt_vencimento between '+QuotedStr(ReveterData(edtDataIni.Text))+' and '+QuotedStr(ReveterData(edtDataFim.Text)));
        2 : sql.Add('and dt_pagamento between '+QuotedStr(ReveterData(edtDataIni.Text))+' and '+QuotedStr(ReveterData(edtDataFim.Text)));
      end;
    end;

    //Pesquisar por documento
    if edtDocumento.Text <> '' then
      sql.Add('and numero_doc = '+QuotedStr(trim(edtDocumento.Text)));

    //Pesquisar por parcela
    if edtParcela.Text <> '' then
      sql.Add('and parcela = '+edtParcela.Text);

    //Pesquisar por status
    if rdgStatus.ItemIndex > -1 then
    begin
      case rdgStatus.ItemIndex of
        0 : sql.Add('and status = ''A''');
        1 : sql.Add('and status = ''C''');
        2 : sql.Add('and status = ''B''');
      end;
    end;

    try
      cdsConsulta.Close;
      cdsConsulta.CommandText := Sql.Text;
      cdsConsulta.Open;

      if cdsConsulta.IsEmpty then
        Application.MessageBox('Nenhum registro encontrado.','Aten��o',MB_OK+MB_ICONWARNING);

      StatusBar1.Panels[0].Text := 'Registro(s) encontrado(s): '+inttostr(cdsConsulta.RecordCount);
      StatusBar1.Panels[1].Text := 'Total a pagar: '+FormatFloat('R$ #,0.00',cdsConsultaTotal.AsVariant);
      btnBaixar.Enabled := not cdsConsulta.IsEmpty;
    except on E: Exception do
      raise Exception.Create('Erro ao consultar contas a pagar: '+E.Message);
    end;
  finally
    FreeAndNil(Sql);
  end;
end;

procedure TfrmConsPagar.SpeedButton1Click(Sender: TObject);
begin
  Pesquisar;
end;

procedure TfrmConsPagar.Visualizarhistrico1Click(Sender: TObject);
begin
  if cdsConsulta.IsEmpty then
  begin
    Application.MessageBox('Nenhum documento localizado!','Aten��o',48);
    Abort;
  end;

  frmDetalhesPagar := TfrmDetalhesPagar.Create(nil);
  try
    frmDetalhesPagar.fId := cdsConsultaid.AsInteger;
    frmDetalhesPagar.ShowModal;
  finally
    FreeAndNil(frmDetalhesPagar);
  end;
end;

end.
