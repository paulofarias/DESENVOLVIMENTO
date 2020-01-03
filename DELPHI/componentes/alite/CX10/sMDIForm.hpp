// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sMDIForm.pas' rev: 30.00 (Windows)

#ifndef SmdiformHPP
#define SmdiformHPP

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
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <sSkinProvider.hpp>
#include <acSBUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Smdiform
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TsMDIForm;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TsMDIForm : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
public:
	Vcl::Forms::TCustomForm* FForm;
	Acsbutils::TacScrollWnd* ListSW;
	Sskinprovider::TsSkinProvider* SkinProvider;
	void __fastcall ConnectToClient(void);
	__fastcall TsMDIForm(System::Classes::TPersistent* AOwner);
	__fastcall virtual ~TsMDIForm(void);
	Vcl::Menus::TMenuItem* __fastcall MakeChildIconItem(void);
	void __fastcall UpdateMDIIconItem(void);
	void __fastcall RefreshMDIScrolls(void);
	void __fastcall DestroyScrolls(void);
	void __fastcall RestoreClick(System::TObject* Sender);
	void __fastcall MinClick(System::TObject* Sender);
	void __fastcall CloseClick(System::TObject* Sender);
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Smdiform */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SMDIFORM)
using namespace Smdiform;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SmdiformHPP
