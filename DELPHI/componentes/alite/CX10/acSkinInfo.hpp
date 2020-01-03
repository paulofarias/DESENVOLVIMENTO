// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acSkinInfo.pas' rev: 30.00 (Windows)

#ifndef AcskininfoHPP
#define AcskininfoHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <sSkinProvider.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <sBitBtn.hpp>
#include <sMemo.hpp>
#include <Vcl.ComCtrls.hpp>
#include <sLabel.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acskininfo
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TSkinInfoForm;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TSkinInfoForm : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Sbitbtn::TsBitBtn* sBitBtn1;
	Sskinprovider::TsSkinProvider* sSkinProvider1;
	Smemo::TsMemo* sMemo1;
	Vcl::Stdctrls::TLabel* Label1;
public:
	/* TCustomForm.Create */ inline __fastcall virtual TSkinInfoForm(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TSkinInfoForm(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TSkinInfoForm(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TSkinInfoForm(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TSkinInfoForm* SkinInfoForm;
}	/* namespace Acskininfo */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACSKININFO)
using namespace Acskininfo;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcskininfoHPP
