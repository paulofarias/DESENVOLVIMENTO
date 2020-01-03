// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sImgListEditor.pas' rev: 30.00 (Windows)

#ifndef SimglisteditorHPP
#define SimglisteditorHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <System.UITypes.hpp>
#include <sPanel.hpp>
#include <sSpeedButton.hpp>
#include <acAlphaImageList.hpp>
#include <sSkinProvider.hpp>
#include <sListView.hpp>
#include <sBitBtn.hpp>
#include <sButton.hpp>
#include <sEdit.hpp>
#include <Vcl.Menus.hpp>

//-- user supplied -----------------------------------------------------------

namespace Simglisteditor
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFormImgListEditor;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TFormImgListEditor : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Sbitbtn::TsBitBtn* sBitBtn5;
	Sbitbtn::TsBitBtn* sBitBtn6;
	Sbitbtn::TsBitBtn* sBitBtn7;
	Acalphaimagelist::TsAlphaImageList* ImageList1;
	Vcl::Extdlgs::TOpenPictureDialog* OpenPictureDialog1;
	Slistview::TsListView* ListView1;
	Sspeedbutton::TsSpeedButton* SpeedButton1;
	Sspeedbutton::TsSpeedButton* SpeedButton2;
	Sspeedbutton::TsSpeedButton* SpeedButton3;
	Sspeedbutton::TsSpeedButton* SpeedButton4;
	Sskinprovider::TsSkinProvider* sSkinProvider1;
	Vcl::Dialogs::TSaveDialog* SaveDialog1;
	Sspeedbutton::TsSpeedButton* SpeedButton5;
	Sspeedbutton::TsSpeedButton* SpeedButton6;
	Sedit::TsEdit* sEdit1;
	Vcl::Menus::TPopupMenu* PopupMenu1;
	Vcl::Menus::TMenuItem* S1;
	void __fastcall ListView1DragOver(System::TObject* Sender, System::TObject* Source, int X, int Y, System::Uitypes::TDragState State, bool &Accept);
	void __fastcall ListView1DragDrop(System::TObject* Sender, System::TObject* Source, int X, int Y);
	void __fastcall FormShow(System::TObject* Sender);
	void __fastcall ListView1Click(System::TObject* Sender);
	void __fastcall SpeedButton1Click(System::TObject* Sender);
	void __fastcall SpeedButton2Click(System::TObject* Sender);
	void __fastcall SpeedButton3Click(System::TObject* Sender);
	void __fastcall sBitBtn5Click(System::TObject* Sender);
	void __fastcall sBitBtn6Click(System::TObject* Sender);
	void __fastcall FormDestroy(System::TObject* Sender);
	void __fastcall ListView1KeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall sBitBtn7Click(System::TObject* Sender);
	void __fastcall SpeedButton4Click(System::TObject* Sender);
	void __fastcall SpeedButton5Click(System::TObject* Sender);
	void __fastcall CheckScroll(System::TObject* Sender);
	void __fastcall SpeedButton6Click(System::TObject* Sender);
	void __fastcall sEdit1Change(System::TObject* Sender);
	void __fastcall sColorBox1Change(System::TObject* Sender);
	void __fastcall FormCreate(System::TObject* Sender);
	void __fastcall FormResize(System::TObject* Sender);
	void __fastcall S1Click(System::TObject* Sender);
	
public:
	Acalphaimagelist::TsAlphaImageList* sImageList;
	virtual void __fastcall Loaded(void);
	MESSAGE void __fastcall WMDropFiles(Winapi::Messages::TWMDropFiles &Msg);
	void __fastcall ListViewRefresh(bool DoLock, int SelectedIndex);
	void __fastcall InitFromImgList(Acalphaimagelist::TsAlphaImageList* ImgList);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TFormImgListEditor(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TFormImgListEditor(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TFormImgListEditor(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFormImgListEditor(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TFormImgListEditor* FormImgListEditor;
extern DELPHI_PACKAGE Vcl::Extctrls::TTimer* ScrollTimer;
}	/* namespace Simglisteditor */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SIMGLISTEDITOR)
using namespace Simglisteditor;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SimglisteditorHPP
