// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sBitBtn.pas' rev: 6.00

#ifndef sBitBtnHPP
#define sBitBtnHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acntTypes.hpp>	// Pascal unit
#include <sFade.hpp>	// Pascal unit
#include <sDefaults.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
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

namespace Sbitbtn
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TsBitBtn;
class PASCALIMPLEMENTATION TsBitBtn : public Buttons::TBitBtn 
{
	typedef Buttons::TBitBtn inherited;
	
private:
	bool FDown;
	bool FGrayed;
	bool FShowFocus;
	bool FReflected;
	bool FShowCaption;
	bool FMouseClicked;
	bool FAcceptsControls;
	bool FDrawOverBorder;
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	int FBlend;
	int FOffset;
	int FOldSpacing;
	int FImageIndex;
	int FFocusMargin;
	Classes::TAlignment FAlignment;
	Classes::TAlignment FTextAlignment;
	Graphics::TColor FFocusedColor;
	Graphics::TColor FGlyphColorTone;
	Sconst::TBmpPaintEvent FOnPaint;
	Imglist::TCustomImageList* FImages;
	Scommondata::TsCtrlSkinData* FCommonData;
	Imglist::TChangeLink* FImageChangeLink;
	Sconst::TsDisabledKind FDisabledKind;
	Sconst::TacAnimatEvents FAnimatEvents;
	Acnttypes::TacGetColoring FOnGetColoring;
	Sconst::TVerticalAlignment FVerticalAlignment;
	Sconst::TsDisabledGlyphKind FDisabledGlyphKind;
	bool FWordWrap;
	void __fastcall SetWordWrap(const bool Value);
	bool __fastcall GetGrayed(void);
	bool __fastcall GetDown(void);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	void __fastcall SetDisabledGlyphKind(const Sconst::TsDisabledGlyphKind Value);
	void __fastcall SetImages(const Imglist::TCustomImageList* Value);
	void __fastcall SetAlignment(const Classes::TAlignment Value);
	void __fastcall SetTextAlignment(const Classes::TAlignment Value);
	void __fastcall SetVerticalAlignment(const Sconst::TVerticalAlignment Value);
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall SetDown(const bool Value);
	void __fastcall SetGrayed(const bool Value);
	void __fastcall SetGlyphColorTone(const Graphics::TColor Value);
	HIDESBASE MESSAGE void __fastcall WMKeyUp(Messages::TWMKey &Message);
	HIDESBASE MESSAGE void __fastcall CNDrawItem(Messages::TWMDrawItem &Message);
	HIDESBASE MESSAGE void __fastcall WMNCHitTest(Messages::TWMNCHitTest &Message);
	void __fastcall SetFocusedColor(const Graphics::TColor Value);
	
protected:
	bool IsFocused;
	bool ControlsShifted;
	#pragma pack(push, 1)
	Types::TPoint GlyphPos;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect CaptionRect;
	#pragma pack(pop)
	
	Buttons::TButtonLayout OldLayout;
	virtual Graphics::TColor __fastcall GetColorTone(void);
	void __fastcall StdDrawItem(const tagDRAWITEMSTRUCT &DrawItemStruct);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	void __fastcall OurPaintHandler(HDC aDC);
	void __fastcall DoDrawText(Types::TRect &Rect, unsigned Flags, bool CanGlow);
	void __fastcall DrawCaption(const Acnttypes::TacColoring &Coloring, Graphics::TCanvas* Canvas = (Graphics::TCanvas*)(0x0));
	void __fastcall ShiftControls(int Offset);
	tagSIZE __fastcall TextRectSize();
	int __fastcall GlyphWidth(void);
	int __fastcall GlyphHeight(void);
	bool __fastcall PrepareCache(void);
	void __fastcall GetColoring(Acnttypes::TacColoring &Coloring);
	
public:
	virtual Imglist::TCustomImageList* __fastcall GetImages(void);
	virtual int __fastcall CurrentImageIndex(void);
	DYNAMIC bool __fastcall UseRightToLeftAlignment(void);
	__fastcall virtual TsBitBtn(Classes::TComponent* AOwner);
	virtual void __fastcall AfterConstruction(void);
	virtual int __fastcall CurrentState(void);
	__fastcall virtual ~TsBitBtn(void);
	virtual void __fastcall Loaded(void);
	Types::TRect __fastcall ImgRect();
	virtual void __fastcall Invalidate(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
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
	__property Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=2};
	__property Sconst::TacAnimatEvents AnimatEvents = {read=FAnimatEvents, write=FAnimatEvents, default=16};
	__property Sconst::TsDisabledGlyphKind DisabledGlyphKind = {read=FDisabledGlyphKind, write=SetDisabledGlyphKind, default=0};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property Graphics::TColor FocusedColor = {read=FFocusedColor, write=SetFocusedColor, default=536870911};
	__property Graphics::TColor GlyphColorTone = {read=FGlyphColorTone, write=SetGlyphColorTone, default=536870911};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property Sconst::TVerticalAlignment VerticalAlignment = {read=FVerticalAlignment, write=SetVerticalAlignment, default=2};
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property Classes::TAlignment TextAlignment = {read=FTextAlignment, write=SetTextAlignment, default=2};
	__property Margin  = {default=-1};
	__property bool WordWrap = {read=FWordWrap, write=SetWordWrap, default=1};
	__property Acnttypes::TacGetColoring OnGetColoring = {read=FOnGetColoring, write=FOnGetColoring};
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TsBitBtn(HWND ParentWindow) : Buttons::TBitBtn(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Sbitbtn */
using namespace Sbitbtn;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sBitBtn
