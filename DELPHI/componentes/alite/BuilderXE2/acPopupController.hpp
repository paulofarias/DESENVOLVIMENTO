// CodeGear C++Builder
// Copyright (c) 1995, 2011 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acPopupController.pas' rev: 23.00 (Win32)

#ifndef AcpopupcontrollerHPP
#define AcpopupcontrollerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.Types.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <acThdTimer.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acpopupcontroller
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacFormHandler;
class DELPHICLASS TsPopupController;
class PASCALIMPLEMENTATION TacFormHandler : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	Vcl::Controls::TWinControl* ClientCtrl;
	System::Classes::TWndMethod FormWndProc;
	System::Classes::TWndMethod CtrlWndProc;
	bool Initialized;
	bool ClosingForbidden;
	unsigned CaptureHandle;
	Vcl::Forms::TCloseEvent OldOnClose;
	Acthdtimer::TacThreadedTimer* CheckTimer;
	TsPopupController* Controller;
	void __fastcall UnInitControls(void);
	void __fastcall DoTimer(System::TObject* Sender);
	void __fastcall UpdateRgnBmp(Vcl::Graphics::TBitmap* aBmp);
	void __fastcall CloseForm(bool CallProc = true);
	__fastcall TacFormHandler(Vcl::Forms::TForm* AForm, Vcl::Controls::TWinControl* ACtrl);
	void __fastcall InitControls(Vcl::Forms::TForm* AForm, Vcl::Controls::TWinControl* ACtrl);
	void __fastcall DoWndProc(Winapi::Messages::TMessage &Message);
	void __fastcall DoCtrlProc(Winapi::Messages::TMessage &Message);
	
public:
	bool Closed;
	Vcl::Forms::TForm* PopupForm;
	Vcl::Forms::TForm* ParentForm;
	Vcl::Controls::TWinControl* PopupCtrl;
	Vcl::Forms::TCustomForm* ShadowForm;
	__fastcall virtual ~TacFormHandler(void);
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TsPopupController : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	typedef System::DynamicArray<TacFormHandler*> _TsPopupController__1;
	
	
protected:
	bool DoSetFocus;
	bool SkipOpen;
	int AnimDirection;
	void __fastcall DoDeactivate(System::TObject* Sender);
	void __fastcall DoClose(System::TObject* Sender, System::Uitypes::TCloseAction &Action);
	int __fastcall InitFormHandler(Vcl::Forms::TForm* AForm, Vcl::Controls::TWinControl* Ctrl);
	bool __fastcall HasChild(Vcl::Forms::TForm* Parent);
	void __fastcall AnimShowPopup(Vcl::Forms::TForm* aForm, System::Word wTime = (System::Word)(0x0), System::Byte BlendValue = (System::Byte)(0xff));
	void __fastcall ShowForm(Vcl::Forms::TForm* AForm, Vcl::Controls::TWinControl* AOwnerControl, int ALeft = 0xffffffff, int ATop = 0xffffffff, bool Animated = true);
	void __fastcall ShowFormPos(Vcl::Forms::TForm* AForm, const System::Types::TPoint &ALeftTop, bool Animated = true);
	
public:
	bool MousePressed;
	bool IgnoreCapture;
	_TsPopupController__1 FormHandlers;
	void __fastcall ClosingForbide(Vcl::Forms::TForm* AForm);
	void __fastcall ClosingAllow(Vcl::Forms::TForm* AForm);
	int __fastcall GetFormIndex(Vcl::Forms::TForm* Form);
	int __fastcall PopupCount(Vcl::Forms::TForm* ExceptForm);
	int __fastcall PopupChildCount(Vcl::Forms::TForm* ExceptForm);
	void __fastcall KillAllForms(Vcl::Forms::TForm* ExceptChild);
	__fastcall virtual TsPopupController(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TsPopupController(void);
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TsPopupController* acIntController;
extern PACKAGE TsPopupController* __fastcall GetIntController(void);
extern PACKAGE void __fastcall ShowPopupForm(Vcl::Forms::TForm* AForm, Vcl::Controls::TWinControl* AOwnerControl, int ALeft = 0xffffffff, int ATop = 0xffffffff, bool Animated = true)/* overload */;
extern PACKAGE void __fastcall ShowPopupForm(Vcl::Forms::TForm* AForm, const System::Types::TPoint &ALeftTop, bool Animated = true)/* overload */;
extern PACKAGE Vcl::Forms::TCustomForm* __fastcall AttachShadowForm(Vcl::Forms::TForm* aForm, bool DoShow = true);

}	/* namespace Acpopupcontroller */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACPOPUPCONTROLLER)
using namespace Acpopupcontroller;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcpopupcontrollerHPP
