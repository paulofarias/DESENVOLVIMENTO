// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sCommonData.pas' rev: 6.00

#ifndef sCommonDataHPP
#define sCommonDataHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acThdTimer.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <sLabel.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <acntUtils.hpp>	// Pascal unit
#include <sSkinManager.hpp>	// Pascal unit
#include <sDefaults.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Scommondata
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacOuterEffects;
class DELPHICLASS TsCommonData;
class PASCALIMPLEMENTATION TsCommonData : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Sskinmanager::TacSkinData* FCommonSkinData;
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall SetCommonSkinData(const Sskinmanager::TacSkinData* Value);
	bool __fastcall SectionStored(void);
	
protected:
	bool FCustomFont;
	bool FCustomColor;
	Graphics::TBitmap* FOuterCache;
	AnsiString FSkinSection;
	Sskinmanager::TsSkinManager* FSkinManager;
	TacOuterEffects* FOuterEffects;
	bool __fastcall GetUpdating(void);
	void __fastcall SetSkinSection(const AnsiString Value);
	void __fastcall SetColorTone(const Graphics::TColor Value);
	void __fastcall SetSkinManager(const Sskinmanager::TsSkinManager* Value);
	void __fastcall PaintOuter(Sconst::PacBGInfo PBGInfo, Word Data);
	Sskinmanager::TsSkinManager* __fastcall GetSkinManager(void);
	Sskinmanager::TacSkinData* __fastcall GetCommonSkinData(void);
	bool __fastcall ManagerStored(void);
	
public:
	Graphics::TColor FColorTone;
	Graphics::TColor SavedColor;
	Graphics::TColor SavedFontColor;
	bool FFocused;
	bool FUpdating;
	bool FMouseAbove;
	bool HalfVisible;
	bool Loading;
	Byte COC;
	int GlowID;
	int PPIIndex;
	int FHUEOffset;
	int FSaturation;
	int CurrentPPI;
	int FUpdateCount;
	HDC PrintDC;
	Graphics::TBitmap* FCacheBmp;
	unsigned FSWHandle;
	Classes::TWndMethod WndProc;
	System::TObject* FOwnerObject;
	Acthdtimer::TacThreadedTimer* AnimTimer;
	Word BGType;
	unsigned CtrlSkinState;
	#pragma pack(push, 1)
	Types::TRect InvalidRectH;
	#pragma pack(pop)
	
	#pragma pack(push, 1)
	Types::TRect InvalidRectV;
	#pragma pack(pop)
	
	bool BGChanged;
	int SkinIndex;
	Controls::TControl* FOwnerControl;
	__property bool Updating = {read=GetUpdating, write=FUpdating, default=0};
	__fastcall virtual TsCommonData(System::TObject* AOwner, const bool CreateCacheBmp);
	void __fastcall UpdateIndexes(bool UpdateMain = true);
	void __fastcall PaintOuterEffects(Controls::TWinControl* OwnerCtrl, const Types::TPoint &Offset);
	__fastcall virtual ~TsCommonData(void);
	void __fastcall InitCommonProp(void);
	void __fastcall RemoveCommonProp(void);
	bool __fastcall RepaintIfMoved(void);
	void __fastcall ClearLinks(void);
	void __fastcall Loaded(bool UpdateColors = true);
	unsigned __fastcall OwnerHandle(void);
	void __fastcall BeginUpdate(void);
	void __fastcall EndUpdate(const bool Repaint = false);
	void __fastcall Invalidate(const bool UpdateNow = false);
	bool __fastcall Skinned(const bool CheckSkinActive = false);
	__property Sskinmanager::TacSkinData* CommonSkinData = {read=GetCommonSkinData, write=SetCommonSkinData};
	__property int HUEOffset = {read=FHUEOffset, write=SetInteger, index=0, default=0};
	__property int Saturation = {read=FSaturation, write=SetInteger, index=1, default=0};
	__property Graphics::TColor ColorTone = {read=FColorTone, write=SetColorTone, default=536870911};
	
__published:
	__property bool CustomColor = {read=FCustomColor, write=SetBoolean, index=0, default=0};
	__property bool CustomFont = {read=FCustomFont, write=SetBoolean, index=1, default=0};
	__property Sskinmanager::TsSkinManager* SkinManager = {read=GetSkinManager, write=SetSkinManager, stored=ManagerStored};
	__property AnsiString SkinSection = {read=FSkinSection, write=SetSkinSection, stored=SectionStored};
	__property TacOuterEffects* OuterEffects = {read=FOuterEffects, write=FOuterEffects};
};


class PASCALIMPLEMENTATION TacOuterEffects : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
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
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacOuterEffects(void) { }
	#pragma option pop
	
};


class DELPHICLASS TsCtrlSkinData;
class PASCALIMPLEMENTATION TsCtrlSkinData : public TsCommonData 
{
	typedef TsCommonData inherited;
	
__published:
	__property HUEOffset  = {index=0, default=0};
	__property Saturation  = {index=1, default=0};
	__property ColorTone  = {default=536870911};
public:
	#pragma option push -w-inl
	/* TsCommonData.Create */ inline __fastcall virtual TsCtrlSkinData(System::TObject* AOwner, const bool CreateCacheBmp) : TsCommonData(AOwner, CreateCacheBmp) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TsCommonData.Destroy */ inline __fastcall virtual ~TsCtrlSkinData(void) { }
	#pragma option pop
	
};


class DELPHICLASS TacScrollData;
class PASCALIMPLEMENTATION TacScrollData : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
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
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacScrollData(void) { }
	#pragma option pop
	
};


class DELPHICLASS TsScrollWndData;
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


class DELPHICLASS TsBoundLabel;
class PASCALIMPLEMENTATION TsBoundLabel : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	int FOffset;
	int FIndent;
	int FMaxWidth;
	int CurrentPPI;
	bool FUseHTML;
	bool FParentFont;
	bool FAllowClick;
	bool FEnabledAlways;
	Graphics::TFont* FFont;
	AnsiString FText;
	Sconst::TsCaptionLayout FLayout;
	void __fastcall UpdateAlignment(void);
	bool __fastcall GetUseSkin(void);
	void __fastcall DoClick(System::TObject* Sender);
	void __fastcall SetFont(const Graphics::TFont* Value);
	void __fastcall SetUseSkin(const bool Value);
	void __fastcall SetText(const AnsiString Value);
	void __fastcall SetLayout(const Sconst::TsCaptionLayout Value);
	void __fastcall SetInteger(const int Index, const int Value);
	void __fastcall SetBoolean(const int Index, const bool Value);
	void __fastcall SetParentFont(const bool Value);
	
public:
	bool FActive;
	Slabel::TsEditLabel* FTheLabel;
	Controls::TControl* FOwnerControl;
	TsCommonData* FCommonData;
	void __fastcall AlignLabel(void);
	void __fastcall UpdateVisibility(void);
	void __fastcall UpdateFontOnce(bool ForceScaleUpdate = false);
	bool __fastcall DoStoreFont(void);
	__fastcall TsBoundLabel(System::TObject* AOwner, const TsCommonData* CommonData)/* overload */;
	__fastcall virtual ~TsBoundLabel(void);
	void __fastcall UpdateScale(int NewValue);
	void __fastcall HandleOwnerMsg(const Messages::TMessage &Message, const Controls::TControl* OwnerControl);
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
	__property AnsiString Caption = {read=FText, write=SetText};
	__property Graphics::TFont* Font = {read=FFont, write=SetFont, stored=DoStoreFont};
	__property Sconst::TsCaptionLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property bool ParentFont = {read=FParentFont, write=SetParentFont, default=1};
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE Sconst::TsColor C1;
extern PACKAGE Sconst::TsColor C2;
extern PACKAGE bool RestrictDrawing;
extern PACKAGE void __fastcall StopTimer(TsCommonData* SkinData)/* overload */;
extern PACKAGE void __fastcall StopTimer(Acthdtimer::TacThreadedTimer* &Timer)/* overload */;
extern PACKAGE void __fastcall FinishTimer(Acthdtimer::TacThreadedTimer* ATimer);
extern PACKAGE bool __fastcall TimerIsActive(TsCommonData* SkinData);
extern PACKAGE int __fastcall CurrentScale(const TsCommonData* SkinData);
extern PACKAGE int __fastcall ScaleInt(int Value, TsCommonData* SkinData = (TsCommonData*)(0x0), bool CalcVCLMode = true);
extern PACKAGE int __fastcall GetPPI(const TsCommonData* SkinData);
extern PACKAGE Sskinmanager::TacSkinData* __fastcall GetSkinData(const TsCommonData* SkinData, int PPI = 0x0);
extern PACKAGE TsCommonData* __fastcall GetCommonData(const HWND AHandle);
extern PACKAGE bool __fastcall CanClickShift(int SkinIndex, Sskinmanager::TacSkinData* CommonSkinData);
extern PACKAGE bool __fastcall WndIsSkinned(const unsigned AHandle);
extern PACKAGE bool __fastcall CtrlIsSkinned(const Controls::TControl* AControl, bool CheckActive = false);
extern PACKAGE bool __fastcall HaveOuterEffects(TsCommonData* SkinData);
extern PACKAGE bool __fastcall InUpdating(const TsCommonData* SkinData, const bool Reset = false);
extern PACKAGE void __fastcall InitBGType(const TsCommonData* SkinData);
extern PACKAGE void __fastcall InitBGInfo(const TsCommonData* SkinData, const Sconst::PacBGInfo PBGInfo, const int State, unsigned Handle = (unsigned)(0x0));
extern PACKAGE Graphics::TColor __fastcall GetBGColor(const TsCommonData* SkinData, const int State, const unsigned Handle = (unsigned)(0x0));
extern PACKAGE int __fastcall GetFontIndex(const Controls::TControl* Ctrl, const int DefSkinIndex, const Sskinmanager::TsSkinManager* SkinManager, const int State = 0x0)/* overload */;
extern PACKAGE int __fastcall GetFontIndex(const Controls::TControl* Ctrl, Sconst::PacPaintInfo pInfo)/* overload */;
extern PACKAGE int __fastcall GetFontIndex(const unsigned CtrlHandle, Sconst::PacPaintInfo pInfo)/* overload */;
extern PACKAGE Graphics::TColor __fastcall GetFontColor(const Controls::TControl* Ctrl, const int DefSkinIndex, const Sskinmanager::TsSkinManager* SkinManager, const int State = 0x0, TsCommonData* SkinData = (TsCommonData*)(0x0))/* overload */;
extern PACKAGE Graphics::TColor __fastcall GetFontColor(const unsigned CtrlHandle, const int DefSkinIndex, const Sskinmanager::TsSkinManager* SkinManager, const int State = 0x0)/* overload */;
extern PACKAGE void __fastcall ShowGlowingIfNeeded(const TsCommonData* SkinData, const bool Clicked = false, const HWND CtrlHandle = (HWND)(0x0), Byte Alpha = (Byte)(0xff), bool DoAnimation = false, int ASkinIndex = 0xffffffff);
extern PACKAGE void __fastcall UpdateBmpColors(Graphics::TBitmap* Bmp, TsCommonData* SkinData, bool CheckCorners, int State, Graphics::TColor ColorToneBG);
extern PACKAGE void __fastcall InitCacheBmp(const TsCommonData* SkinData);
extern PACKAGE int __fastcall SkinBorderMaxWidth(const TsCommonData* SkinData);
extern PACKAGE Sconst::TCacheInfo __fastcall GetParentCache(const TsCommonData* SkinData);
extern PACKAGE Sconst::TCacheInfo __fastcall GetParentCacheHwnd(const HWND cHwnd);
extern PACKAGE void __fastcall InvalidateParentCache(TsCommonData* SkinData);
extern PACKAGE void __fastcall InitIndexes(const TsCommonData* SkinData, const AnsiString * Sections, const int Sections_Size);
extern PACKAGE void __fastcall UpdateData(const TsCommonData* SkinData);
extern PACKAGE void __fastcall UpdateControlColors(TsCommonData* SkinData, bool AllowRepaint = true);
extern PACKAGE bool __fastcall ControlIsActive(const TsCommonData* SkinData);
extern PACKAGE bool __fastcall ChildBgIsChanged(TsCommonData* SkinData);
extern PACKAGE bool __fastcall NeedParentFont(TsCommonData* SkinData, int State)/* overload */;
extern PACKAGE bool __fastcall NeedParentFont(Sskinmanager::TsSkinManager* SkinManager, int SkinIndex, int State, Controls::TControl* Ctrl = (Controls::TControl*)(0x0))/* overload */;
extern PACKAGE HRGN __fastcall GetRgnFromSkin(int ASectionIndex, const tagSIZE &CtrlSize, Sskinmanager::TacSkinData* sd);
extern PACKAGE HRGN __fastcall GetTransCornersRgn(int ASectionIndex, Graphics::TBitmap* aBmp, Sskinmanager::TacSkinData* sd);
extern PACKAGE bool __fastcall FullRepaintOnly(TsCommonData* SkinData);
extern PACKAGE bool __fastcall CommonMessage(Messages::TMessage &Message, TsCommonData* SkinData);
extern PACKAGE bool __fastcall acMouseInWnd(unsigned Handle);
extern PACKAGE bool __fastcall CommonWndProc(Messages::TMessage &Message, TsCommonData* SkinData);
extern PACKAGE void __fastcall CopyWinControlCache(const Controls::TWinControl* Control, const TsCommonData* SkinData, const Types::TRect &SrcRect, const Types::TRect &DstRect, const HDC DstDC, const bool UpdateCorners, const int OffsetX = 0x0, const int OffsetY = 0x0)/* overload */;
extern PACKAGE void __fastcall CopyHwndCache(const unsigned hwnd, const TsCommonData* SkinData, const Types::TRect &SrcRect, const Types::TRect &DstRect, const HDC DstDC, const bool UpdateCorners, const int OffsetX = 0x0, const int OffsetY = 0x0)/* overload */;
extern PACKAGE bool __fastcall SkinIsChanging(const TsCommonData* SkinData);

}	/* namespace Scommondata */
using namespace Scommondata;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sCommonData
