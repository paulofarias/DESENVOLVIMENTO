// CodeGear C++Builder
// Copyright (c) 1995, 2009 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Spropeditors.pas' rev: 21.00

#ifndef SpropeditorsHPP
#define SpropeditorsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Filectrl.hpp>	// Pascal unit
#include <Comctrls.hpp>	// Pascal unit
#include <Extctrls.hpp>	// Pascal unit
#include <Imglist.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Consts.hpp>	// Pascal unit
#include <Comstrs.hpp>	// Pascal unit
#include <Commctrl.hpp>	// Pascal unit
#include <Typinfo.hpp>	// Pascal unit
#include <Colnedit.hpp>	// Pascal unit
#include <Designeditors.hpp>	// Pascal unit
#include <Designintf.hpp>	// Pascal unit
#include <Vcleditors.hpp>	// Pascal unit
#include <Svclutils.hpp>	// Pascal unit
#include <Spanel.hpp>	// Pascal unit
#include <Sgraphutils.hpp>	// Pascal unit
#include <Acntutils.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Spropeditors
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacSkinInfoProperty;
class PASCALIMPLEMENTATION TacSkinInfoProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall Edit(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TacSkinInfoProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TacSkinInfoProperty(void) { }
	
};


class DELPHICLASS TacImageListEditor;
class PASCALIMPLEMENTATION TacImageListEditor : public Designeditors::TComponentEditor
{
	typedef Designeditors::TComponentEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TacImageListEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TacImageListEditor(void) { }
	
};


class DELPHICLASS TacFontStoreEditor;
class PASCALIMPLEMENTATION TacFontStoreEditor : public Designeditors::TComponentEditor
{
	typedef Designeditors::TComponentEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TacFontStoreEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TacFontStoreEditor(void) { }
	
};


class DELPHICLASS TacEmbeddedFontsProperty;
class PASCALIMPLEMENTATION TacEmbeddedFontsProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall Edit(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TacEmbeddedFontsProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TacEmbeddedFontsProperty(void) { }
	
};


class DELPHICLASS TacImageIndexEditor;
class PASCALIMPLEMENTATION TacImageIndexEditor : public Designeditors::TIntegerProperty
{
	typedef Designeditors::TIntegerProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall GetValues(Classes::TGetStrProc Proc);
	Imglist::TCustomImageList* __fastcall GetMyList(void);
	void __fastcall ListMeasureHeight(const System::UnicodeString Value, Graphics::TCanvas* ACanvas, int &AHeight);
	void __fastcall ListMeasureWidth(const System::UnicodeString Value, Graphics::TCanvas* ACanvas, int &AWidth);
	void __fastcall ListDrawValue(const System::UnicodeString Value, Graphics::TCanvas* ACanvas, const Types::TRect &ARect, bool ASelected);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TacImageIndexEditor(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TIntegerProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TacImageIndexEditor(void) { }
	
private:
	void *__ICustomPropertyListDrawing;	/* Vcleditors::ICustomPropertyListDrawing */
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	operator Vcleditors::_di_ICustomPropertyListDrawing()
	{
		Vcleditors::_di_ICustomPropertyListDrawing intf;
		GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomPropertyListDrawing*(void) { return (ICustomPropertyListDrawing*)&__ICustomPropertyListDrawing; }
	#endif
	
};


class DELPHICLASS TacImgListItemsProperty;
class PASCALIMPLEMENTATION TacImgListItemsProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall Edit(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TacImgListItemsProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TacImgListItemsProperty(void) { }
	
};


class DELPHICLASS TacSkinSectionProperty;
class PASCALIMPLEMENTATION TacSkinSectionProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall GetValues(Classes::TGetStrProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TacSkinSectionProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TacSkinSectionProperty(void) { }
	
};


class DELPHICLASS TacSkinNameProperty;
class PASCALIMPLEMENTATION TacSkinNameProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall GetValues(Classes::TGetStrProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TacSkinNameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TacSkinNameProperty(void) { }
	
};


class DELPHICLASS TacDirProperty;
class PASCALIMPLEMENTATION TacDirProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall Edit(void);
	virtual System::UnicodeString __fastcall GetValue(void);
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TacDirProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TacDirProperty(void) { }
	
	
/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ Designeditors::TPropertyEditor::SetValue(Value); }
	
};


class DELPHICLASS TacInternalSkinsProperty;
class PASCALIMPLEMENTATION TacInternalSkinsProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall Edit(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TacInternalSkinsProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TacInternalSkinsProperty(void) { }
	
};


class DELPHICLASS TacThirdPartyProperty;
class PASCALIMPLEMENTATION TacThirdPartyProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes(void);
	virtual void __fastcall Edit(void);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TacThirdPartyProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TacThirdPartyProperty(void) { }
	
};


class DELPHICLASS TacSkinManagerEditor;
class PASCALIMPLEMENTATION TacSkinManagerEditor : public Designeditors::TComponentEditor
{
	typedef Designeditors::TComponentEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TacSkinManagerEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TacSkinManagerEditor(void) { }
	
};


class DELPHICLASS TacTitleBarEditor;
class PASCALIMPLEMENTATION TacTitleBarEditor : public Designeditors::TComponentEditor
{
	typedef Designeditors::TComponentEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TacTitleBarEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TacTitleBarEditor(void) { }
	
};


class DELPHICLASS TacListViewEditor;
class PASCALIMPLEMENTATION TacListViewEditor : public Designeditors::TComponentEditor
{
	typedef Designeditors::TComponentEditor inherited;
	
public:
	virtual void __fastcall ExecuteVerb(int Index);
	virtual System::UnicodeString __fastcall GetVerb(int Index);
	virtual int __fastcall GetVerbCount(void);
public:
	/* TComponentEditor.Create */ inline __fastcall virtual TacListViewEditor(Classes::TComponent* AComponent, Designintf::_di_IDesigner ADesigner) : Designeditors::TComponentEditor(AComponent, ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TacListViewEditor(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall Register(void);
extern PACKAGE void __fastcall EditPropertyWithDialog(Classes::TPersistent* Component, const System::AnsiString PropName, const Designintf::_di_IDesigner Designer);

}	/* namespace Spropeditors */
using namespace Spropeditors;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SpropeditorsHPP
