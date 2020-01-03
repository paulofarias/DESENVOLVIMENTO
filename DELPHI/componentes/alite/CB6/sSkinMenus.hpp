// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sSkinMenus.pas' rev: 6.00

#ifndef sSkinMenusHPP
#define sSkinMenusHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <sConst.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sskinmenus
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TsMenuItemType { smCaption, smDivider, smNormal, smTopLine };
#pragma option pop

typedef void __fastcall (__closure *TsMenuManagerDrawItemEvent)(System::TObject* Sender, Graphics::TCanvas* ACanvas, const Types::TRect &ARect, Windows::TOwnerDrawState State, TsMenuItemType ItemType);

class DELPHICLASS TacMenuSupport;
class PASCALIMPLEMENTATION TacMenuSupport : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FCustomFont;
	bool FUseExtraLine;
	Graphics::TFont* FFont;
	Graphics::TFont* FExtraLineFont;
	Byte FAlphaBlend;
	int FExtraLineWidth;
	AnsiString FIcoLineSkin;
	void __fastcall SetExtraLineFont(const Graphics::TFont* Value);
	void __fastcall SetCustomFont(const bool Value);
	void __fastcall SetFont(const Graphics::TFont* Value);
	bool __fastcall FontStored(void);
	bool __fastcall ExtraFontStored(void);
	bool __fastcall LineSkinStored(void);
	
public:
	__fastcall TacMenuSupport(void);
	__fastcall virtual ~TacMenuSupport(void);
	
__published:
	__property Byte AlphaBlend = {read=FAlphaBlend, write=FAlphaBlend, default=255};
	__property Graphics::TFont* ExtraLineFont = {read=FExtraLineFont, write=SetExtraLineFont, stored=ExtraFontStored};
	__property int ExtraLineWidth = {read=FExtraLineWidth, write=FExtraLineWidth, default=32};
	__property AnsiString IcoLineSkin = {read=FIcoLineSkin, write=FIcoLineSkin, stored=LineSkinStored};
	__property Graphics::TFont* Font = {read=FFont, write=SetFont, stored=FontStored};
	__property bool CustomFont = {read=FCustomFont, write=SetCustomFont, default=0};
	__property bool UseExtraLine = {read=FUseExtraLine, write=FUseExtraLine, default=0};
};


#pragma pack(push, 4)
struct TMenuItemData
{
	Menus::TMenuItem* Item;
	Types::TRect R;
} ;
#pragma pack(pop)

struct TacMenuInfo;
typedef TacMenuInfo *PacMenuInfo;

#pragma pack(push, 4)
struct TacMenuInfo
{
	Menus::TMenuItem* FirstItem;
	Graphics::TBitmap* Bmp;
	HWND Wnd;
	bool HaveExtraLine;
	bool ItemsIterated;
} ;
#pragma pack(pop)

class DELPHICLASS TsSkinableMenus;
class PASCALIMPLEMENTATION TsSkinableMenus : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	int FMargin;
	int FSpacing;
	int FBevelWidth;
	int FBorderWidth;
	int FSkinBorderWidth;
	Forms::TForm* Form;
	int PPI;
	TsMenuItemType it;
	Graphics::TFont* FCaptionFont;
	Classes::TAlignment FAlignment;
	void __fastcall SetCaptionFont(const Graphics::TFont* Value);
	Graphics::TFont* __fastcall GetCaptionFont(void);
	int __fastcall GetMargin(void);
	int __fastcall GetSpacing(void);
	int __fastcall GetBorderWidth(void);
	
