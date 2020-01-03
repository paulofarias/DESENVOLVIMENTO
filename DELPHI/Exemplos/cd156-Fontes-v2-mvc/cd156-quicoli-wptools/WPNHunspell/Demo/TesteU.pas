unit TesteU;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, WPRTEDefs, WPCTRMemo, WPCTRRich,
  Vcl.StdCtrls, WPNHunspellU, WPRTEDefsConsts, WPUtil, Vcl.Menus, Vcl.ExtCtrls;


type
  TTesteF = class(TForm)
    WPRichText1: TWPRichText;
    Panel1: TPanel;
    btnAtivarCorrecao: TButton;
    Button1: TButton;
    Button2: TButton;
    PopupMenu1: TPopupMenu;
    este11: TMenuItem;
    este21: TMenuItem;
    itemCorrecao: TMenuItem;
    procedure btnAtivarCorrecaoClick(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  TesteF: TTesteF;

implementation

{$R *.dfm}

procedure TTesteF.btnAtivarCorrecaoClick(Sender: TObject);
begin
  ConfigureWPNHunspell(WPRichText1, itemCorrecao);
end;

procedure TTesteF.Button1Click(Sender: TObject);
begin
  UnconfigureWPNHunspell;
end;

procedure TTesteF.Button2Click(Sender: TObject);
begin
  DoSpellCheck;
end;

end.
