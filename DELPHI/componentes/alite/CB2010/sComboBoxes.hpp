// CodeGear C++Builder
// Copyright (c) 1995, 2009 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Scomboboxes.pas' rev: 21.00

#ifndef ScomboboxesHPP
#define ScomboboxesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Extctrls.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Comctrls.hpp>	// Pascal unit
#include <Imglist.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Scommondata.hpp>	// Pascal unit
#include <Sdefaults.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Acntutils.hpp>	// Pascal unit
#include <Sgraphutils.hpp>	// Pascal unit
#include <Acsbutils.hpp>	// Pascal unit
#include <Acalphaimagelist.hpp>	// Pascal unit
#include <Sspeedbutton.hpp>	// Pascal unit
#include <Sskinprovider.hpp>	// Pascal unit
#include <Sscrollbox.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Scomboboxes
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TsCustomComboBoxEx;
class PASCALIMPLEMENTATION TsCustomComboBoxEx : public Comctrls::TCustomComboBoxEx
{
	typedef Comctrls::TCustomComboBoxEx inherited;
	
private:
	bool FReadOnly;
	bool FShowButton;
	bool FAllowMouseWheel;
	int State;
	int FPopupWidth;
	HWND ExHandle;
	Scommondata::TsBoundLabel* FBoundLabel;
	Scommondata::TsCtrlSkinData* FCommonData;
	Sconst::TsDisabledKind FDisabledKind;
	bool __fastcall FontStored(void);
	bool __fastcall ColorStored(void);
	Comctrls::TComboExItem* __fastcall GetSelectedItem(void);
	void __fastcall SetShowButton(const bool Value);
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	HIDESBASE void __fastcall WMPaint(Messages::TWMPaint &Message);
	HIDESBASE virtual void __fastcall WMDrawItem(Messages::TWMDrawItem &Message);
	HIDESBASE virtual System::UnicodeString __fastcall GetText(int AIndex);
	
protected:
	HWND lboxhandle;
	bool FDropDown;
	Acsbutils::TacScrollWnd* ListSW;
	int FGlyphIndex;
	virtual int __fastcall GetItemHt(void);
	virtual bool __fastcall AllowDropDown(void);
	bool __fastcall AllowBtnStyle(void);
	int __fastcall BrdWidth(void);
	int __fastcall ButtonHeight(void);
	Types::TRect __fastcall ButtonRect(void);
	void __fastcall PaintButton(void);
	void __fastcall AnimateCtrl(int AState);
	void __fastcall PrepareCache(void);
	void __fastcall UpdateIndexes(void);
	virtual void __fastcall DoDropDown(void);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	HIDESBASE MESSAGE void __fastcall WMLButtonDblClk(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Messages::TWMMouse &Message);
	virtual void __fastcall ComboWndProc(Messages::TMessage &Message, HWND ComboWnd, void * ComboProc);
	virtual bool __fastcall DrawSkinItem(int aIndex, const Types::TRect &aRect, Windows::TOwnerDrawState aState, HDC aDC);
	
public:
	__fastcall virtual ~TsCustomComboBoxEx(void);
	virtual void __fastcall CreateWnd(void);
	virtual void __fastcall Loaded(void);
	__fastcall virtual TsCustomComboBoxEx(Classes::TComponent* AOwner);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall AdjustDropDown(void);
	DYNAMIC void __fastcall CloseUp(void);
	__property Comctrls::TComboExItem* SelectedItem = {read=GetSelectedItem};
	
__published:
	__property Color = {stored=ColorStored, default=-16777211};
	__property Font = {stored=FontStored};
	__property ParentFont = {stored=FontStored, default=1};
	__property bool AllowMouseWheel = {read=FAllowMouseWheel, write=FAllowMouseWheel, default=1};
	__property Scommondata::TsBoundLabel* BoundLabel = {read=FBoundLabel, write=FBoundLabel};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property int PopupWidth = {read=FPopupWidth, write=FPopupWidth, default=0};
	__property bool ShowButton = {read=FShowButton, write=SetShowButton, default=1};
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, default=0};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsCustomComboBoxEx(HWND ParentWindow) : Comctrls::TCustomComboBoxEx(ParentWindow) { }
	
};


class DELPHICLASS TsComboBoxEx;
class PASCALIMPLEMENTATION TsComboBoxEx : public TsCustomComboBoxEx
{
	typedef TsCustomComboBoxEx inherited;
	
__published:
	__property AutoCompleteOptions = {default=2};
	__property ItemsEx;
	__property Style = {default=0};
	__property StyleEx = {default=0};
	__property Action;
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property Color = {default=-16777211};
	__property Constraints;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName;
	__property ItemIndex;
	__property ItemHeight;
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text;
	__property Visible = {default=1};
	__property OnBeginEdit;
	__property OnChange;
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnDropDown;
	__property OnEndEdit;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnSelect;
	__property OnStartDock;
	__property OnStartDrag;
	__property Images;
	__property DropDownCount = {default=8};
	__property BoundLabel;
	__property DisabledKind = {default=1};
	__property ShowButton = {default=1};
	__property SkinData;
	__property ReadOnly = {default=0};
public:
	/* TsCustomComboBoxEx.Destroy */ inline __fastcall virtual ~TsComboBoxEx(void) { }
	/* TsCustomComboBoxEx.Create */ inline __fastcall virtual TsComboBoxEx(Classes::TComponent* AOwner) : TsCustomComboBoxEx(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsComboBoxEx(HWND ParentWindow) : TsCustomComboBoxEx(ParentWindow) { }
	
};


class DELPHICLASS TacSkinSelectBtn;
class PASCALIMPLEMENTATION TacSkinSelectBtn : public Sspeedbutton::TsSpeedButton
{
	typedef Sspeedbutton::TsSpeedButton inherited;
	
public:
	bool FDoClick;
	DYNAMIC void __fastcall Click(void);
	virtual bool __fastcall PrepareCache(void);
	__fastcall virtual TacSkinSelectBtn(Classes::TComponent* AOwner);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
public:
	/* TsSpeedButton.Destroy */ inline __fastcall virtual ~TacSkinSelectBtn(void) { }
	
};


#pragma option push -b-
enum TacUpdateFlags { ufUpdateThumbs, ufUpdateScale, ufFormCreating, ufFormInitializing };
#pragma option pop

class DELPHICLASS TacSkinSelectForm;
class DELPHICLASS TsSkinSelector;
class PASCALIMPLEMENTATION TacSkinSelectForm : public Forms::TForm
{
	typedef Forms::TForm inherited;
	
protected:
	int BtnIndex;
	int ItemCount;
	int ItemWidth;
	int ItemHeight;
	Sskinprovider::TsSkinProvider* sp;
	Sscrollbox::TsScrollBox* ScrollBox;
	TsSkinSelector* Selector;
	Acalphaimagelist::TsVirtualImageList* ImgList;
	Set<TacUpdateFlags, ufUpdateThumbs, ufFormInitializing>  UpdateFlags;
	void __fastcall InitFormData(void);
	void __fastcall UpdateBoxSize(void);
	void __fastcall UpdateControls(void);
	void __fastcall UpdateHotControl(void);
	void __fastcall SetBtnIndex(int NewIndex);
	void __fastcall ClickBtn(TacSkinSelectBtn* AButton);
	
public:
	__fastcall virtual ~TacSkinSelectForm(void);
	__fastcall virtual TacSkinSelectForm(Classes::TComponent* AOwner, int Dummy);
public:
	/* TCustomForm.Create */ inline __fastcall virtual TacSkinSelectForm(Classes::TComponent* AOwner) : Forms::TForm(AOwner) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TacSkinSelectForm(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	
};


#pragma option push -b-
enum TacThumbSize { tsSmall, tsMedium, tsBig };
#pragma option pop

class PASCALIMPLEMENTATION TsSkinSelector : public TsCustomComboBoxEx
{
	typedef TsCustomComboBoxEx inherited;
	
private:
	System::Byte FColCount;
	System::Byte FRowCount;
	System::Byte FItemMargin;
	System::Byte FMinItemWidth;
	bool FShowNoSkin;
	TacSkinSelectForm* Form;
	TacThumbSize FThumbSize;
	void __fastcall SetThumbSize(const TacThumbSize Value);
	void __fastcall SetShowNoSkin(const bool Value);
	void __fastcall SetColCount(const System::Byte Value);
	void __fastcall SetRowCount(const System::Byte Value);
	
protected:
	void __fastcall UpdateItemIndex(void);
	void __fastcall UpdateList(bool Immediate);
	virtual bool __fastcall AllowDropDown(void);
	void __fastcall PopulateList(bool Immediate);
	virtual System::UnicodeString __fastcall GetText(int AIndex);
	void __fastcall SetIndex(int BtnIndex, int Step);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, Classes::TShiftState Shift);
	
public:
	void __fastcall UpdateForm(void);
	virtual void __fastcall DoDropDown(void);
	__fastcall virtual ~TsSkinSelector(void);
	HIDESBASE bool __fastcall DroppedDown(void);
	virtual void __fastcall CreateWnd(void);
	__fastcall virtual TsSkinSelector(Classes::TComponent* AOwner);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	virtual void __fastcall SetItemIndex(const int Value)/* overload */;
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	virtual void __fastcall ComboWndProc(Messages::TMessage &Message, HWND ComboWnd, void * ComboProc);
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ImeMode = {default=3};
	__property ImeName;
	__property ItemHeight;
	__property MaxLength = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text;
	__property Visible = {default=1};
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnStartDock;
	__property OnStartDrag;
	__property System::Byte ItemMargin = {read=FItemMargin, write=FItemMargin, default=4};
	__property System::Byte ColCount = {read=FColCount, write=SetColCount, default=3};
	__property System::Byte RowCount = {read=FRowCount, write=SetRowCount, default=5};
	__property System::Byte MinItemWidth = {read=FMinItemWidth, write=FMinItemWidth, default=0};
	__property bool ShowNoSkin = {read=FShowNoSkin, write=SetShowNoSkin, default=1};
	__property TacThumbSize ThumbSize = {read=FThumbSize, write=SetThumbSize, default=2};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsSkinSelector(HWND ParentWindow) : TsCustomComboBoxEx(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Scomboboxes */
using namespace Scomboboxes;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ScomboboxesHPP
