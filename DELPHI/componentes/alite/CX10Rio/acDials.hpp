﻿// CodeGear C++Builder
// Copyright (c) 1995, 2017 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acDials.pas' rev: 33.00 (Windows)

#ifndef AcdialsHPP
#define AcdialsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Winapi.Windows.hpp>
#include <System.Types.hpp>
#include <acntTypes.hpp>
#include <sSkinProvider.hpp>
#include <acSBUtils.hpp>
#include <sCommonData.hpp>
#include <sSkinManager.hpp>
#include <sConst.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acdials
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TacSystemMenu;
class DELPHICLASS TacDialogWnd;
class DELPHICLASS TacProvider;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TacBorderStyle : unsigned char { acbsDialog, acbsSingle, acbsNone, acbsSizeable, acbsToolWindow, acbsSizeToolWin };

class PASCALIMPLEMENTATION TacSystemMenu : public Sskinprovider::TsCustomSysMenu
{
	typedef Sskinprovider::TsCustomSysMenu inherited;
	
public:
	TacDialogWnd* FOwner;
	Vcl::Menus::TMenuItem* ItemMove;
	Vcl::Menus::TMenuItem* ItemSize;
	Vcl::Menus::TMenuItem* ItemClose;
	Vcl::Menus::TMenuItem* ItemRestore;
	Vcl::Menus::TMenuItem* ItemMinimize;
	Vcl::Menus::TMenuItem* ItemMaximize;
	__fastcall virtual TacSystemMenu(System::Classes::TComponent* AOwner);
	bool __fastcall EnabledMove();
	bool __fastcall EnabledSize();
	HIDESBASE void __fastcall UpdateItems();
	void __fastcall RestoreClick(System::TObject* Sender);
	void __fastcall MoveClick(System::TObject* Sender);
	void __fastcall SizeClick(System::TObject* Sender);
	void __fastcall MinClick(System::TObject* Sender);
	void __fastcall MaxClick(System::TObject* Sender);
	void __fastcall CloseClick(System::TObject* Sender);
	virtual bool __fastcall EnabledMax();
	virtual bool __fastcall EnabledMin();
	virtual bool __fastcall EnabledRestore();
	virtual bool __fastcall VisibleClose();
	virtual bool __fastcall VisibleMax();
	virtual bool __fastcall VisibleMin();
	bool __fastcall VisibleSize();
public:
	/* TPopupMenu.Destroy */ inline __fastcall virtual ~TacSystemMenu() { }
	
};


class PASCALIMPLEMENTATION TacDialogWnd : public Acsbutils::TacScrollWnd
{
	typedef Acsbutils::TacScrollWnd inherited;
	
protected:
	int CurrentHT;
	int CXSizeFrame;
	int CXFixedFrame;
	int FCaptionSkinIndex;
	bool Initialized;
	bool FFormActive;
	bool AnimClosing;
	bool FWMPaintForbidden;
	Sskinprovider::TacMoveTimer* MoveTimer;
	Sskinprovider::TsCaptionButton ButtonMin;
	Sskinprovider::TsCaptionButton ButtonMax;
	Sskinprovider::TsCaptionButton ButtonHelp;
	Sskinprovider::TsCaptionButton ButtonClose;
	Vcl::Graphics::TBitmap* TitleBG;
	Vcl::Graphics::TBitmap* TempBmp;
	Vcl::Graphics::TBitmap* TitleGlyph;
	NativeInt dwStyle;
	NativeInt dwExStyle;
	System::Types::TRect LastClientRect;
	HICON TitleIcon;
	Vcl::Graphics::TFont* TitleFont;
	unsigned FormState;
	bool RgnChanged;
	TacBorderStyle BorderStyle;
	Sskinprovider::TacCtrlAdapter* Adapter;
	TacSystemMenu* SystemMenu;
	int TitleIndex;
	Acnttypes::TRects ArOR;
	TacProvider* Provider;
	Acnttypes::TacGlowForm* CoverForm;
	Sskinprovider::TacBorderForm* BorderForm;
	void __fastcall InitExBorders(const bool Active);
	bool __fastcall CanDrawNCArea();
	void __fastcall UpdateNCArea(bool Skinned);
	int __fastcall SizeFrame();
	int __fastcall FixedFrame();
	bool __fastcall AboveBorder(const Winapi::Messages::TWMNCHitTest &Message);
	void __fastcall Ac_WMPaint(Winapi::Messages::TWMPaint &Message);
	void __fastcall Ac_WMNCPaint(Winapi::Messages::TMessage &Message);
	void __fastcall Ac_WMNCHitTest(Winapi::Messages::TMessage &Message);
	void __fastcall Ac_WMNCLButtonDown(Winapi::Messages::TWMNCHitMessage &Message);
	void __fastcall Ac_WMLButtonUp(Winapi::Messages::TMessage &Message);
	void __fastcall Ac_WMNCActivate(Winapi::Messages::TMessage &Message);
	void __fastcall Ac_DrawStaticItem(Winapi::Messages::TWMDrawItem &Message);
	void __fastcall SendToAdapter(const Winapi::Messages::TMessage &Message);
	void __fastcall MakeTitleBG();
	void __fastcall PaintBorderIcons();
	void __fastcall PaintCaption(const HDC DC);
	void __fastcall PaintForm(HDC &DC);
	void __fastcall PrepareTitleGlyph();
	void __fastcall RepaintButton(int i);
	int __fastcall FramePadding();
	void __fastcall InitParams();
	void __fastcall UpdateIconsIndexes();
	void __fastcall KillAnimations();
	int __fastcall HTProcess(Winapi::Messages::TWMNCHitTest &Message);
	void __fastcall SetHotHT(int i, bool Repaint = true);
	void __fastcall SetPressedHT(int i);
	void __fastcall DropSysMenu(int x, int y);
	int __fastcall BorderHeight();
	int __fastcall ButtonHeight(const Sskinprovider::TsCaptionButton &Btn);
	System::Types::TPoint __fastcall CursorToPoint(int x, int y);
	bool __fastcall FormActive();
	int __fastcall HeaderHeight();
	System::Types::TRect __fastcall IconRect();
	int __fastcall SysButtonWidth(const Sskinprovider::TsCaptionButton &Btn);
	int __fastcall TitleBtnsWidth();
	bool __fastcall VisibleMax();
	bool __fastcall VisibleMin();
	bool __fastcall VisibleHelp();
	bool __fastcall VisibleClose();
	bool __fastcall VisibleRestore();
	bool __fastcall EnabledMax();
	bool __fastcall EnabledMin();
	bool __fastcall EnabledClose();
	bool __fastcall EnabledRestore();
	void __fastcall Uninit();
	void __fastcall PaintAll();
	System::Types::TRect __fastcall ShadowSize();
	int __fastcall CaptionHeight(bool CheckSkin = true);
	
public:
	int __fastcall OffsetX();
	int __fastcall OffsetY();
	virtual void __fastcall acWndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall AfterCreation();
	__fastcall virtual ~TacDialogWnd();
	bool __fastcall CanSkin();
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacDialogWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const Acsbutils::TacSkinParams &SkinParams, bool Repaint) : Acsbutils::TacScrollWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class PASCALIMPLEMENTATION TacProvider : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
protected:
	System::Classes::TList* acSkinnedCtrls;
	void __fastcall InitForm(Vcl::Forms::TCustomForm* Form);
	bool __fastcall InitSkin(HWND aHandle);
	bool __fastcall InitHwndControls(HWND hWnd);
	bool __fastcall AddControl(HWND aHwnd);
	
public:
	Sskinprovider::TsSkinProvider* sp;
	NativeUInt CtrlHandle;
	TacDialogWnd* ListSW;
	__fastcall virtual ~TacProvider();
	bool __fastcall PrintHwndControls(HWND hWnd, HDC DC);
public:
	/* TComponent.Create */ inline __fastcall virtual TacProvider(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	
};


typedef System::DynamicArray<Acsbutils::TacMnuWnd*> TacMnuArray;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int DlgLeft;
extern DELPHI_PACKAGE int DlgTop;
extern DELPHI_PACKAGE System::Classes::TList* acSupportedList;
extern DELPHI_PACKAGE HHOOK HookCallback;
extern DELPHI_PACKAGE TacMnuArray MnuArray;
extern DELPHI_PACKAGE void __fastcall StartBlendOnMovingDlg(TacDialogWnd* dw);
extern DELPHI_PACKAGE void __fastcall CleanSupportedList();
extern DELPHI_PACKAGE NativeInt __stdcall SkinHookCBT(int code, NativeUInt wParam, NativeInt lParam);
extern DELPHI_PACKAGE bool __fastcall AddSupportedForm(NativeUInt hwnd, Winapi::Windows::PCreateStructW cStruct = (Winapi::Windows::PCreateStructW)(0x0));
extern DELPHI_PACKAGE void __fastcall FillDlgArOR(TacDialogWnd* ListSW);
extern DELPHI_PACKAGE void __fastcall UpdateRgn(TacDialogWnd* ListSW, bool Repaint = true);
extern DELPHI_PACKAGE void __fastcall ClearMnuArray();
}	/* namespace Acdials */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACDIALS)
using namespace Acdials;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcdialsHPP
