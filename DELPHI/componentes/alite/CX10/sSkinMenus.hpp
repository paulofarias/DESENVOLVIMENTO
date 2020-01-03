// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sSkinMenus.pas' rev: 30.00 (Windows)

#ifndef SskinmenusHPP
#define SskinmenusHPP

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
#include <Vcl.Menus.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <acntTypes.hpp>
#include <sConst.hpp>

//-- user supplied -----------------------------------------------------------

namespace Sskinmenus
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TacMenuSupport;
struct TMenuItemData;
struct TacMenuInfo;
class DELPHICLASS TsSkinableMenus;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TsMenuItemType : unsigned char { smCaption, smDivider, smNormal, smTopLine };

typedef void __fastcall (__closure *TsMenuManagerDrawItemEvent)(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State, TsMenuItemType ItemType);

#pragma pack(push,4)
class PASCALIMPLEMENTATION TacMenuSupport : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FCustomFont;
	bool FUseExtraLine;
	Vcl::Graphics::TFont* FFont;
	Vcl::Graphics::TFont* FExtraLineFont;
	System::Byte FAlphaBlend;
	int FExtraLineWidth;
	System::UnicodeString FIcoLineSkin;
	void __fastcall SetExtraLineFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetCustomFont(const bool Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	bool __fastcall FontStored(void);
	bool __fastcall ExtraFontStored(void);
	bool __fastcall LineSkinStored(void);
	
public:
	__fastcall TacMenuSupport(void);
	__fastcall virtual ~TacMenuSupport(void);
	
__published:
	__property System::Byte AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, default=255};
	__property Vcl::Graphics::TFont* ExtraLineFont = {read=FExtraLineFont, write=SetExtraLineFont, stored=ExtraFontStored};
	__property int ExtraLineWidth = {read=FExtraLineWidth, write=FExtraLineWidth, default=32};
	__property System::UnicodeString IcoLineSkin = {read=FIcoLineSkin, write=FIcoLineSkin, stored=LineSkinStored};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont, stored=FontStored};
	__property bool CustomFont = {read=FCustomFont, write=SetCustomFont, default=0};
	__property bool UseExtraLine = {read=FUseExtraLine, write=FUseExtraLine, default=0};
};

#pragma pack(pop)

struct DECLSPEC_DRECORD TMenuItemData
{
public:
	Vcl::Menus::TMenuItem* Item;
	System::Types::TRect R;
};


typedef TacMenuInfo *PacMenuInfo;

struct DECLSPEC_DRECORD TacMenuInfo
{
public:
	Vcl::Menus::TMenuItem* FirstItem;
	Vcl::Graphics::TBitmap* Bmp;
	HWND Wnd;
	bool HaveExtraLine;
	bool ItemsIterated;
};


class PASCALIMPLEMENTATION TsSkinableMenus : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FMargin;
	int FSpacing;
	int FBevelWidth;
	int FBorderWidth;
	int FSkinBorderWidth;
	Vcl::Forms::TForm* Form;
	int PPI;
	TsMenuItemType it;
	Vcl::Graphics::TFont* FCaptionFont;
	System::Classes::TAlignment FAlignment;
	void __fastcall SetCaptionFont(Vcl::Graphics::TFont* const Value);
	Vcl::Graphics::TFont* __fastcall GetCaptionFont(void);
	int __fastcall GetMargin(void);
	int __fastcall GetSpacing(void);
	int __fastcall GetBorderWidth(void);
	
