// CodeGear C++Builder
// Copyright (c) 1995, 2013 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sGauge.pas' rev: 25.00 (Windows)

#ifndef SgaugeHPP
#define SgaugeHPP

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
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sGraphUtils.hpp>	// Pascal unit
#include <sVclUtils.hpp>	// Pascal unit
#include <acntUtils.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <acPNG.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sgauge
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TsGaugeKind : unsigned char { gkText, gkHorizontalBar, gkVerticalBar, gkPie, gkNeedle };

typedef void __fastcall (__closure *TPrintTextEvent)(System::TObject* Sender, System::UnicodeString &TextToPrint);

class DELPHICLASS TsGauge;
class PASCALIMPLEMENTATION TsGauge : public Vcl::Controls::TGraphicControl
{
	typedef Vcl::Controls::TGraphicControl inherited;
	
private:
	__int64 FMinValue;
	__int64 FMaxValue;
	__int64 FCurValue;
	int FAnimPos;
	int FLongTime;
	bool FShowText;
	bool FAnimated;
	bool FCalcPercents;
	Vcl::Graphics::TBitmap* Light;
	System::UnicodeString FSuffix;
	TsGaugeKind FKind;
	System::Classes::TNotifyEvent FOnChange;
	Scommondata::TsCommonData* FCommonData;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	System::UnicodeString FProgressSkin;
	TPrintTextEvent FOnPaintText;
	System::Uitypes::TColor FForeColor;
	System::Uitypes::TColor FBackColor;
	void __fastcall PaintBackground(Vcl::Graphics::TBitmap* AnImage);
	void __fastcall PaintAsText(Vcl::Graphics::TBitmap* AnImage, const System::Types::TRect &PaintRect);
	void __fastcall PaintAsNothing(Vcl::Graphics::TBitmap* AnImage, const System::Types::TRect &PaintRect);
	void __fastcall PaintAsBar(Vcl::Graphics::TBitmap* AnImage, const System::Types::TRect &PaintRect);
	void __fastcall PaintAsPie(Vcl::Graphics::TBitmap* AnImage, const System::Types::TRect &PaintRect);
	void __fastcall PaintAsNeedle(Vcl::Graphics::TBitmap* AnImage, const System::Types::TRect &PaintRect);
	void __fastcall SkinPaintAsText(const System::Types::TRect &aRect);
	void __fastcall SkinPaintAsBar(const System::Types::TRect &aRect);
	void __fastcall SkinPaintAsPie(const System::Types::TRect &aRect);
	void __fastcall SkinPaintAsNeedle(const System::Types::TRect &aRect);
	void __fastcall SkinPaintBody(const System::Types::TRect &aRect);
	void __fastcall SetGaugeKind(TsGaugeKind Value);
	__int64 __fastcall GetPercentDone(void);
	MESSAGE void __fastcall WMEraseBkGND(Winapi::Messages::TWMPaint &Message);
	void __fastcall SetSuffix(const System::UnicodeString Value);
	void __fastcall SetBorderStyle(const Vcl::Forms::TBorderStyle Value);
	void __fastcall SetProgressSkin(const System::UnicodeString Value);
	HIDESBASE void __fastcall SetColor(const int Index, const System::Uitypes::TColor Value);
	void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall SetInt64(const int Index, __int64 Value);
	
protected:
	Vcl::Extctrls::TTimer* Timer;
	Vcl::Graphics::TBitmap* FTmpCache;
	Vcl::Graphics::TBitmap* FTmpProgressBmp;
	Acpng::TPNGGraphic* LightingBmp;
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	void __fastcall TimerAction(System::TObject* Sender);
	int __fastcall AnimSize(void);
	int __fastcall AnimStep(void);
	void __fastcall UpdateLighting(void);
	
public:
	virtual void __fastcall Paint(void);
	void __fastcall PrepareCache(void);
	__fastcall virtual TsGauge(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsGauge(void);
	void __fastcall AddProgress(__int64 Value);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Loaded(void);
	__property __int64 PercentDone = {read=GetPercentDone};
	__property Color = {default=-16777211};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property Enabled = {default=1};
	__property Font;
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property TsGaugeKind Kind = {read=FKind, write=SetGaugeKind, default=1};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property bool CalcPercents = {read=FCalcPercents, write=SetBoolean, index=2, default=1};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property Scommondata::TsCommonData* SkinData = {read=FCommonData, write=FCommonData};
	__property System::Uitypes::TColor BackColor = {read=FBackColor, write=SetColor, index=0, default=16777215};
	__property System::Uitypes::TColor ForeColor = {read=FForeColor, write=SetColor, index=1, nodefault};
	__property bool Animated = {read=FAnimated, write=SetBoolean, index=0, default=1};
	__property bool ShowText = {read=FShowText, write=SetBoolean, index=1, default=1};
	__property __int64 MinValue = {read=FMinValue, write=SetInt64, index=0, default=0};
	__property __int64 MaxValue = {read=FMaxValue, write=SetInt64, index=1, default=100};
	__property __int64 Progress = {read=FCurValue, write=SetInt64, index=2};
	__property System::UnicodeString ProgressSkin = {read=FProgressSkin, write=SetProgressSkin};
	__property System::UnicodeString Suffix = {read=FSuffix, write=SetSuffix};
	__property TPrintTextEvent OnPaintText = {read=FOnPaintText, write=FOnPaintText};
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int AnimLongDelay;
}	/* namespace Sgauge */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SGAUGE)
using namespace Sgauge;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SgaugeHPP
