// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'acDesignData.pas' rev: 6.00

#ifndef acDesignDataHPP
#define acDesignDataHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <acAlphaImageList.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Acdesigndata
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacDM;
class PASCALIMPLEMENTATION TacDM : public Classes::TDataModule 
{
	typedef Classes::TDataModule inherited;
	
__published:
	Acalphaimagelist::TsCharImageList* sCharImageList1;
public:
	#pragma option push -w-inl
	/* TDataModule.Create */ inline __fastcall virtual TacDM(Classes::TComponent* AOwner) : Classes::TDataModule(AOwner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TDataModule.CreateNew */ inline __fastcall virtual TacDM(Classes::TComponent* AOwner, int Dummy) : Classes::TDataModule(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TDataModule.Destroy */ inline __fastcall virtual ~TacDM(void) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TacDM* acDM;

}	/* namespace Acdesigndata */
using namespace Acdesigndata;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// acDesignData
