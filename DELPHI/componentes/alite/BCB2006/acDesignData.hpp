// Borland C++ Builder
// Copyright (c) 1995, 2005 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Acdesigndata.pas' rev: 10.00

#ifndef AcdesigndataHPP
#define AcdesigndataHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Imglist.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Acalphaimagelist.hpp>	// Pascal unit

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
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Acdesigndata
