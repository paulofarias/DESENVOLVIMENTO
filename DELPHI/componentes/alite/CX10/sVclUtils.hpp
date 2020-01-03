// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sVclUtils.pas' rev: 30.00 (Windows)

#ifndef SvclutilsHPP
#define SvclutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Forms.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <System.Types.hpp>
#include <Vcl.Themes.hpp>
#include <acntTypes.hpp>
#include <sSkinProvider.hpp>
#include <acSBUtils.hpp>
#include <sConst.hpp>
#include <acntUtils.hpp>
#include <sCommonData.hpp>
#include <acDials.hpp>
#include <acThdTimer.hpp>
#include <sGraphUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Svclutils
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TOutputWindow;
class DELPHICLASS TacAccessDialogWnd;
class DELPHICLASS TacHideTimer;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (*TacIterProc)(Vcl::Controls::TControl* Ctrl, int Data);

class PASCALIMPLEMENTATION TOutputWindow : public Vcl::Controls::TCustomControl
{
	typedef Vcl::Controls::TCustomControl inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TWMEraseBkgnd &Message);
	
protected:
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	
public:
	__fastcall virtual TOutputWindow(System::Classes::TComponent* AOwner);
	__property Canvas;
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TOutputWindow(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TOutputWindow(HWND ParentWindow) : Vcl::Controls::TCustomControl(ParentWindow) { }
	
};


class PASCALIMPLEMENTATION TacAccessDialogWnd : public Acdials::TacDialogWnd
{
	typedef Acdials::TacDialogWnd inherited;
	
public:
	/* TacDialogWnd.Destroy */ inline __fastcall virtual ~TacAccessDialogWnd(void) { }
	
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacAccessDialogWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const Acsbutils::TacSkinParams &SkinParams, bool Repaint) : Acdials::TacDialogWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class PASCALIMPLEMENTATION TacHideTimer : public Acthdtimer::TacThreadedTimer
{
	typedef Acthdtimer::TacThreadedTimer inherited;
	
protected:
	TacAccessDialogWnd* Dlg;
	NativeUInt ParentWnd;
	HDC DC;
	System::Types::TSize FBmpSize;
	System::Types::TPoint FBmpTopLeft;
	_BLENDFUNCTION FBlend;
	double Trans;
	double p;
	double dx;
	double dy;
	double l;
	double t;
	double r;
	double b;
	int i;
	int StartBlendValue;
	int StepCount;
	Sconst::TacAnimType AnimType;
	bool EventCalled;
	Vcl::Graphics::TBitmap* SrcBmp;
	Vcl::Graphics::TBitmap* DstBmp;
	void __fastcall Anim_Init(void);
	void __fastcall CallEvent(void);
	void __fastcall Anim_DoNext(void);
	bool __fastcall Anim_GoToNext(void);
	void __fastcall OnTimerProc(System::TObject* Sender);
	
public:
	Acnttypes::TacGlowForm* Form;
	__fastcall virtual TacHideTimer(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TacHideTimer(void);
public:
	/* TacThreadedTimer.CreateOwned */ inline __fastcall virtual TacHideTimer(System::Classes::TComponent* AOwner, bool ChangeEvent) : Acthdtimer::TacThreadedTimer(AOwner, ChangeEvent) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::StaticArray<int, 3> AlignToInt;
extern DELPHI_PACKAGE System::StaticArray<System::StaticArray<System::Classes::TAlignment, 3>, 2> BidiAlign;
extern DELPHI_PACKAGE TOutputWindow* ow;
extern DELPHI_PACKAGE bool InAnimationProcess;
extern DELPHI_PACKAGE bool acGraphPainting;
extern DELPHI_PACKAGE NativeUInt uxthemeLib;
extern DELPHI_PACKAGE HRESULT __stdcall (*Ac_SetWindowTheme)(HWND hwnd, System::WideChar * pszSubAppName, System::WideChar * pszSubIdList);
extern DELPHI_PACKAGE TacHideTimer* acHideTimer;
extern DELPHI_PACKAGE Vcl::Themes::TCustomStyleServices* acThemeServices;
extern DELPHI_PACKAGE System::Types::TPoint __fastcall acMousePos(void);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall acColorToRGB(System::Uitypes::TColor Value, System::TObject* SkinManager = (System::TObject*)(0x0));
extern DELPHI_PACKAGE NativeUInt __fastcall GetRootParent(NativeUInt Handle);
extern DELPHI_PACKAGE bool __fastcall acMouseInControl(Vcl::Controls::TControl* Control);
extern DELPHI_PACKAGE bool __fastcall acMouseInControlDC(NativeUInt Handle);
extern DELPHI_PACKAGE Vcl::Graphics::TBitmap* __fastcall acGetFormImage(Vcl::Forms::TForm* aForm);
extern DELPHI_PACKAGE bool __fastcall ContainsWnd(NativeUInt AHandle, NativeUInt AParent);
extern DELPHI_PACKAGE Vcl::Controls::TControl* __fastcall CtrlUnderMouse(void);
extern DELPHI_PACKAGE bool __fastcall LeftToRight(Vcl::Controls::TControl* const Control, const bool NormalAlignment = true);
extern DELPHI_PACKAGE void __fastcall AddToAdapter(Vcl::Controls::TWinControl* const Ctrl);
extern DELPHI_PACKAGE void __fastcall BroadCastMsg(const HWND Ctrl, const Winapi::Messages::TMessage &Message);
extern DELPHI_PACKAGE void __fastcall IterateControls(Vcl::Controls::TWinControl* Owner, int Data, TacIterProc CallBack);
extern DELPHI_PACKAGE void __fastcall SaveGraphCtrls(Vcl::Controls::TWinControl* Wnd, Acnttypes::TacCtrlArray &cArray);
extern DELPHI_PACKAGE void __fastcall RestoreGraphCtrls(Vcl::Controls::TWinControl* Wnd, Acnttypes::TacCtrlArray &cArray);
extern DELPHI_PACKAGE void __fastcall PaintChildCtrls(Vcl::Controls::TWinControl* Ctrl, Vcl::Graphics::TBitmap* Bmp);
extern DELPHI_PACKAGE void __fastcall SkinPaintTo(Vcl::Graphics::TBitmap* const Bmp, Vcl::Controls::TControl* const Ctrl, const int Left = 0x0, const int Top = 0x0, System::Classes::TComponent* const SkinProvider = (System::Classes::TComponent*)(0x0), bool RootCtrl = false);
extern DELPHI_PACKAGE void __fastcall StdPaintTo(Vcl::Graphics::TBitmap* const Bmp, Vcl::Controls::TWinControl* const Ctrl);
extern DELPHI_PACKAGE void __fastcall UpdateLayerVisibility(Scommondata::TsCommonData* SkinData, NativeUInt Handle);
extern DELPHI_PACKAGE void __fastcall AnimShowForm(Sskinprovider::TsSkinProvider* sp, System::Word wTime = (System::Word)(0x0), int MaxTransparency = 0xff, Sconst::TacAnimType AnimType = (Sconst::TacAnimType)(0x1));
extern DELPHI_PACKAGE void __fastcall AnimHideForm(System::TObject* SkinProvider);
extern DELPHI_PACKAGE void __fastcall PrintDlgClient(Acdials::TacDialogWnd* ListSW, Vcl::Graphics::TBitmap* acDstBmp, bool CopyScreen = false);
extern DELPHI_PACKAGE void __fastcall AnimHideDlg(Acdials::TacDialogWnd* ListSW);
extern DELPHI_PACKAGE bool __fastcall DoLayered(HWND FormHandle, bool Layered, System::Byte AlphaValue = (System::Byte)(0x1));
extern DELPHI_PACKAGE Vcl::Controls::THintWindow* __fastcall acShowHintWnd(const System::UnicodeString HintText, const System::Types::TPoint &Pos);
extern DELPHI_PACKAGE System::Types::TRect __fastcall acWorkRect(Vcl::Forms::TForm* Form)/* overload */;
extern DELPHI_PACKAGE System::Types::TRect __fastcall acWorkRect(const System::Types::TPoint &Coord)/* overload */;
extern DELPHI_PACKAGE int __fastcall DefaultPPI(void);
extern DELPHI_PACKAGE int __fastcall GetControlPPI(Vcl::Controls::TControl* Ctrl);
extern DELPHI_PACKAGE int __fastcall GetWndPPI(NativeUInt Handle);
extern DELPHI_PACKAGE void __fastcall EnableNCDpiScaling(NativeUInt WndHandle);
extern DELPHI_PACKAGE void __fastcall AnimShowDlg(Acdials::TacDialogWnd* ListSW, System::Word wTime = (System::Word)(0x0), int MaxTransparency = 0xff, Sconst::TacAnimType AnimType = (Sconst::TacAnimType)(0x1));
extern DELPHI_PACKAGE void __fastcall PrepareForAnimation(Vcl::Controls::TWinControl* const Ctrl, Sconst::TacAnimTypeCtrl AnimType = (Sconst::TacAnimTypeCtrl)(0x0));
extern DELPHI_PACKAGE void __fastcall AnimShowControl(Vcl::Controls::TWinControl* Ctrl, System::Word wTime = (System::Word)(0x0), int MaxTransparency = 0xff, Sconst::TacAnimTypeCtrl AnimType = (Sconst::TacAnimTypeCtrl)(0x0));
extern DELPHI_PACKAGE void __fastcall SetParentUpdated(Vcl::Controls::TWinControl* const wc)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetParentUpdated(const HWND pHwnd)/* overload */;
extern DELPHI_PACKAGE void __fastcall ChangeControlColors(Vcl::Controls::TControl* AControl, System::Uitypes::TColor AFontColor, System::Uitypes::TColor AColor);
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GetControlColor(Vcl::Controls::TControl* const Control)/* overload */;
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GetControlColor(const NativeUInt Handle)/* overload */;
extern DELPHI_PACKAGE System::Uitypes::TColor __fastcall GetControlFontColor(Vcl::Controls::TControl* const Control, System::TObject* SkinManager);
extern DELPHI_PACKAGE bool __fastcall IsCustomFont(Vcl::Controls::TControl* Ctrl, Vcl::Graphics::TFont* AFont, bool SaveColor = true);
extern DELPHI_PACKAGE bool __fastcall AllEditSelected(Vcl::Stdctrls::TCustomEdit* Ctrl);
extern DELPHI_PACKAGE void __fastcall PaintControls(HDC DC, Vcl::Controls::TWinControl* OwnerControl, bool ChangeCache, const System::Types::TPoint &Offset, bool CheckVisible = true);
extern DELPHI_PACKAGE void __fastcall PaintParentBG(Vcl::Controls::TControl* AControl, Vcl::Graphics::TBitmap* ABitmap);
extern DELPHI_PACKAGE void __fastcall SetRedraw(NativeUInt Handle, int Value = 0x0)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetRedraw(Vcl::Controls::TGraphicControl* Ctrl, int Value = 0x0)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall SendAMessage(const HWND Handle, const int Cmd, NativeInt LParam = (NativeInt)(0x0))/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall SendAMessage(Vcl::Controls::TControl* const Control, const int Cmd, NativeInt LParam = (NativeInt)(0x0))/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall TrySendMessage(Vcl::Controls::TControl* const Control, Winapi::Messages::TMessage &Message)/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall TrySendMessage(Vcl::Controls::TControl* const Control, unsigned Msg, NativeUInt WParam, NativeInt LParam = (NativeInt)(0x0))/* overload */;
extern DELPHI_PACKAGE NativeInt __fastcall TrySendMessage(NativeUInt AHandle, unsigned Msg, NativeUInt WParam, NativeInt LParam = (NativeInt)(0x0))/* overload */;
extern DELPHI_PACKAGE bool __fastcall GetBoolMsg(Vcl::Controls::TWinControl* const Control, const unsigned Cmd)/* overload */;
extern DELPHI_PACKAGE bool __fastcall GetBoolMsg(const HWND CtrlHandle, const unsigned Cmd)/* overload */;
extern DELPHI_PACKAGE bool __fastcall ControlIsReady(Vcl::Controls::TControl* const Control);
extern DELPHI_PACKAGE Vcl::Forms::TCustomForm* __fastcall GetOwnerForm(System::Classes::TComponent* const Component);
extern DELPHI_PACKAGE Vcl::Forms::TCustomFrame* __fastcall GetOwnerFrame(System::Classes::TComponent* const Component);
extern DELPHI_PACKAGE void __fastcall SetControlsEnabled(Vcl::Controls::TWinControl* Parent, bool Value, bool Recursion = false);
extern DELPHI_PACKAGE unsigned __fastcall GetStringFlags(Vcl::Controls::TControl* const Control, const System::Classes::TAlignment al);
extern DELPHI_PACKAGE void __fastcall RepaintsControls(Vcl::Controls::TWinControl* const Owner);
extern DELPHI_PACKAGE void __fastcall AlphaBroadCast(Vcl::Controls::TWinControl* const Control, void *Message)/* overload */;
extern DELPHI_PACKAGE void __fastcall AlphaBroadCast(const HWND Handle, void *Message)/* overload */;
extern DELPHI_PACKAGE System::Types::TRect __fastcall acClientRect(const HWND Handle);
extern DELPHI_PACKAGE System::Types::TPoint __fastcall acMouseInWnd(const HWND Handle, int X, int Y);
extern DELPHI_PACKAGE bool __fastcall TrySetSkinSection(Vcl::Controls::TControl* const Control, const System::UnicodeString SectionName);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetWndClassName(const NativeUInt Hwnd);
extern DELPHI_PACKAGE int __fastcall GetAlignShift(Vcl::Controls::TWinControl* const Ctrl, const Vcl::Controls::TAlign Align, const bool GraphCtrlsToo = false);
extern DELPHI_PACKAGE HWND __fastcall GetParentFormHandle(const HWND CtrlHandle);
extern DELPHI_PACKAGE void __fastcall SetFormBlendValue(NativeUInt FormHandle, Vcl::Graphics::TBitmap* Bmp, int Value, System::Types::PPoint NewPos = (System::Types::PPoint)(0x0));
extern DELPHI_PACKAGE System::Classes::TShiftState __fastcall GetShiftState(void);
extern DELPHI_PACKAGE System::WideString __fastcall GetWndText(NativeUInt hwnd);
extern DELPHI_PACKAGE void __fastcall ResetLastError(void);
extern DELPHI_PACKAGE void __fastcall CheckLastError(void);
extern DELPHI_PACKAGE void __fastcall ReflectControls(Vcl::Controls::TWinControl* ParentWnd, bool Recursion);
extern DELPHI_PACKAGE bool __fastcall acThemesEnabled(void);
}	/* namespace Svclutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SVCLUTILS)
using namespace Svclutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SvclutilsHPP
