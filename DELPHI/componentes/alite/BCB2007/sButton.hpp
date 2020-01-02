// CodeGear C++Builder
// Copyright (c) 1995, 2007 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Sbutton.pas' rev: 11.00

#ifndef SbuttonHPP
#define SbuttonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Imglist.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Acnttypes.hpp>	// Pascal unit
#include <Scommondata.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Sdefaults.hpp>	// Pascal unit
#include <Sfade.hpp>	// Pascal unit
#include <Sskinmanager.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sbutton
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TButtonStyle { bsPushButton, bsCommandLink, bsSplitButton };
#pragma option pop

#pragma option push -b-
enum TImageAlignment { iaLeft, iaRight, iaTop, iaBottom, iaCenter };
#pragma option pop

class DELPHICLASS TImageMargins;
class PASCALIMPLEMENTATION TImageMargins : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	int FTop;
	int FLeft;
	int FRight;
	int FBottom;
	Classes::TNotifyEvent FOnChange;
	void __fastcall SetMargin(int Index, int Value);
	
protected:
	void __fastcall Change(void);
	
public:
	virtual void __fastcall Assign(Classes::TPersistent* Source);
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property int Left = {read=FLeft, write=SetMargin, index=0, default=0};
	__property int Top = {read=FTop, write=SetMargin, index=1, default=0};
	__property int Right = {read=FRight, write=SetMargin, index=2, default=0};
	__property int Bottom = {read=FBottom, write=SetMargin, index=3, default=0};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TImageMargins(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TImageMargins(void) : Classes::TPersistent() { }
	#pragma option pop
	
};


class DELPHICLASS TsButton;
class PASCALIMPLEMENTATION TsButton : public Stdctrls::TButton 
{
	typedef Stdctrls::TButton inherited;
	
private:
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	bool FDown;
	bool FShowFocus;
	bool FReflected;
	bool FMouseClicked;
	bool FCustomCommandLinkFont;
	int FFocusMargin;
	int FContentMargin;
	TButtonStyle FStyle;
	Graphics::TFont* FCommandLinkFont;
	Sconst::TsDisabledKind FDisabledKind;
	Sconst::TacAnimatEvents FAnimatEvents;
	Scommondata::TsCtrlSkinData* FCommonData;
	Acnttypes::TacGetColoring FOnGetColoring;
	Imglist::TImageIndex FImageIndex;
	Imglist::TImageIndex FHotImageIndex;
	Imglist::TImageIndex FPressedImageIndex;
	Imglist::TImageIndex FDisabledImageIndex;
	Imglist::TImageIndex FSelectedImageIndex;
	Menus::TPopupMenu* FDropDownMenu;
	AnsiString FCommandLinkHint;
	Imglist::TChangeLink* FImageChangeLink;
	Imglist::TCustomImageList* FImages;
	TImageAlignment FImageAlignment;
	TImageMargins* FImageMargins;
	void __fastcall SetFocusMargin(const int Value);
	void __fastcall SetContentMargin(const int Value);
	void __fastcall SetStyle(const TButtonStyle Value);
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	HIDESBASE MESSAGE void __fastcall WMKeyUp(Messages::TWMKey &Message);
	MESSAGE void __fastcall CNDrawItem(Messages::TWMDrawItem &Message);
	MESSAGE void __fastcall CNMeasureItem(Messages::TWMMeasureItem &Message);
	void __fastcall SetCommandLinkFont(const Graphics::TFont* Value);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall ImageMarginsChange(System::TObject* Sender);
	void __fastcall SetImages(const Imglist::TCustomImageList* Value);
	void __fastcall SetImageMargins(const TImageMargins* Value);
	void __fastcall SetImageAlignment(const TImageAlignment Value);
	void __fastcall SetCommandLinkHint(const AnsiString Value);
	void __fastcall SetImageIndex(const int Index, const Imglist::TImageIndex Value);
	void __fastcall SetImgIndex(const Imglist::TImageIndex Value);
	bool __fastcall IsImageIndexStored(void);
	void __fastcall SetBoolean(const int Index, const bool Value);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Messages::TWMNCHitTest &Message);
	bool __fastcall IsCmdFontStored(void);
	
