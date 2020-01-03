// CodeGear C++Builder
// Copyright (c) 1995, 2012 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sCheckBox.pas' rev: 24.00 (Windows)

#ifndef ScheckboxHPP
#define ScheckboxHPP

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
#include <System.Types.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sDefaults.hpp>	// Pascal unit
#include <sFade.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Scheckbox
{
//-- type declarations -------------------------------------------------------
typedef int TsImageIndex;

class DELPHICLASS TsCheckBox;
class PASCALIMPLEMENTATION TsCheckBox : public Vcl::Stdctrls::TCustomCheckBox
{
	typedef Vcl::Stdctrls::TCustomCheckBox inherited;
	
private:
	bool FPressed;
	bool FShowFocus;
	int FMargin;
	int FTextIndent;
	Vcl::Graphics::TBitmap* FGlyphChecked;
	Vcl::Graphics::TBitmap* FGlyphUnChecked;
	int FImgGrayed;
	int FImgChecked;
	int FImgUnchecked;
	Sconst::TvaAlign FVerticalAlign;
	Scommondata::TsCommonData* FCommonData;
	Vcl::Imglist::TCustomImageList* FImages;
	Sconst::TsDisabledKind FDisabledKind;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	Sconst::TacAnimatEvents FAnimatEvents;
	System::Classes::TNotifyEvent FOnValueChanged;
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	void __fastcall SetGlyphChecked(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetGlyphUnChecked(Vcl::Graphics::TBitmap* const Value);
	void __fastcall SetTextIndent(const int Value);
	void __fastcall SetShowFocus(const bool Value);
	void __fastcall SetMargin(const int Value);
	void __fastcall SetReadOnly(const bool Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetVerticalAlign(const Sconst::TvaAlign Value);
	void __fastcall SetImageIndex(const int Index, const int Value);
	void __fastcall ImageListChange(System::TObject* Sender);
	
protected:
	bool FReadOnly;
	bool __fastcall GetReadOnly(void);
	virtual bool __fastcall CanAutoSize(int &NewWidth, int &NewHeight);
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	virtual void __fastcall SetChecked(bool Value);
	HIDESBASE void __fastcall PaintHandler(const Winapi::Messages::TWMPaint &M _ANNOT_ATTR_NC);
	void __fastcall StdPaintHandler(const Winapi::Messages::TWMPaint &M _ANNOT_ATTR_NC);
	void __fastcall PaintControl(HDC DC);
	void __fastcall StdPaintControl(HDC aDC);
	void __fastcall PaintStdBG(void);
	bool __fastcall CustomGlyph(void);
	void __fastcall DrawCheckText(void);
	void __fastcall DrawCheckArea(void);
	void __fastcall DrawSkinGlyph(int i);
	int __fastcall PaintCtrlState(void);
	void __fastcall PaintGlyph(Vcl::Graphics::TBitmap* Bmp, const int Index);
	int __fastcall SkinGlyphHeight(int i);
	int __fastcall SkinGlyphWidth(int i);
	System::Types::TRect __fastcall SkinCheckRect(int i);
	Vcl::Graphics::TBitmap* __fastcall Glyph(void);
	System::Types::TSize __fastcall CheckSize(void);
	System::Types::TRect __fastcall CheckRect(bool LeftAligned);
	System::Types::TSize __fastcall CustomGlyphSize(void);
	bool __fastcall PrepareCache(void);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	DYNAMIC System::Classes::TAlignment __fastcall GetControlsAlignment(void);
	virtual void __fastcall AfterConstruction(void);
	__fastcall virtual TsCheckBox(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsCheckBox(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall WndProc(Winapi::Messages::TMessage &Message);
	
__published:
	__property Caption = {default=0};
	__property Action;
	__property Align = {default=0};
	__property Alignment = {default=1};
	__property AllowGrayed = {default=0};
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BiDiMode;
	__property Checked = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property State = {default=0};
	__property StyleElements = {default=7};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
	__property int Margin = {read=FMargin, write=SetMargin, default=0};
	__property int ImgChecked = {read=FImgChecked, write=SetImageIndex, index=0, default=0};
	__property int ImgUnchecked = {read=FImgUnchecked, write=SetImageIndex, index=1, default=0};
	__property int ImgGrayed = {read=FImgGrayed, write=SetImageIndex, index=2, default=0};
	__property Vcl::Graphics::TBitmap* GlyphChecked = {read=FGlyphChecked, write=SetGlyphChecked};
	__property Vcl::Graphics::TBitmap* GlyphUnChecked = {read=FGlyphUnChecked, write=SetGlyphUnChecked};
	__property Sconst::TacAnimatEvents AnimatEvents = {read=FAnimatEvents, write=FAnimatEvents, default=16};
	__property Scommondata::TsCommonData* SkinData = {read=FCommonData, write=FCommonData};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property bool ShowFocus = {read=FShowFocus, write=SetShowFocus, default=1};
	__property int TextIndent = {read=FTextIndent, write=SetTextIndent, default=4};
	__property WordWrap = {default=0};
	__property Sconst::TvaAlign VerticalAlign = {read=FVerticalAlign, write=SetVerticalAlign, default=1};
	__property System::Classes::TNotifyEvent OnValueChanged = {read=FOnValueChanged, write=FOnValueChanged};
	__property OnMouseEnter;
	__property OnMouseLeave;
public:
	/* TWinControl.CreateParented */ inline __fastcall TsCheckBox(HWND ParentWindow) : Vcl::Stdctrls::TCustomCheckBox(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int PaintState;
}	/* namespace Scheckbox */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SCHECKBOX)
using namespace Scheckbox;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ScheckboxHPP
