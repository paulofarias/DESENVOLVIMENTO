// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sVclUtils.pas' rev: 22.00

#ifndef SvclutilsHPP
#define SvclutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Themes.hpp>	// Pascal unit
#include <acntTypes.hpp>	// Pascal unit
#include <sSkinProvider.hpp>	// Pascal unit
#include <acSBUtils.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <acntUtils.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <acDials.hpp>	// Pascal unit
#include <acThdTimer.hpp>	// Pascal unit
#include <sGraphUtils.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Svclutils
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (*TacIterProc)(Controls::TControl* Ctrl, int Data);

class DELPHICLASS TOutputWindow;
class PASCALIMPLEMENTATION TOutputWindow : public Controls::TCustomControl
{
	typedef Controls::TCustomControl inherited;
	
private:
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Messages::TWMEraseBkgnd &Message);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Messages::TWMEraseBkgnd &Message);
	
protected:
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	
public:
	__fastcall virtual TOutputWindow(Classes::TComponent* AOwner);
	__property Canvas;
public:
	/* TCustomControl.Destroy */ inline __fastcall virtual ~TOutputWindow(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TOutputWindow(HWND ParentWindow) : Controls::TCustomControl(ParentWindow) { }
	
};


class DELPHICLASS TacAccessDialogWnd;
class PASCALIMPLEMENTATION TacAccessDialogWnd : public Acdials::TacDialogWnd
{
	typedef Acdials::TacDialogWnd inherited;
	
public:
	/* TacDialogWnd.Destroy */ inline __fastcall virtual ~TacAccessDialogWnd(void) { }
	
public:
	/* TacMainWnd.Create */ inline __fastcall virtual TacAccessDialogWnd(HWND AHandle, Scommondata::TsCommonData* ASkinData, Sskinmanager::TsSkinManager* ASkinManager, const Acsbutils::TacSkinParams &SkinParams, bool Repaint) : Acdials::TacDialogWnd(AHandle, ASkinData, ASkinManager, SkinParams, Repaint) { }
	
};


class DELPHICLASS TacHideTimer;
class PASCALIMPLEMENTATION TacHideTimer : public Acthdtimer::TacThreadedTimer
{
	typedef Acthdtimer::TacThreadedTimer inherited;
	
protected:
	TacAccessDialogWnd* Dlg;
	unsigned ParentWnd;
	HDC DC;
	tagSIZE FBmpSize;
	Types::TPoint FBmpTopLeft;
	#pragma pack(push,1)
	_BLENDFUNCTION FBlend;
	#pragma pack(pop)
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
	Graphics::TBitmap* SrcBmp;
	Graphics::TBitmap* DstBmp;
	void __fastcall Anim_Init(void);
	void __fastcall CallEvent(void);
	void __fastcall Anim_DoNext(void);
	bool __fastcall Anim_GoToNext(void);
	void __fastcall OnTimerProc(System::TObject* Sender);
	
public:
	Acnttypes::TacGlowForm* Form;
	__fastcall virtual TacHideTimer(Classes::TComponent* AOwner);
	__fastcall virtual ~TacHideTimer(void);
public:
	/* TacThreadedTimer.CreateOwned */ inline __fastcall virtual TacHideTimer(Classes::TComponent* AOwner, bool ChangeEvent) : Acthdtimer::TacThreadedTimer(AOwner, ChangeEvent) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE System::StaticArray<int, 3> AlignToInt;
extern PACKAGE System::StaticArray<System::StaticArray<Classes::TAlignment, 3>, 2> BidiAlign;
extern PACKAGE TOutputWindow* ow;
extern PACKAGE bool InAnimationProcess;
extern PACKAGE bool acGraphPainting;
extern PACKAGE unsigned uxthemeLib;
extern PACKAGE HRESULT __stdcall (*Ac_SetWindowTheme)(HWND hwnd, System::WideChar * pszSubAppName, System::WideChar * pszSubIdList);
extern PACKAGE TacHideTimer* acHideTimer;
extern PACKAGE Themes::TThemeServices* acThemeServices;
extern PACKAGE Types::TPoint __fastcall acMousePos(void);
extern PACKAGE Graphics::TColor __fastcall acColorToRGB(Graphics::TColor Value, System::TObject* SkinManager = (System::TObject*)(0x0));
extern PACKAGE unsigned __fastcall GetRootParent(unsigned Handle);
extern PACKAGE bool __fastcall acMouseInControl(Controls::TControl* Control);
extern PACKAGE bool __fastcall acMouseInControlDC(unsigned Handle);
extern PACKAGE Graphics::TBitmap* __fastcall acGetFormImage(Forms::TForm* aForm);
extern PACKAGE bool __fastcall ContainsWnd(unsigned AHandle, unsigned AParent);
extern PACKAGE Controls::TControl* __fastcall CtrlUnderMouse(void);
extern PACKAGE bool __fastcall LeftToRight(const Controls::TControl* Control, const bool NormalAlignment = true);
extern PACKAGE void __fastcall AddToAdapter(const Controls::TWinControl* Ctrl);
extern PACKAGE void __fastcall BroadCastMsg(const HWND Ctrl, const Messages::TMessage &Message);
extern PACKAGE void __fastcall IterateControls(Controls::TWinControl* Owner, int Data, TacIterProc CallBack);
extern PACKAGE void __fastcall SaveGraphCtrls(Controls::TWinControl* Wnd, Acnttypes::TacCtrlArray &cArray);
extern PACKAGE void __fastcall RestoreGraphCtrls(Controls::TWinControl* Wnd, Acnttypes::TacCtrlArray &cArray);
extern PACKAGE void __fastcall PaintChildCtrls(Controls::TWinControl* Ctrl, Graphics::TBitmap* Bmp);
extern PACKAGE void __fastcall SkinPaintTo(const Graphics::TBitmap* Bmp, const Controls::TControl* Ctrl, const int Left = 0x0, const int Top = 0x0, const Classes::TComponent* SkinProvider = (Classes::TComponent*)(0x0), bool RootCtrl = false);
extern PACKAGE void __fastcall StdPaintTo(const Graphics::TBitmap* Bmp, const Controls::TWinControl* Ctrl);
extern PACKAGE void __fastcall UpdateLayerVisibility(Scommondata::TsCommonData* SkinData, unsigned Handle);
extern PACKAGE void __fastcall AnimShowForm(Sskinprovider::TsSkinProvider* sp, System::Word wTime = (System::Word)(0x0), int MaxTransparency = 0xff, Sconst::TacAnimType AnimType = (Sconst::TacAnimType)(0x1));
extern PACKAGE void __fastcall AnimHideForm(System::TObject* SkinProvider);
extern PACKAGE void __fastcall PrintDlgClient(Acdials::TacDialogWnd* ListSW, Graphics::TBitmap* acDstBmp, bool CopyScreen = false);
extern PACKAGE void __fastcall AnimHideDlg(Acdials::TacDialogWnd* ListSW);
extern PACKAGE bool __fastcall DoLayered(HWND FormHandle, bool Layered, System::Byte AlphaValue = (System::Byte)(0x1));
extern PACKAGE Controls::THintWindow* __fastcall acShowHintWnd(const System::UnicodeString HintText, const Types::TPoint &Pos);
extern PACKAGE Types::TRect __fastcall acWorkRect(Forms::TForm* Form)/* overload */;
extern PACKAGE Types::TRect __fastcall acWorkRect(const Types::TPoint &Coord)/* overload */;
extern PACKAGE int __fastcall DefaultPPI(void);
extern PACKAGE int __fastcall GetControlPPI(Controls::TControl* Ctrl);
extern PACKAGE int __fastcall GetWndPPI(unsigned Handle);
extern PACKAGE void __fastcall EnableNCDpiScaling(unsigned WndHandle);
extern PACKAGE void __fastcall AnimShowDlg(Acdials::TacDialogWnd* ListSW, System::Word wTime = (System::Word)(0x0), int MaxTransparency = 0xff, Sconst::TacAnimType AnimType = (Sconst::TacAnimType)(0x1));
extern PACKAGE void __fastcall PrepareForAnimation(const Controls::TWinControl* Ctrl, Sconst::TacAnimTypeCtrl AnimType = (Sconst::TacAnimTypeCtrl)(0x0));
extern PACKAGE void __fastcall AnimShowControl(Controls::TWinControl* Ctrl, System::Word wTime = (System::Word)(0x0), int MaxTransparency = 0xff, Sconst::TacAnimTypeCtrl AnimType = (Sconst::TacAnimTypeCtrl)(0x0));
extern PACKAGE void __fastcall SetParentUpdated(const Controls::TWinControl* wc)/* overload */;
extern PACKAGE void __fastcall SetParentUpdated(const HWND pHwnd)/* overload */;
extern PACKAGE void __fastcall ChangeControlColors(Controls::TControl* AControl, Graphics::TColor AFontColor, Graphics::TColor AColor);
extern PACKAGE Graphics::TColor __fastcall GetControlColor(const Controls::TControl* Control)/* overload */;
extern PACKAGE Graphics::TColor __fastcall GetControlColor(const unsigned Handle)/* overload */;
extern PACKAGE Graphics::TColor __fastcall GetControlFontColor(const Controls::TControl* Control, System::TObject* SkinManager);
extern PACKAGE bool __fastcall IsCustomFont(Controls::TControl* Ctrl, Graphics::TFont* AFont, bool SaveColor = true);
extern PACKAGE bool __fastcall AllEditSelected(Stdctrls::TCustomEdit* Ctrl);
extern PACKAGE void __fastcall PaintControls(HDC DC, Controls::TWinControl* OwnerControl, bool ChangeCache, const Types::TPoint &Offset, bool CheckVisible = true);
extern PACKAGE void __fastcall PaintParentBG(Controls::TControl* AControl, Graphics::TBitmap* ABitmap);
extern PACKAGE void __fastcall SetRedraw(unsigned Handle, int Value = 0x0)/* overload */;
extern PACKAGE void __fastcall SetRedraw(Controls::TGraphicControl* Ctrl, int Value = 0x0)/* overload */;
extern PACKAGE int __fastcall SendAMessage(const HWND Handle, const int Cmd, int LParam = 0x0)/* overload */;
extern PACKAGE int __fastcall SendAMessage(const Controls::TControl* Control, const int Cmd, int LParam = 0x0)/* overload */;
extern PACKAGE int __fastcall TrySendMessage(const Controls::TControl* Control, Messages::TMessage &Message)/* overload */;
extern PACKAGE int __fastcall TrySendMessage(const Controls::TControl* Control, unsigned Msg, int WParam, int LParam = 0x0)/* overload */;
extern PACKAGE int __fastcall TrySendMessage(unsigned AHandle, unsigned Msg, int WParam, int LParam = 0x0)/* overload */;
extern PACKAGE bool __fastcall GetBoolMsg(const Controls::TWinControl* Control, const unsigned Cmd)/* overload */;
extern PACKAGE bool __fastcall GetBoolMsg(const HWND CtrlHandle, const unsigned Cmd)/* overload */;
extern PACKAGE bool __fastcall ControlIsReady(const Controls::TControl* Control);
extern PACKAGE Forms::TCustomForm* __fastcall GetOwnerForm(const Classes::TComponent* Component);
extern PACKAGE Forms::TCustomFrame* __fastcall GetOwnerFrame(const Classes::TComponent* Component);
extern PACKAGE void __fastcall SetControlsEnabled(Controls::TWinControl* Parent, bool Value, bool Recursion = false);
extern PACKAGE unsigned __fastcall GetStringFlags(const Controls::TControl* Control, const Classes::TAlignment al);
extern PACKAGE void __fastcall RepaintsControls(const Controls::TWinControl* Owner);
extern PACKAGE void __fastcall AlphaBroadCast(const Controls::TWinControl* Control, void *Message)/* overload */;
extern PACKAGE void __fastcall AlphaBroadCast(const HWND Handle, void *Message)/* overload */;
extern PACKAGE Types::TRect __fastcall acClientRect(const HWND Handle);
extern PACKAGE Types::TPoint __fastcall acMouseInWnd(const HWND Handle, int X, int Y);
extern PACKAGE bool __fastcall TrySetSkinSection(const Controls::TControl* Control, const System::UnicodeString SectionName);
extern PACKAGE System::UnicodeString __fastcall GetWndClassName(const unsigned Hwnd);
extern PACKAGE int __fastcall GetAlignShift(const Controls::TWinControl* Ctrl, const Controls::TAlign Align, const bool GraphCtrlsToo = false);
extern PACKAGE HWND __fastcall GetParentFormHandle(const HWND CtrlHandle);
extern PACKAGE void __fastcall SetFormBlendValue(unsigned FormHandle, Graphics::TBitmap* Bmp, int Value, Types::PPoint NewPos = (Types::PPoint)(0x0));
extern PACKAGE Classes::TShiftState __fastcall GetShiftState(void);
extern PACKAGE System::WideString __fastcall GetWndText(unsigned hwnd);
extern PACKAGE void __fastcall ResetLastError(void);
extern PACKAGE void __fastcall CheckLastError(void);
extern PACKAGE void __fastcall ReflectControls(Controls::TWinControl* ParentWnd, bool Recursion);
extern PACKAGE bool __fastcall acThemesEnabled(void);

}	/* namespace Svclutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Svclutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SvclutilsHPP
