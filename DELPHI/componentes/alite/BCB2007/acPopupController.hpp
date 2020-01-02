// CodeGear C++Builder
// Copyright (c) 1995, 2007 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Acpopupcontroller.pas' rev: 11.00

#ifndef AcpopupcontrollerHPP
#define AcpopupcontrollerHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Acthdtimer.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acpopupcontroller
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacFormHandler;
class DELPHICLASS TsPopupController;
class PASCALIMPLEMENTATION TsPopupController : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
protected:
	bool DoSetFocus;
	bool SkipOpen;
	int AnimDirection;
	void __fastcall DoDeactivate(System::TObject* Sender);
	void __fastcall DoClose(System::TObject* Sender, Forms::TCloseAction &Action);
	int __fastcall InitFormHandler(Forms::TForm* AForm, Controls::TWinControl* Ctrl);
	bool __fastcall HasChild(Forms::TForm* Parent);
	void __fastcall AnimShowPopup(Forms::TForm* aForm, Word wTime = (Word)(0x0), Byte BlendValue = (Byte)(0xff));
	void __fastcall ShowForm(Forms::TForm* AForm, Controls::TWinControl* AOwnerControl, int ALeft = 0xffffffff, int ATop = 0xffffffff, bool Animated = true);
	void __fastcall ShowFormPos(Forms::TForm* AForm, const Types::TPoint &ALeftTop, bool Animated = true);
	
public:
	bool MousePressed;
	bool IgnoreCapture;
	DynamicArray<TacFormHandler* >  FormHandlers;
	void __fastcall ClosingForbide(Forms::TForm* AForm);
	void __fastcall ClosingAllow(Forms::TForm* AForm);
	int __fastcall GetFormIndex(Forms::TForm* Form);
	int __fastcall PopupCount(Forms::TForm* ExceptForm);
	int __fastcall PopupChildCount(Forms::TForm* ExceptForm);
	void __fastcall KillAllForms(Forms::TForm* ExceptChild);
	__fastcall virtual TsPopupController(Classes::TComponent* AOwner);
	__fastcall virtual ~TsPopupController(void);
};


class PASCALIMPLEMENTATION TacFormHandler : public System::TObject 
{
	typedef System::TObject inherited;
	
protected:
	Controls::TWinControl* ClientCtrl;
	Classes::TWndMethod FormWndProc;
	Classes::TWndMethod CtrlWndProc;
	bool Initialized;
	bool ClosingForbidden;
	unsigned CaptureHandle;
	Forms::TCloseEvent OldOnClose;
	Acthdtimer::TacThreadedTimer* CheckTimer;
	TsPopupController* Controller;
	void __fastcall UnInitControls(void);
	void __fastcall DoTimer(System::TObject* Sender);
	void __fastcall UpdateRgnBmp(Graphics::TBitmap* aBmp);
	void __fastcall CloseForm(bool CallProc = true);
	__fastcall TacFormHandler(Forms::TForm* AForm, Controls::TWinControl* ACtrl);
	void __fastcall InitControls(Forms::TForm* AForm, Controls::TWinControl* ACtrl);
	void __fastcall DoWndProc(Messages::TMessage &Message);
	void __fastcall DoCtrlProc(Messages::TMessage &Message);
	
public:
	bool Closed;
	Forms::TForm* PopupForm;
	Forms::TForm* ParentForm;
	Controls::TWinControl* PopupCtrl;
	Forms::TCustomForm* ShadowForm;
	__fastcall virtual ~TacFormHandler(void);
};


typedef DynamicArray<TacFormHandler* >  acPopupController__3;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TsPopupController* acIntController;
extern PACKAGE TsPopupController* __fastcall GetIntController(void);
extern PACKAGE void __fastcall ShowPopupForm(Forms::TForm* AForm, Controls::TWinControl* AOwnerControl, int ALeft = 0xffffffff, int ATop = 0xffffffff, bool Animated = true)/* overload */;
extern PACKAGE void __fastcall ShowPopupForm(Forms::TForm* AForm, const Types::TPoint &ALeftTop, bool Animated = true)/* overload */;
extern PACKAGE Forms::TCustomForm* __fastcall AttachShadowForm(Forms::TForm* aForm, bool DoShow = true);

}	/* namespace Acpopupcontroller */
using namespace Acpopupcontroller;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Acpopupcontroller