protected:
	bool IsFocused;
	bool DroppedDown;
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall StdDrawItem(const tagDRAWITEMSTRUCT &DrawItemStruct);
	virtual void __fastcall SetButtonStyle(bool ADefault);
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall OurPaintHandler(HDC aDC);
	void __fastcall DrawCaption(Graphics::TColor ColorText, Graphics::TCanvas* Canvas = (Graphics::TCanvas*)(0x0));
	void __fastcall DrawGlyph(const Acnttypes::TacColoring &ColorTones, Graphics::TCanvas* Canvas = (Graphics::TCanvas*)(0x0));
	void __fastcall CustomFontChanged(System::TObject* Sender);
	int __fastcall ScaledDropWidth(void);
	Types::TRect __fastcall CaptionRect();
	bool __fastcall GlyphExist(void);
	bool __fastcall PrepareCache(void);
	tagSIZE __fastcall ImageSize();
	void __fastcall GetColoring(Acnttypes::TacColoring &Coloring);
	
public:
	virtual Imglist::TCustomImageList* __fastcall GetImages(void);
	virtual int __fastcall CurrentImageIndex(void);
	__fastcall virtual TsButton(Classes::TComponent* AOwner);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual int __fastcall CurrentState(void);
	int __fastcall GlyphIndex(void);
	Types::TRect __fastcall GlyphRect();
	__fastcall virtual ~TsButton(void);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Invalidate(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
__published:
	__property Sconst::TacAnimatEvents AnimatEvents = {read=FAnimatEvents, write=FAnimatEvents, default=16};
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property int FocusMargin = {read=FFocusMargin, write=SetFocusMargin, default=1};
	__property Graphics::TFont* CommandLinkFont = {read=FCommandLinkFont, write=SetCommandLinkFont, stored=IsCmdFontStored};
	__property bool Down = {read=FDown, write=SetBoolean, index=0, default=0};
	__property bool ShowFocus = {read=FShowFocus, write=SetBoolean, index=1, default=1};
	__property bool Reflected = {read=FReflected, write=SetBoolean, index=2, default=0};
	__property bool CustomCommandLinkFont = {read=FCustomCommandLinkFont, write=SetBoolean, index=3, default=0};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property AnsiString CommandLinkHint = {read=FCommandLinkHint, write=SetCommandLinkHint};
	__property Menus::TPopupMenu* DropDownMenu = {read=FDropDownMenu, write=FDropDownMenu};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TImageAlignment ImageAlignment = {read=FImageAlignment, write=SetImageAlignment, default=0};
	__property TImageMargins* ImageMargins = {read=FImageMargins, write=SetImageMargins};
	__property Imglist::TImageIndex ImageIndex = {read=FImageIndex, write=SetImgIndex, stored=IsImageIndexStored, default=-1};
	__property Imglist::TImageIndex HotImageIndex = {read=FHotImageIndex, write=SetImageIndex, index=1, default=-1};
	__property Imglist::TImageIndex DisabledImageIndex = {read=FDisabledImageIndex, write=SetImageIndex, index=2, default=-1};
	__property Imglist::TImageIndex PressedImageIndex = {read=FPressedImageIndex, write=SetImageIndex, index=3, default=-1};
	__property Imglist::TImageIndex SelectedImageIndex = {read=FSelectedImageIndex, write=SetImageIndex, index=4, default=-1};
	__property TButtonStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property Acnttypes::TacGetColoring OnGetColoring = {read=FOnGetColoring, write=FOnGetColoring};
	__property int ContentMargin = {read=FContentMargin, write=SetContentMargin, default=6};
	__property WordWrap  = {default=1};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsButton(HWND ParentWindow) : Stdctrls::TButton(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Sbutton */
using namespace Sbutton;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Sbutton
