// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sButton.pas' rev: 22.00

#ifndef SbuttonHPP
#define SbuttonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sDefaults.hpp>	// Pascal unit
#include <sFade.hpp>	// Pascal unit
#include <sSkinManager.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sbutton
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TButtonStyle { bsPushButton, bsCommandLink, bsSplitButton };
#pragma option pop

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
	int OldImageIndex;
	void __fastcall SetFocusMargin(const int Value);
	void __fastcall SetContentMargin(const int Value);
	HIDESBASE void __fastcall SetStyle(const TButtonStyle Value);
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	HIDESBASE MESSAGE void __fastcall WMKeyUp(Messages::TWMKey &Message);
	MESSAGE void __fastcall CNDrawItem(Messages::TWMDrawItem &Message);
	MESSAGE void __fastcall CNMeasureItem(Messages::TWMMeasureItem &Message);
	void __fastcall SetCommandLinkFont(const Graphics::TFont* Value);
	Imglist::TImageIndex __fastcall GetImageIndex(void);
	HIDESBASE void __fastcall SetImageIndex(const Imglist::TImageIndex Value);
	HIDESBASE bool __fastcall IsImageIndexStored(void);
	void __fastcall SetBoolean(const int Index, const bool Value);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Messages::TWMNCHitTest &Message);
	bool __fastcall IsCmdFontStored(void);
	
protected:
	bool IsFocused;
	bool DroppedDown;
	virtual void __fastcall UpdateImages(void);
	virtual void __fastcall UpdateImageList(void);
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
	Types::TRect __fastcall CaptionRect(void);
	bool __fastcall GlyphExist(void);
	bool __fastcall PrepareCache(void);
	tagSIZE __fastcall ImageSize(void);
	void __fastcall GetColoring(Acnttypes::TacColoring &Coloring);
	void __fastcall DrawElevation(Graphics::TCanvas* ACanvas);
	
public:
	virtual Imglist::TCustomImageList* __fastcall GetImages(void);
	virtual int __fastcall CurrentImageIndex(void);
	__fastcall virtual TsButton(Classes::TComponent* AOwner);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual int __fastcall CurrentState(void);
	int __fastcall GlyphIndex(void);
	Types::TRect __fastcall GlyphRect(void);
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
	__property Imglist::TImageIndex ImageIndex = {read=GetImageIndex, write=SetImageIndex, stored=IsImageIndexStored, default=-1};
	__property TButtonStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property Acnttypes::TacGetColoring OnGetColoring = {read=FOnGetColoring, write=FOnGetColoring};
	__property int ContentMargin = {read=FContentMargin, write=SetContentMargin, default=6};
	__property WordWrap = {default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsButton(HWND ParentWindow) : Stdctrls::TButton(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Sbutton */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Sbutton;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SbuttonHPP
