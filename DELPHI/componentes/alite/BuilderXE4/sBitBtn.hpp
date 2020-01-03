// CodeGear C++Builder
// Copyright (c) 1995, 2013 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sBitBtn.pas' rev: 25.00 (Windows)

#ifndef SbitbtnHPP
#define SbitbtnHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <Vcl.Buttons.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sDefaults.hpp>	// Pascal unit
#include <sFade.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sbitbtn
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TsBitBtn;
class PASCALIMPLEMENTATION TsBitBtn : public Vcl::Buttons::TBitBtn
{
	typedef Vcl::Buttons::TBitBtn inherited;
	
private:
	bool FDown;
	bool FGrayed;
	bool FShowFocus;
	bool FReflected;
	bool FShowCaption;
	bool FMouseClicked;
	bool FAcceptsControls;
	bool FDrawOverBorder;
	System::Classes::TNotifyEvent FOnMouseEnter;
	System::Classes::TNotifyEvent FOnMouseLeave;
	int FBlend;
	int FOffset;
	int FOldSpacing;
	int FImageIndex;
	int FFocusMargin;
	System::Classes::TAlignment FAlignment;
	System::Classes::TAlignment FTextAlignment;
	System::Uitypes::TColor FFocusedColor;
	System::Uitypes::TColor FGlyphColorTone;
	Sconst::TBmpPaintEvent FOnPaint;
	Vcl::Imglist::TCustomImageList* FImages;
	Scommondata::TsCtrlSkinData* FCommonData;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Sconst::TsDisabledKind FDisabledKind;
	Sconst::TacAnimatEvents FAnimatEvents;
	Acnttypes::TacGetColoring FOnGetColoring;
	System::Classes::TVerticalAlignment FVerticalAlignment;
	Sconst::TsDisabledGlyphKind FDisabledGlyphKind;
	bool __fastcall GetGrayed(void);
	bool __fastcall GetDown(void);
	HIDESBASE void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	void __fastcall SetDisabledGlyphKind(const Sconst::TsDisabledGlyphKind Value);
	HIDESBASE void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetTextAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetVerticalAlignment(const System::Classes::TVerticalAlignment Value);
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall SetDown(const bool Value);
	void __fastcall SetGrayed(const bool Value);
	void __fastcall SetGlyphColorTone(const System::Uitypes::TColor Value);
	HIDESBASE MESSAGE void __fastcall WMKeyUp(Winapi::Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CNDrawItem(Winapi::Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Winapi::Messages::TWMNCHitTest &Message);
	void __fastcall SetFocusedColor(const System::Uitypes::TColor Value);
	
protected:
	bool IsFocused;
	bool ControlsShifted;
	System::Types::TPoint GlyphPos;
	System::Types::TRect CaptionRect;
	Vcl::Buttons::TButtonLayout OldLayout;
	virtual System::Uitypes::TColor __fastcall GetColorTone(void);
	void __fastcall StdDrawItem(const tagDRAWITEMSTRUCT &DrawItemStruct);
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	void __fastcall OurPaintHandler(HDC aDC);
	void __fastcall DoDrawText(System::Types::TRect &Rect, unsigned Flags, bool CanGlow);
	void __fastcall DrawCaption(const Acnttypes::TacColoring &Coloring, Vcl::Graphics::TCanvas* Canvas = (Vcl::Graphics::TCanvas*)(0x0));
	void __fastcall ShiftControls(int Offset);
	System::Types::TSize __fastcall TextRectSize(void);
	int __fastcall GlyphWidth(void);
	int __fastcall GlyphHeight(void);
	bool __fastcall PrepareCache(void);
	void __fastcall GetColoring(Acnttypes::TacColoring &Coloring);
	
public:
	virtual Vcl::Imglist::TCustomImageList* __fastcall GetImages(void);
	virtual int __fastcall CurrentImageIndex(void);
	DYNAMIC bool __fastcall UseRightToLeftAlignment(void);
	__fastcall virtual TsBitBtn(System::Classes::TComponent* AOwner);
	virtual void __fastcall AfterConstruction(void);
	virtual int __fastcall CurrentState(void);
	__fastcall virtual ~TsBitBtn(void);
	virtual void __fastcall Loaded(void);
	System::Types::TRect __fastcall ImgRect(void);
	virtual void __fastcall Invalidate(void);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall SetButtonStyle(bool ADefault);
	
__published:
	__property Sconst::TBmpPaintEvent OnPaint = {read=FOnPaint, write=FOnPaint};
	__property bool AcceptsControls = {read=FAcceptsControls, write=SetBoolean, index=0, default=0};
	__property bool DrawOverBorder = {read=FDrawOverBorder, write=SetBoolean, index=1, default=1};
	__property bool Reflected = {read=FReflected, write=SetBoolean, index=2, default=0};
	__property bool ShowCaption = {read=FShowCaption, write=SetBoolean, index=3, default=1};
	__property bool ShowFocus = {read=FShowFocus, write=SetBoolean, index=4, default=1};
	__property bool Down = {read=GetDown, write=SetDown, default=0};
	__property bool Grayed = {read=GetGrayed, write=SetGrayed, default=0};
	__property int Blend = {read=FBlend, write=SetInteger, index=0, default=0};
	__property int FocusMargin = {read=FFocusMargin, write=SetInteger, index=1, default=1};
	__property int ImageIndex = {read=FImageIndex, write=SetInteger, index=2, default=-1};
	__property int TextOffset = {read=FOffset, write=SetInteger, index=3, default=0};
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=2};
	__property Sconst::TacAnimatEvents AnimatEvents = {read=FAnimatEvents, write=FAnimatEvents, default=16};
	__property Sconst::TsDisabledGlyphKind DisabledGlyphKind = {read=FDisabledGlyphKind, write=SetDisabledGlyphKind, default=0};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property System::Uitypes::TColor FocusedColor = {read=FFocusedColor, write=SetFocusedColor, default=536870911};
	__property System::Uitypes::TColor GlyphColorTone = {read=FGlyphColorTone, write=SetGlyphColorTone, default=536870911};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property System::Classes::TVerticalAlignment VerticalAlignment = {read=FVerticalAlignment, write=SetVerticalAlignment, default=2};
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property System::Classes::TAlignment TextAlignment = {read=FTextAlignment, write=SetTextAlignment, default=2};
	__property Margin = {default=-1};
	__property WordWrap = {default=1};
	__property Acnttypes::TacGetColoring OnGetColoring = {read=FOnGetColoring, write=FOnGetColoring};
	__property System::Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property System::Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsBitBtn(HWND ParentWindow) : Vcl::Buttons::TBitBtn(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Sbitbtn */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SBITBTN)
using namespace Sbitbtn;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SbitbtnHPP
