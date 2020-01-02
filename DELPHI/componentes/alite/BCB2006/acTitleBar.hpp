// Borland C++ Builder
// Copyright (c) 1995, 2005 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Actitlebar.pas' rev: 10.00

#ifndef ActitlebarHPP
#define ActitlebarHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Imglist.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Extctrls.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Acnttypes.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Actitlebar
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacTitleBarItem;
typedef void __fastcall (__closure *TacInternalDrawEvent)(TacTitleBarItem* Item, const Types::TRect &R, Graphics::TBitmap* Bmp);

struct TacTitleItemDrawData
{
	
public:
	#pragma pack(push,1)
	Types::TRect ARect;
	#pragma pack(pop)
	Graphics::TBitmap* Bmp;
} ;

typedef void __fastcall (__closure *TacDrawItemEvent)(TacTitleBarItem* Item, const TacTitleItemDrawData &ADrawData);

class DELPHICLASS TacItemAnimation;
class PASCALIMPLEMENTATION TacItemAnimation : public Extctrls::TTimer 
{
	typedef Extctrls::TTimer inherited;
	
protected:
	Acnttypes::TacGlowForm* AForm;
	
public:
	int CurrentLevel;
	int CurrentState;
	int MaxIterations;
	Acnttypes::TacGlowForm* OldForm;
	bool ToShow;
	Graphics::TBitmap* NewBmp;
	HWND FormHandle;
	TacTitleBarItem* Item;
	__fastcall virtual TacItemAnimation(Classes::TComponent* AOwner);
	__fastcall virtual ~TacItemAnimation(void);
	Types::TRect __fastcall GetFormBounds();
	int __fastcall Offset(void);
	int __fastcall Step(void);
	void __fastcall MakeForm(void);
	void __fastcall UpdateForm(int Blend);
	void __fastcall StartAnimation(int NewState, bool Show);
	void __fastcall ChangeState(int NewState, bool Show);
	void __fastcall MakeImg(void);
	void __fastcall CheckMouseLeave(void);
	void __fastcall OnAnimTimer(System::TObject* Sender);
};


class DELPHICLASS TacFontData;
class PASCALIMPLEMENTATION TacFontData : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	bool FUseSysSize;
	bool FUseSysStyle;
	bool FUseSysColor;
	bool FUseSysGlowing;
	bool FUseSysFontName;
	Graphics::TFont* FFont;
	HWND WndHandle;
	int FGlowSize;
	Graphics::TColor FGlowColor;
	bool __fastcall GetBool(const int Index);
	void __fastcall SetBool(const int Index, const bool Value);
	void __fastcall SetFont(const Graphics::TFont* Value);
	void __fastcall SetGlowSize(const int Value);
	void __fastcall SetGlowColor(const Graphics::TColor Value);
	
public:
	Graphics::TFont* UsedFont;
	Graphics::TBitmap* GlowMask;
	__fastcall TacFontData(void);
	__fastcall virtual ~TacFontData(void);
	void __fastcall Invalidate(void);
	
__published:
	__property Graphics::TFont* Font = {read=FFont, write=SetFont};
	__property Graphics::TColor GlowColor = {read=FGlowColor, write=SetGlowColor, default=8421504};
	__property int GlowSize = {read=FGlowSize, write=SetGlowSize, default=0};
	__property bool UseSysColor = {read=GetBool, write=SetBool, index=0, default=1};
	__property bool UseSysFontName = {read=GetBool, write=SetBool, index=1, default=1};
	__property bool UseSysGlowing = {read=GetBool, write=SetBool, index=2, default=1};
	__property bool UseSysSize = {read=GetBool, write=SetBool, index=3, default=1};
	__property bool UseSysStyle = {read=GetBool, write=SetBool, index=4, default=1};
};


#pragma option push -b-
enum TacBtnStyle { bsButton, bsMenu, bsTab, bsSpacing, bsInfo };
#pragma option pop

#pragma option push -b-
enum TacItemAlign { tbaLeft, tbaRight, tbaCenter, tbaCenterInSpace };
#pragma option pop

class PASCALIMPLEMENTATION TacTitleBarItem : public Classes::TCollectionItem 
{
	typedef Classes::TCollectionItem inherited;
	
private:
	Graphics::TBitmap* FGlyph;
	Graphics::TBitmap* FDefaultMenuBtn;
	bool FEnabled;
	bool FVisible;
	bool FAutoSize;
	bool FShowHint;
	bool FDroppedDown;
	bool FStretchImage;
	AnsiString FHint;
	AnsiString FCaption;
	Controls::TMouseEvent FOnMouseUp;
	Controls::TMouseEvent FOnMouseDown;
	Classes::TNotifyEvent FOnClick;
	Classes::TNotifyEvent FOnChanged;
	Classes::TNotifyEvent FOnMouseLeave;
	Classes::TNotifyEvent FOnMouseEnter;
	int FTag;
	int FWidth;
	int FHeight;
	int FSpacing;
	int FNumGlyphs;
	int FImageIndex;
	int FGroupIndex;
	int FHotImageIndex;
	int FPressedImageIndex;
	int FDisabledImageIndex;
	AnsiString FName;
	AnsiString FSkinSection;
	Controls::TCursor FCursor;
	TacBtnStyle FStyle;
	#pragma pack(push,1)
	tagSIZE FContentSize;
	#pragma pack(pop)
	TacItemAlign FAlign;
	TacFontData* FFontData;
	Classes::TAlignment FAlignment;
	Menus::TPopupMenu* FDropdownMenu;
	TacDrawItemEvent FOnDrawItem;
	TacInternalDrawEvent FOnInternalDraw;
	void __fastcall SetSkinSection(const AnsiString Value);
	void __fastcall SetAlignment(const Classes::TAlignment Value);
	void __fastcall SetGlyph(const Graphics::TBitmap* Value);
	void __fastcall SetName(const AnsiString Value);
	void __fastcall SetAlign(const TacItemAlign Value);
	void __fastcall SetCaption(const AnsiString Value);
	void __fastcall SetStyle(const TacBtnStyle Value);
	void __fastcall SetState(const int Value);
	void __fastcall SetInteger(const int AIndex, const int Value);
	void __fastcall SetBoolean(const int Index, const bool Value);
	int __fastcall GetState(void);
	void __fastcall OnGlyphChange(System::TObject* Sender);
	
protected:
	bool FDown;
	int FState;
	
public:
	Controls::THintWindow* HintWnd;
	#pragma pack(push,1)
	Types::TRect Rect;
	#pragma pack(pop)
	System::TObject* *Data;
	bool FPressed;
	Acnttypes::TacGlowForm* ExtForm;
	TacItemAnimation* Timer;
	virtual void __fastcall AssignTo(Classes::TPersistent* Dest);
	__fastcall virtual TacTitleBarItem(Classes::TCollection* ACollection);
	__fastcall virtual ~TacTitleBarItem(void);
	void __fastcall ScaleItem(int NewValue, int OldValue);
	void __fastcall InitFont(System::TObject* sp);
	void __fastcall DoMouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall DoMouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall DoClick(void);
	HIDESBASE void __fastcall Changed(void);
	void __fastcall UpdateSize(bool ContentOnly = false);
	void __fastcall Invalidate(bool RecalcSize = false);
	virtual AnsiString __fastcall GetDisplayName();
	int __fastcall IntXMargin(void);
	__property Graphics::TBitmap* DefaultMenuBtn = {read=FDefaultMenuBtn};
	__property bool DroppedDown = {read=FDroppedDown, nodefault};
	__property int GroupIndex = {read=FGroupIndex, write=SetInteger, index=8, default=0};
	__property tagSIZE ContentSize = {read=FContentSize};
	__property bool Pressed = {read=FPressed, nodefault};
	__property int State = {read=GetState, write=SetState, nodefault};
	__property TacInternalDrawEvent OnInternalDraw = {read=FOnInternalDraw, write=FOnInternalDraw};
	__property Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
	
__published:
	__property TacItemAlign Align = {read=FAlign, write=SetAlign, default=0};
	__property Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property AnsiString Caption = {read=FCaption, write=SetCaption};
	__property Menus::TPopupMenu* DropdownMenu = {read=FDropdownMenu, write=FDropdownMenu};
	__property TacFontData* FontData = {read=FFontData, write=FFontData};
	__property Graphics::TBitmap* Glyph = {read=FGlyph, write=SetGlyph};
	__property Controls::TCursor Cursor = {read=FCursor, write=FCursor, default=0};
	__property bool AutoSize = {read=FAutoSize, write=SetBoolean, index=0, default=1};
	__property bool Down = {read=FDown, write=SetBoolean, index=1, default=0};
	__property bool Enabled = {read=FEnabled, write=SetBoolean, index=2, default=1};
	__property bool Visible = {read=FVisible, write=SetBoolean, index=3, default=1};
	__property bool StretchImage = {read=FStretchImage, write=SetBoolean, index=4, default=0};
	__property AnsiString Hint = {read=FHint, write=FHint};
	__property int DisabledImageIndex = {read=FDisabledImageIndex, write=SetInteger, index=0, default=-1};
	__property int ImageIndex = {read=FImageIndex, write=SetInteger, index=1, default=-1};
	__property int HotImageIndex = {read=FHotImageIndex, write=SetInteger, index=2, default=-1};
	__property int PressedImageIndex = {read=FPressedImageIndex, write=SetInteger, index=3, default=-1};
	__property int NumGlyphs = {read=FNumGlyphs, write=SetInteger, index=4, default=1};
	__property int Spacing = {read=FSpacing, write=SetInteger, index=5, default=4};
	__property int Height = {read=FHeight, write=SetInteger, index=6, default=18};
	__property int Width = {read=FWidth, write=SetInteger, index=7, default=22};
	__property Index ;
	__property AnsiString Name = {read=FName, write=SetName};
	__property bool ShowHint = {read=FShowHint, write=FShowHint, default=0};
	__property AnsiString SkinSection = {read=FSkinSection, write=SetSkinSection};
	__property TacBtnStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property int Tag = {read=FTag, write=FTag, default=0};
	__property Classes::TNotifyEvent OnClick = {read=FOnClick, write=FOnClick};
	__property TacDrawItemEvent OnDrawItem = {read=FOnDrawItem, write=FOnDrawItem};
	__property Controls::TMouseEvent OnMouseDown = {read=FOnMouseDown, write=FOnMouseDown};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property Controls::TMouseEvent OnMouseUp = {read=FOnMouseUp, write=FOnMouseUp};
};


class DELPHICLASS TacTitleItems;
class DELPHICLASS TsTitleBar;
class PASCALIMPLEMENTATION TsTitleBar : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	int FLeftWidth;
	int FRightWidth;
	int FItemsMargin;
	int FCenterWidth;
	int FCenterWidthS;
	int FItemsSpacing;
	Forms::TForm* Form;
	#pragma pack(push,1)
	Types::TRect FCaptionRect;
	#pragma pack(pop)
	TacTitleItems* FItems;
	bool FShowCaption;
	int FRightSpacing;
	Imglist::TCustomImageList* FImages;
	Imglist::TChangeLink* FImageChangeLink;
	void __fastcall SetItems(const TacTitleItems* Value);
	void __fastcall SetImages(const Imglist::TCustomImageList* Value);
	void __fastcall SetShowCaption(const bool Value);
	
protected:
	int FFullRight;
	int FBarVCenter;
	int OldScaleValue;
	#pragma pack(push,1)
	Types::TRect FBarRect;
	#pragma pack(pop)
	bool FUpdating;
	void __fastcall ImageListChange(System::TObject* Sender);
	
public:
	bool Initialized;
	Graphics::TBitmap* FDefaultMenuBtn;
	System::TObject* SP;
	void __fastcall CalcSizes(void);
	__fastcall virtual TsTitleBar(Classes::TComponent* AOwner);
	__fastcall virtual ~TsTitleBar(void);
	virtual void __fastcall Loaded(void);
	void __fastcall UpdateScale(int NewValue);
	void __fastcall UpdateSizes(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall Invalidate(void);
	__property Types::TRect BarRect = {read=FBarRect};
	__property Types::TRect CaptionRect = {read=FCaptionRect};
	__property int LeftWidth = {read=FLeftWidth, nodefault};
	__property int RightWidth = {read=FRightWidth, nodefault};
	
__published:
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TacTitleItems* Items = {read=FItems, write=SetItems};
	__property int ItemsMargin = {read=FItemsMargin, write=FItemsMargin, default=3};
	__property int ItemsSpacing = {read=FItemsSpacing, write=FItemsSpacing, default=0};
	__property int RightSpacing = {read=FRightSpacing, write=FRightSpacing, default=0};
	__property bool ShowCaption = {read=FShowCaption, write=SetShowCaption, default=0};
};


class PASCALIMPLEMENTATION TacTitleItems : public Classes::TCollection 
{
	typedef Classes::TCollection inherited;
	
public:
	TacTitleBarItem* operator[](int Index) { return Items[Index]; }
	
private:
	TsTitleBar* FOwner;
	HIDESBASE TacTitleBarItem* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TacTitleBarItem* Value);
	
protected:
	DYNAMIC Classes::TPersistent* __fastcall GetOwner(void);
	
public:
	__fastcall TacTitleItems(Classes::TPersistent* AOwner);
	HIDESBASE TacTitleBarItem* __fastcall Insert(int Index);
	__property TacTitleBarItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	#pragma option push -w-inl
	/* TCollection.Destroy */ inline __fastcall virtual ~TacTitleItems(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall StartItemAnimation(const TacTitleBarItem* Item, const int Iterations, const bool Show, Acnttypes::TacGlowForm* ExtendedForm = (Acnttypes::TacGlowForm*)(0x0));
extern PACKAGE void __fastcall ShowHintWnd(TacTitleBarItem* Item);
extern PACKAGE void __fastcall HideHintWnd(TacTitleBarItem* Item);
extern PACKAGE void __fastcall PaintItemNoAlpha(const Graphics::TBitmap* DstBmp, const Graphics::TBitmap* SrcBmp, const Types::TRect &DstRect, const Types::TRect &SrcRect, const Types::TRect &BorderWidths);

}	/* namespace Actitlebar */
using namespace Actitlebar;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Actitlebar
