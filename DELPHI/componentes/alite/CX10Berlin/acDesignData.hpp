// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acDesignData.pas' rev: 31.00 (Windows)

#ifndef AcdesigndataHPP
#define AcdesigndataHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Vcl.Forms.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Controls.hpp>
#include <acAlphaImageList.hpp>

//-- user supplied -----------------------------------------------------------

namespace Acdesigndata
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TacDM;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TacDM : public System::Classes::TDataModule
{
	typedef System::Classes::TDataModule inherited;
	
__published:
	Acalphaimagelist::TsCharImageList* sCharImageList1;
public:
	/* TDataModule.Create */ inline __fastcall virtual TacDM(System::Classes::TComponent* AOwner) : System::Classes::TDataModule(AOwner) { }
	/* TDataModule.CreateNew */ inline __fastcall virtual TacDM(System::Classes::TComponent* AOwner, int Dummy) : System::Classes::TDataModule(AOwner, Dummy) { }
	/* TDataModule.Destroy */ inline __fastcall virtual ~TacDM(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TacDM* acDM;
}	/* namespace Acdesigndata */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ACDESIGNDATA)
using namespace Acdesigndata;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// AcdesigndataHPP
