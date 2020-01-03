// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sCommonData.pas' rev: 29.00 (Windows)

#ifndef ScommondataHPP
#define ScommondataHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <sDefaults.hpp>
#include <sSkinManager.hpp>
#include <acntUtils.hpp>
#include <sConst.hpp>
#include <sLabel.hpp>
#include <acntTypes.hpp>
#include <acThdTimer.hpp>

//-- user supplied -----------------------------------------------------------

namespace Scommondata
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TacOuterEffects;
class DELPHICLASS TsCommonData;
class DELPHICLASS TsCtrlSkinData;
class DELPHICLASS TacScrollData;
class DELPHICLASS TsScrollWndData;
class DELPHICLASS TsBoundLabel;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TacOuterEffects : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TsCommonData* FOwner;
	Sconst::TacOuterVisibility FVisibility;
	void __fastcall SetVisibility(const Sconst::TacOuterVisibility Value);
	
public:
	void __fastcall Invalidate(void);
	__fastcall TacOuterEffects(TsCommonData* AOwner);
	
__published:
	__property Sconst::TacOuterVisibility Visibility = {read=FVisibility, write=SetVisibility, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacOuterEffects(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TsCommonData : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Sskinmanager::TacSkinData* FCommonSkinData;
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall SetCommonSkinData(Sskinmanager::TacSkinData* const Value);
	bool __fastcall SectionStored(void);
	
protected:
	bool FCustomFont;
	bool FCustomColor;
	Vcl::Graphics::TBitmap* FOuterCache;
	System::UnicodeString FSkinSection;
	Sskinmanager::TsSkinManager* FSkinManager;
	TacOuterEffects* FOuterEffects;
	bool __fastcall GetUpdating(void);
	void __fastcall SetSkinSection(const System::UnicodeString Value);
	void __fastcall SetColorTone(const System::Uitypes::TColor Value);
	void __fastcall SetSkinManager(Sskinmanager::TsSkinManager* const Value);
	void __fastcall PaintOuter(Sconst::PacBGInfo PBGInfo, System::Word Data);
	Sskinmanager::TsSkinManager* __fastcall GetSkinManager(void);
	Sskinmanager::TacSkinData* __fastcall GetCommonSkinData(void);
	bool __fastcall ManagerStored(void);
	
public:
	System::Uitypes::TColor FColorTone;
	System::Uitypes::TColor SavedColor;
	System::Uitypes::TColor SavedFontColor;
	bool FFocused;
	bool FUpdating;
	bool FMouseAbove;
	bool HalfVisible;
	bool Loading;
	System::Byte COC;
	int GlowID;
	int PPIIndex;
	int FHUEOffset;
	int FSaturation;
	int CurrentPPI;
	int FUpdateCount;
	HDC PrintDC;
	Vcl::Graphics::TBitmap* FCacheBmp;
	NativeUInt FSWHandle;
	System::Classes::TWndMethod WndProc;
	System::TObject* FOwnerObject;
	Acthdtimer::TacThreadedTimer* AnimTimer;
	System::Word BGType;
	unsigned CtrlSkinState;
	System::Types::TRect InvalidRectH;
	System::Types::TRect InvalidRectV;
	bool BGChanged;
	int SkinIndex;
	Vcl::Controls::TControl* FOwnerControl;
	__property bool Updating = {read=GetUpdating, write=FUpdating, default=0};
	__fastcall virtual TsCommonData(System::TObject* AOwner, const bool CreateCacheBmp);
	void __fastcall UpdateIndexes(bool UpdateMain = true);
	void __fastcall PaintOuterEffects(Vcl::Controls::TWinControl* OwnerCtrl, const System::Types::TPoint &Offset);
	__fastcall virtual ~TsCommonData(void);
	void __fastcall InitCommonProp(void);
	void __fastcall RemoveCommonProp(void);
	bool __fastcall RepaintIfMoved(void);
	void __fastcall ClearLinks(void);
	void __fastcall Loaded(bool UpdateColors = true);
	NativeUInt __fastcall OwnerHandle(void);
	void __fastcall BeginUpdate(void);
	void __fastcall EndUpdate(const bool Repaint = false);
	void __fastcall Invalidate(const bool UpdateNow = false);
	bool __fastcall Skinned(const bool CheckSkinActive = false);
	__property Sskinmanager::TacSkinData* CommonSkinData = {read=GetCommonSkinData, write=SetCommonSkinData};
	__property int HUEOffset = {read=FHUEOffset, write=SetInteger, index=0, default=0};
	__property int Saturation = {read=FSaturation, write=SetInteger, index=1, default=0};
	__property System::Uitypes::TColor ColorTone = {read=FColorTone, write=SetColorTone, default=536870911};
	
__published:
	__property bool CustomColor = {read=FCustomColor, write=SetBoolean, index=0, default=0};
	__property bool CustomFont = {read=FCustomFont, write=SetBoolean, index=1, default=0};
	__property Sskinmanager::TsSkinManager* SkinManager = {read=GetSkinManager, write=SetSkinManager, stored=ManagerStored};
	__property System::UnicodeString SkinSection = {read=FSkinSection, write=SetSkinSection, stored=SectionStored};
	__property TacOuterEffects* OuterEffects = {read=FOuterEffects, write=FOuterEffects};
};


class PASCALIMPLEMENTATION TsCtrlSkinData : public TsCommonData
{
	typedef TsCommonData inherited;
	
__published:
	__property HUEOffset = {index=0, default=0};
	__property Saturation = {index=1, default=0};
	__property ColorTone = {default=536870911};
public:
	/* TsCommonData.Create */ inline __fastcall virtual TsCtrlSkinData(System::TObject* AOwner, const bool CreateCacheBmp) : TsCommonData(AOwner, CreateCacheBmp) { }
	/* TsCommonData.Destroy */ inline __fastcall virtual ~TsCtrlSkinData(void) { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TacScrollData : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FScrollWidth;
	int FButtonsSize;
	void __fastcall SetSize(const int Index, const int Value);
	
protected:
	TsCommonData* FOwner;
	
public:
	__fastcall TacScrollData(TsCommonData* AOwner);
	void __fastcall Invalidate(void);
	
__published:
	__property int ScrollWidth = {read=FScrollWidth, write=SetSize, index=0, default=-1};
	__property int ButtonsSize = {read=FButtonsSize, write=SetSize, index=1, default=-1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacScrollData(void) { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TsScrollWndData : public TsCommonData
{
	typedef TsCommonData inherited;
	
private:
	TacScrollData* FHorzScrollData;
	TacScrollData* FVertScrollData;
	
public:
	__fastcall virtual TsScrollWndData(System::TObject* AOwner, const bool CreateCacheBmp);
	__fastcall virtual ~TsScrollWndData(void);
	
__published:
	__property TacScrollData* VertScrollData = {read=FVertScrollData, write=FVertScrollData};
	__property TacScrollData* HorzScrollData = {read=FHorzScrollData, write=FHorzScrollData};
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TsBoundLabel : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	int FOffset;
	int FIndent;
	int FMaxWidth;
	int CurrentPPI;
	bool FUseHTML;
	bool FParentFont;
	bool FAllowClick;
	bool FEnabledAlways;
	Vcl::Graphics::TFont* FFont;
	System::UnicodeString FText;
	Sconst::TsCaptionLayout FLayout;
	void __fastcall UpdateAlignment(void);
	bool __fastcall GetUseSkin(void);
	void __fastcall DoClick(System::TObject* Sender);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetUseSkin(const bool Value);
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetLayout(const Sconst::TsCaptionLayout Value);
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall SetParentFont(const bool Value);
	
public:
	bool FActive;
	Slabel::TsEditLabel* FTheLabel;
	Vcl::Controls::TControl* FOwnerControl;
	TsCommonData* FCommonData;
	void __fastcall AlignLabel(void);
	void __fastcall UpdateVisibility(void);
	void __fastcall UpdateFontOnce(bool ForceScaleUpdate = false);
	bool __fastcall DoStoreFont(void);
	__fastcall TsBoundLabel(System::TObject* AOwner, TsCommonData* const CommonData)/* overload */;
	__fastcall virtual ~TsBoundLabel(void);
	void __fastcall UpdateScale(int NewValue);
	void __fastcall HandleOwnerMsg(const Winapi::Messages::TMessage &Message, Vcl::Controls::TControl* const OwnerControl);
	void __fastcall FontChanged(System::TObject* Sender);
	
__published:
	__property bool UseHTML = {read=FUseHTML, write=SetBoolean, index=0, default=0};
	__property bool Active = {read=FActive, write=SetBoolean, index=1, default=0};
	__property bool AllowClick = {read=FAllowClick, write=SetBoolean, index=2, default=0};
	__property bool EnabledAlways = {read=FEnabledAlways, write=SetBoolean, index=3, default=0};
	__property bool UseSkinColor = {read=GetUseSkin, write=SetUseSkin, default=1};
	__property int Indent = {read=FIndent, write=SetInteger, index=0, default=0};
	__property int MaxWidth = {read=FMaxWidth, write=SetInteger, index=1, default=0};
	__property int Offset = {read=FOffset, write=SetInteger, index=2, default=0};
	__property System::UnicodeString Caption = {read=FText, write=SetText};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont, stored=DoStoreFont};
	__property Sconst::TsCaptionLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property bool ParentFont = {read=FParentFont, write=SetParentFont, default=1};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Sconst::TsColor C1;
extern DELPHI_PACKAGE Sconst::TsColor C2;
extern DELPHI_PACKAGE bool RestrictDrawing;
extern DELPHI_PACKAGE void __fastcall StopTimer(TsCommonData* SkinData)/* overload */;
extern DELPHI_PACKAGE void __fastcall StopTimer(Acthdtimer::TacThreadedTimer* &Timer)/* overload */;
extern DELPHI_PACKAGE void __fastcall FinishTimer(Acthdtimer::TacThreadedTimer* ATimer);
extern DELPHI_PACKAGE bool __fastcall TimerIsActive(TsCommonData* SkinData);
extern DELPHI_PACKAGE int __fastcall CurrentScale(TsCommonData* const SkinData);
extern DELPHI_PACKAGE int __fastcall ScaleInt(int Value, TsCommonData* SkinData = (TsCommonData*)(0x0), bool CalcVCLMode = true);
extern DELPHI_PACKAGE int __fastcall GetPPI(TsCommonData* const SkinData);
extern DELPHI_PACKAGE Sskinmanager::TacSkinData* __fastcall GetSkinData(TsCommonData* const SkinData, int PPI = 0x0);
extern DELPHI_PACKAGE TsCommonData* __fastcall GetCommonData(const HWND AHandle);
extern DELPHI_PACKAGE bool __fastcall CanClickShift(int SkinIndex, Sskinmanager::TacSkinData* CommonSkinData);
extern DELPHI_PACKAGE bool __fastcall WndIsSkinned(const NativeUInt AHandle);
extern DELPHI_PACKAGE bool __fastcall CtrlIsSkinned(Vcl::Controls::TControl* const AControl, bool CheckActive = false);
extern DELPHI_PACKAGE bool __fastcall HaveOuterEffects(TsCommonData* SkinData);
extern DELPHI_PACKAGE bool __fastcall InUpdating(TsCommonData* const SkinData, const bool Reset = false);
extern DELPHI_PACKAGE void __fastcall InitBGType(TsCommonData* const SkinData);
extern DELPHI_PACKAGE void __fastcall InitBGInfo(TsCommonData* const SkinData, const Sconst::PacBGInfo PBGInfo, const int State, NativeUInt Handle = (NativeUInt)(0x0));
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GetBGColor(TsCommonData* const SkinData, const int State, const NativeUInt Handle = (NativeUInt)(0x0));
extern DELPHI_PACKAGE int __fastcall GetFontIndex(Vcl::Controls::TControl* const Ctrl, const int DefSkinIndex, Sskinmanager::TsSkinManager* const SkinManager, const int State = 0x0)/* overload */;
extern DELPHI_PACKAGE int __fastcall GetFontIndex(Vcl::Controls::TControl* const Ctrl, Sconst::PacPaintInfo pInfo)/* overload */;
extern DELPHI_PACKAGE int __fastcall GetFontIndex(const NativeUInt CtrlHandle, Sconst::PacPaintInfo pInfo)/* overload */;
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GetFontColor(Vcl::Controls::TControl* const Ctrl, const int DefSkinIndex, Sskinmanager::TsSkinManager* const SkinManager, const int State = 0x0, TsCommonData* SkinData = (TsCommonData*)(0x0))/* overload */;
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GetFontColor(const NativeUInt CtrlHandle, const int DefSkinIndex, Sskinmanager::TsSkinManager* const SkinManager, const int State = 0x0)/* overload */;
extern DELPHI_PACKAGE void __fastcall ShowGlowingIfNeeded(TsCommonData* const SkinData, const bool Clicked = false, const HWND CtrlHandle = (HWND)(0x0), System::Byte Alpha = (System::Byte)(0xff), bool DoAnimation = false, int ASkinIndex = 0xffffffff);
extern DELPHI_PACKAGE void __fastcall UpdateBmpColors(Vcl::Graphics::TBitmap* Bmp, TsCommonData* SkinData, bool CheckCorners, int State, System::Uitypes::TColor ColorToneBG);
extern DELPHI_PACKAGE void __fastcall InitCacheBmp(TsCommonData* const SkinData);
extern DELPHI_PACKAGE int __fastcall SkinBorderMaxWidth(TsCommonData* const SkinData);
extern DELPHI_PACKAGE Sconst::TCacheInfo __fastcall GetParentCache(TsCommonData* const SkinData);
extern DELPHI_PACKAGE Sconst::TCacheInfo __fastcall GetParentCacheHwnd(const HWND cHwnd);
extern DELPHI_PACKAGE void __fastcall InvalidateParentCache(TsCommonData* SkinData);
extern DELPHI_PACKAGE void __fastcall InitIndexes(TsCommonData* const SkinData, System::UnicodeString const *Sections, const int Sections_High);
extern DELPHI_PACKAGE void __fastcall UpdateData(TsCommonData* const SkinData);
extern DELPHI_PACKAGE void __fastcall UpdateControlColors(TsCommonData* SkinData, bool AllowRepaint = true);
extern DELPHI_PACKAGE bool __fastcall ControlIsActive(TsCommonData* const SkinData);
extern DELPHI_PACKAGE bool __fastcall ChildBgIsChanged(TsCommonData* SkinData);
extern DELPHI_PACKAGE bool __fastcall NeedParentFont(TsCommonData* SkinData, int State)/* overload */;
extern DELPHI_PACKAGE bool __fastcall NeedParentFont(Sskinmanager::TsSkinManager* SkinManager, int SkinIndex, int State, Vcl::Controls::TControl* Ctrl = (Vcl::Controls::TControl*)(0x0))/* overload */;
extern DELPHI_PACKAGE HRGN __fastcall GetRgnFromSkin(int ASectionIndex, const System::Types::TSize &CtrlSize, Sskinmanager::TacSkinData* sd);
extern DELPHI_PACKAGE HRGN __fastcall GetTransCornersRgn(int ASectionIndex, Vcl::Graphics::TBitmap* aBmp, Sskinmanager::TacSkinData* sd);
extern DELPHI_PACKAGE bool __fastcall FullRepaintOnly(TsCommonData* SkinData);
extern DELPHI_PACKAGE bool __fastcall CommonMessage(Winapi::Messages::TMessage &Message, TsCommonData* SkinData);
extern DELPHI_PACKAGE bool __fastcall acMouseInWnd(NativeUInt Handle);
extern DELPHI_PACKAGE bool __fastcall CommonWndProc(Winapi::Messages::TMessage &Message, TsCommonData* SkinData);
extern DELPHI_PACKAGE void __fastcall CopyWinControlCache(Vcl::Controls::TWinControl* const Control, TsCommonData* const SkinData, const System::Types::TRect &SrcRect, const System::Types::TRect &DstRect, const HDC DstDC, const bool UpdateCorners, const int OffsetX = 0x0, const int OffsetY = 0x0)/* overload */;
extern DELPHI_PACKAGE void __fastcall CopyHwndCache(const NativeUInt hwnd, TsCommonData* const SkinData, const System::Types::TRect &SrcRect, const System::Types::TRect &DstRect, const HDC DstDC, const bool UpdateCorners, const int OffsetX = 0x0, const int OffsetY = 0x0)/* overload */;
extern DELPHI_PACKAGE bool __fastcall SkinIsChanging(TsCommonData* const SkinData);
}	/* namespace Scommondata */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SCOMMONDATA)
using namespace Scommondata;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ScommondataHPP