protected:
	DynamicArray<Types::TRect >  ArOR;
	Acnttypes::TacObject* sd;
	TsMenuManagerDrawItemEvent FOnDrawItem;
	bool Pressed;
	bool FActive;
	bool BorderDrawing;
	Classes::TComponent* FOwner;
	int __fastcall ParentHeight(Graphics::TCanvas* aCanvas, Menus::TMenuItem* Item);
	int __fastcall GetItemHeight(Graphics::TCanvas* aCanvas, Menus::TMenuItem* Item);
	int __fastcall ParentWidth(Graphics::TCanvas* aCanvas, Menus::TMenuItem* Item);
	int __fastcall GetItemWidth(Graphics::TCanvas* aCanvas, Menus::TMenuItem* Item, const PacMenuInfo mi);
	void __fastcall PaintDivider(Graphics::TCanvas* aCanvas, const Types::TRect &aRect, Menus::TMenuItem* Item, Graphics::TBitmap* MenuBmp, const PacMenuInfo mi);
	void __fastcall PaintCaption(Graphics::TCanvas* aCanvas, const Types::TRect &aRect, Menus::TMenuItem* Item, Graphics::TBitmap* BG, const PacMenuInfo mi);
	bool __fastcall IsRTL(Menus::TMenuItem* Item);
	bool __fastcall IsDivText(Menus::TMenuItem* Item);
	Types::TRect __fastcall ItemRect(Menus::TMenuItem* Item, const Types::TRect &aRect);
	int __fastcall CursorMarginH(void);
	int __fastcall CursorMarginV(void);
	void __fastcall UpdateFont(Graphics::TCanvas* aCanvas, Menus::TMenuItem* aItem, bool aBold, bool aCaption = false);
	bool __fastcall IsTopLine(Menus::TMenuItem* Item);
	void __fastcall sMeasureItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, int &Width, int &Height);
	void __fastcall sAdvancedDrawItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, const Types::TRect &ARect, Windows::TOwnerDrawState State);
	Graphics::TBitmap* __fastcall PrepareMenuBG(PacMenuInfo mi, Menus::TMenuItem* Item, int Width, int Height, HWND Wnd = (HWND)(0x0));
	void __fastcall sMeasureLineItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, int &Width, int &Height);
	void __fastcall sAdvancedDrawLineItem(System::TObject* Sender, Graphics::TCanvas* ACanvas, const Types::TRect &ARect, Windows::TOwnerDrawState State);
	void __fastcall SetActive(const bool Value);
	bool __fastcall NoBorder(void);
	tagSIZE __fastcall GlyphSize(Menus::TMenuItem* Item, bool Common = false);
	int __fastcall RealBorderWidth(void);
	bool __fastcall LastItem(Menus::TMenuItem* Item);
	bool __fastcall IsPopupItem(Menus::TMenuItem* Item);
	int __fastcall ExtraWidth(const PacMenuInfo mip);
	
public:
	System::TObject* MenuProvider;
	void __fastcall UpdateMenus(void);
	void __fastcall InitItems(bool A);
	void __fastcall DrawWndBorder(HWND Wnd, Graphics::TBitmap* MenuBmp);
	PacMenuInfo __fastcall GetMenuInfo(Menus::TMenuItem* Item, Graphics::TCanvas* aCanvas, HWND aWnd = (HWND)(0x0));
	void __fastcall InitItem(Menus::TMenuItem* Item, bool A);
	void __fastcall HookItem(Menus::TMenuItem* MenuItem, bool AActive);
	void __fastcall InitMenuLine(Menus::TMainMenu* Menu, bool A);
	void __fastcall HookPopupMenu(Menus::TPopupMenu* Menu, bool Active);
	__fastcall TsSkinableMenus(Classes::TComponent* AOwner);
	__fastcall virtual ~TsSkinableMenus(void);
	
__published:
	__property Classes::TAlignment Alignment = {read=FAlignment, write=FAlignment, nodefault};
	__property int BevelWidth = {read=FBevelWidth, write=FBevelWidth, default=0};
	__property int BorderWidth = {read=GetBorderWidth, write=FBorderWidth, default=3};
	__property Graphics::TFont* CaptionFont = {read=GetCaptionFont, write=SetCaptionFont};
	__property int SkinBorderWidth = {read=FSkinBorderWidth, write=FSkinBorderWidth, nodefault};
	__property int Margin = {read=GetMargin, write=FMargin, default=2};
	__property int Spacing = {read=GetSpacing, write=FSpacing, default=8};
	__property TsMenuManagerDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE System::TObject* MDISkinProvider;
extern PACKAGE bool acCanHookMenu;
extern PACKAGE Graphics::TFont* CustomMenuFont;
extern PACKAGE int iDefIcoWidth;
#define s_SysMenu "acSysMenu"
extern PACKAGE bool __fastcall ChildIconPresent(void);
extern PACKAGE Menus::TMenuItem* __fastcall GetFirstItem(Menus::TMenuItem* Item);
extern PACKAGE void __fastcall DeleteUnusedBmps(bool DeleteAll);
extern PACKAGE void __fastcall ClearCache(void);

}	/* namespace Sskinmenus */
using namespace Sskinmenus;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sSkinMenus
