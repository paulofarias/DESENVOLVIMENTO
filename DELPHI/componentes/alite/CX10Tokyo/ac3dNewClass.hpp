// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ac3dNewClass.pas' rev: 32.00 (Windows)

#ifndef Ac3dnewclassHPP
#define Ac3dnewclassHPP

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
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Buttons.hpp>
#include <System.Variants.hpp>
#include <sBitBtn.hpp>
#include <sComboBox.hpp>
#include <sEdit.hpp>
#include <sSkinProvider.hpp>
#include <Vcl.ImgList.hpp>
#include <acAlphaImageList.hpp>
#include <sDefaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Ac3dnewclass
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFormNewThirdClass;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TFormNewThirdClass : public Vcl::Forms::TForm
{
	typedef Vcl::Forms::TForm inherited;
	
__published:
	Sedit::TsEdit* sEdit1;
	Scombobox::TsComboBox* sComboBox1;
	Sbitbtn::TsBitBtn* sBitBtn1;
	Sbitbtn::TsBitBtn* sBitBtn2;
	Sskinprovider::TsSkinProvider* sSkinProvider1;
	void __fastcall FormCreate(System::TObject* Sender);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TFormNewThirdClass(System::Classes::TComponent* AOwner) : Vcl::Forms::TForm(AOwner) { }
	/* TCustomForm.CreateNew */ inline __fastcall virtual TFormNewThirdClass(System::Classes::TComponent* AOwner, int Dummy) : Vcl::Forms::TForm(AOwner, Dummy) { }
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TFormNewThirdClass(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TFormNewThirdClass(HWND ParentWindow) : Vcl::Forms::TForm(ParentWindow) { }
	
};


typedef System::StaticArray<System::UnicodeString, 23> Ac3dnewclass__2;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE Ac3dnewclass__2 acThirdCaptions;
extern DELPHI_PACKAGE TFormNewThirdClass* FormNewThirdClass;
}	/* namespace Ac3dnewclass */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_AC3DNEWCLASS)
using namespace Ac3dnewclass;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Ac3dnewclassHPP