protected:
	Acnttypes::TRects ArOR;
	Acnttypes::TacObject* sd;
	TsMenuManagerDrawItemEvent FOnDrawItem;
	bool Pressed;
	bool FActive;
	bool BorderDrawing;
	System::Classes::TComponent* FOwner;
	int __fastcall ParentHeight(Vcl::Graphics::TCanvas* aCanvas, Vcl::Menus::TMenuItem* Item);
	int __fastcall GetItemHeight(Vcl::Graphics::TCanvas* aCanvas, Vcl::Menus::TMenuItem* Item);
	int __fastcall ParentWidth(Vcl::Graphics::TCanvas* aCanvas, Vcl::Menus::TMenuItem* Item);
	int __fastcall GetItemWidth(Vcl::Graphics::TCanvas* aCanvas, Vcl::Menus::TMenuItem* Item, const PacMenuInfo mi);
	void __fastcall PaintDivider(Vcl::Graphics::TCanvas* aCanvas, const System::Types::TRect &aRect, Vcl::Menus::TMenuItem* Item, Vcl::Graphics::TBitmap* MenuBmp, const PacMenuInfo mi);
	void __fastcall PaintCaption(Vcl::Graphics::TCanvas* aCanvas, const System::Types::TRect &aRect, Vcl::Menus::TMenuItem* Item, Vcl::Graphics::TBitmap* BG, const PacMenuInfo mi);
	bool __fastcall IsRTL(Vcl::Menus::TMenuItem* Item);
	bool __fastcall IsDivText(Vcl::Menus::TMenuItem* Item);
	System::Types::TRect __fastcall ItemRect(Vcl::Menus::TMenuItem* Item, const System::Types::TRect &aRect);
	int __fastcall CursorMarginH(void);
	int __fastcall CursorMarginV(void);
	void __fastcall UpdateFont(Vcl::Graphics::TCanvas* aCanvas, Vcl::Menus::TMenuItem* aItem, bool aBold, bool aCaption = false);
	bool __fastcall IsTopLine(Vcl::Menus::TMenuItem* Item);
	void __fastcall sMeasureItem(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, int &Width, int &Height);
	void __fastcall sAdvancedDrawItem(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State);
	Vcl::Graphics::TBitmap* __fastcall PrepareMenuBG(PacMenuInfo mi, Vcl::Menus::TMenuItem* Item, int Width, int Height, HWND Wnd = (HWND)(0x0));
	void __fastcall sMeasureLineItem(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, int &Width, int &Height);
	void __fastcall sAdvancedDrawLineItem(System::TObject* Sender, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, Winapi::Windows::TOwnerDrawState State);
	void __fastcall SetActive(const bool Value);
	bool __fastcall NoBorder(void);
	System::Types::TSize __fastcall GlyphSize(Vcl::Menus::TMenuItem* Item, bool Common = false);
	int __fastcall RealBorderWidth(void);
	bool __fastcall LastItem(Vcl::Menus::TMenuItem* Item);
	bool __fastcall IsPopupItem(Vcl::Menus::TMenuItem* Item);
	int __fastcall ExtraWidth(const PacMenuInfo mip);
	
public:
	System::TObject* MenuProvider;
	void __fastcall UpdateMenus(void);
	void __fastcall InitItems(bool A);
	void __fastcall DrawWndBorder(HWND Wnd, Vcl::Graphics::TBitmap* MenuBmp);
	PacMenuInfo __fastcall GetMenuInfo(Vcl::Menus::TMenuItem* Item, Vcl::Graphics::TCanvas* aCanvas, HWND aWnd = (HWND)(0x0));
	void __fastcall InitItem(Vcl::Menus::TMenuItem* Item, bool A);
	void __fastcall HookItem(Vcl::Menus::TMenuItem* MenuItem, bool AActive);
	void __fastcall InitMenuLine(Vcl::Menus::TMainMenu* Menu, bool A);
	void __fastcall HookPopupMenu(Vcl::Menus::TPopupMenu* Menu, bool Active);
	__fastcall TsSkinableMenus(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsSkinableMenus(void);
	
__published:
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=FAlignment, nodefault};
	__property int BevelWidth = {read=FBevelWidth, write=FBevelWidth, default=0};
	__property int BorderWidth = {read=GetBorderWidth, write=FBorderWidth, default=3};
	__property Vcl::Graphics::TFont* CaptionFont = {read=GetCaptionFont, write=SetCaptionFont};
	__property int SkinBorderWidth = {read=FSkinBorderWidth, write=FSkinBorderWidth, nodefault};
	__property int Margin = {read=GetMargin, write=FMargin, default=2};
	__property int Spacing = {read=GetSpacing, write=FSpacing, default=8};
	__property TsMenuManagerDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::TObject* MDISkinProvider;
extern DELPHI_PACKAGE bool acCanHookMenu;
extern DELPHI_PACKAGE Vcl::Graphics::TFont* CustomMenuFont;
extern DELPHI_PACKAGE int iDefIcoWidth;
#define s_SysMenu L"acSysMenu"
extern DELPHI_PACKAGE bool __fastcall ChildIconPresent(void);
extern DELPHI_PACKAGE Vcl::Menus::TMenuItem* __fastcall GetFirstItem(Vcl::Menus::TMenuItem* Item);
extern DELPHI_PACKAGE void __fastcall DeleteUnusedBmps(bool DeleteAll);
extern DELPHI_PACKAGE void __fastcall ClearCache(void);
}	/* namespace Sskinmenus */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SSKINMENUS)
using namespace Sskinmenus;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SskinmenusHPP
