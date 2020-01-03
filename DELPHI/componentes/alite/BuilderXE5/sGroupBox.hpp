// CodeGear C++Builder
// Copyright (c) 1995, 2013 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sGroupBox.pas' rev: 26.00 (Windows)

#ifndef SgroupboxHPP
#define SgroupboxHPP

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
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sgroupbox
{
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TsCaptionLayout : unsigned char { clTopLeft, clTopCenter, clTopRight };

enum DECLSPEC_DENUM TacChangeState : unsigned char { csNone, csAsChecked, csAsNotChecked };

enum DECLSPEC_DENUM TacBoxStyle : unsigned char { bsDefault, bsStandard, bsCard };

class DELPHICLASS TsMargin;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TsMargin : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Sconst::TacIntProperty FTop;
	Sconst::TacIntProperty FLeft;
	Sconst::TacIntProperty FRight;
	Sconst::TacIntProperty FBottom;
	Vcl::Controls::TControl* FControl;
	void __fastcall SetMargin(const int Index, Sconst::TacIntProperty Value);
	
public:
	__fastcall TsMargin(Vcl::Controls::TControl* Control);
	
__published:
	__property Sconst::TacIntProperty Left = {read=FLeft, write=SetMargin, index=0, default=2};
	__property Sconst::TacIntProperty Top = {read=FTop, write=SetMargin, index=1, default=0};
	__property Sconst::TacIntProperty Right = {read=FRight, write=SetMargin, index=2, default=2};
	__property Sconst::TacIntProperty Bottom = {read=FBottom, write=SetMargin, index=3, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TsMargin(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TsGroupBox;
class PASCALIMPLEMENTATION TsGroupBox : public Vcl::Stdctrls::TGroupBox
{
	typedef Vcl::Stdctrls::TGroupBox inherited;
	
private:
	bool FChecked;
	bool FCheckBoxVisible;
	int FImageIndex;
	int FCaptionYOffset;
	TsMargin* FCaptionMargin;
	Scommondata::TsCommonData* FCommonData;
	System::UnicodeString FCaptionSkin;
	Sconst::TacIntProperty FCaptionWidth;
	TsCaptionLayout FCaptionLayout;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	System::Classes::TNotifyEvent FOnCheckBoxChanged;
	TacChangeState FAutoChildrenStates;
	TacBoxStyle FBoxStyle;
	virtual void __fastcall CaptionChanged(void);
	MESSAGE void __fastcall WMFontChanged(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Message);
	void __fastcall SetCaptionSkin(const System::UnicodeString Value);
	void __fastcall SetCaptionWidth(const Sconst::TacIntProperty Value);
	void __fastcall SetCaptionLayout(const TsCaptionLayout Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	virtual void __fastcall SetInteger(const int Index, const int Value);
	virtual void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall SetBoxStyle(const TacBoxStyle Value);
	
protected:
	bool CheckHot;
	bool CheckPressed;
	System::Types::TRect TopRect;
	System::Types::TRect TextRect;
	System::Types::TRect GlyphRect;
	System::Types::TRect CheckBoxRect;
	int TextIndex;
	System::Types::TRect CaptionRect;
	int CaptionHeight;
	void __fastcall PaintToDC(HDC DC);
	bool __fastcall ImageExists(void);
	void __fastcall WriteText(const System::Types::TRect &R);
	bool __fastcall PrepareCache(void);
	bool __fastcall ModernStyle(void);
	void __fastcall PaintCaptionArea(const System::Types::TRect &cRect, const Sconst::TCacheInfo &CI, int AState);
	void __fastcall InitPaintData(void);
	int __fastcall TextHeight(void);
	int __fastcall CheckBoxIndex(void);
	int __fastcall CheckBoxWidth(void);
	int __fastcall CheckBoxHeight(void);
	bool __fastcall MouseInCheckBox(void);
	virtual void __fastcall CheckBoxChanged(void);
	void __fastcall ImageListChange(System::TObject* Sender);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall AdjustClientRect(System::Types::TRect &Rect);
	void __fastcall PaintCheckBoxSkin(Vcl::Graphics::TBitmap* Bmp, const System::Types::TRect &R, int State);
	void __fastcall PaintCheckBoxStd(HDC DC, const System::Types::TRect &R, int State);
	void __fastcall RepaintCheckBox(int State, bool DoAnimation = false);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	virtual void __fastcall Paint(void);
	virtual void __fastcall Loaded(void);
	__fastcall virtual ~TsGroupBox(void);
	virtual void __fastcall AfterConstruction(void);
	__fastcall virtual TsGroupBox(System::Classes::TComponent* AOwner);
	void __fastcall UpdateAccessibilities(void);
	
__published:
	__property TsCaptionLayout CaptionLayout = {read=FCaptionLayout, write=SetCaptionLayout, default=0};
	__property TsMargin* CaptionMargin = {read=FCaptionMargin, write=FCaptionMargin};
	__property Scommondata::TsCommonData* SkinData = {read=FCommonData, write=FCommonData};
	__property System::UnicodeString CaptionSkin = {read=FCaptionSkin, write=SetCaptionSkin};
	__property Sconst::TacIntProperty CaptionWidth = {read=FCaptionWidth, write=SetCaptionWidth, default=0};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property TacChangeState AutoChildrenStates = {read=FAutoChildrenStates, write=FAutoChildrenStates, default=0};
	__property int CaptionYOffset = {read=FCaptionYOffset, write=SetInteger, index=0, default=0};
	__property int ImageIndex = {read=FImageIndex, write=SetInteger, index=1, default=-1};
	__property bool CheckBoxVisible = {read=FCheckBoxVisible, write=SetBoolean, index=0, default=0};
	__property bool Checked = {read=FChecked, write=SetBoolean, index=1, default=0};
	__property TacBoxStyle BoxStyle = {read=FBoxStyle, write=SetBoxStyle, default=0};
	__property Touch;
	__property System::Classes::TNotifyEvent OnCheckBoxChanged = {read=FOnCheckBoxChanged, write=FOnCheckBoxChanged};
	__property OnKeyDown;
	__property OnKeyPress;
public:
	/* TWinControl.CreateParented */ inline __fastcall TsGroupBox(HWND ParentWindow) : Vcl::Stdctrls::TGroupBox(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Sgroupbox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SGROUPBOX)
using namespace Sgroupbox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SgroupboxHPP
