// CodeGear C++Builder
// Copyright (c) 1995, 2008 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Slistview.pas' rev: 20.00

#ifndef SlistviewHPP
#define SlistviewHPP

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
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Comctrls.hpp>	// Pascal unit
#include <Imglist.hpp>	// Pascal unit
#include <Stdctrls.hpp>	// Pascal unit
#include <Commctrl.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <Sconst.hpp>	// Pascal unit
#include <Scommondata.hpp>	// Pascal unit
#include <Smessages.hpp>	// Pascal unit
#include <Acsbutils.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Slistview
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TColumnResizeEvent)(Comctrls::TCustomListView* sender, int columnIndex, int columnWidth);

class DELPHICLASS TsCustomListView;
class PASCALIMPLEMENTATION TsCustomListView : public Comctrls::TCustomListView
{
	typedef Comctrls::TCustomListView inherited;
	
private:
	void *FhHeaderProc;
	void *FhDefHeaderProc;
	int SysCheckSize;
	int HoverColIndex;
	int FPressedColumn;
	bool FFlag;
	bool Loading;
	bool Invalidating;
	bool SkipAdvancedDraw;
	bool FHighlightHeaders;
	TColumnResizeEvent FColumnResizeEvent;
	TColumnResizeEvent FEndColumnResizeEvent;
	TColumnResizeEvent FBeginColumnResizeEvent;
	Comctrls::TLVCustomDrawItemEvent FOldCustomDrawItem;
	Comctrls::TLVAdvancedCustomDrawEvent FOldAdvancedCustomDraw;
	Comctrls::TLVAdvancedCustomDrawItemEvent FOldAdvancedCustomDrawItem;
	tagSIZE CheckSize;
	HWND FhWndHeader;
	Scommondata::TsBoundLabel* FBoundLabel;
	Scommondata::TsScrollWndData* FCommonData;
	Stdctrls::TMeasureItemEvent FOnMeasureItem;
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	MESSAGE void __fastcall WMHitTest(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMParentNotify(Messages::TWMParentNotify &Message);
	HIDESBASE MESSAGE void __fastcall WMEraseBKGnd(Messages::TWMPaint &Message);
	void __fastcall NewCustomDrawItem(Comctrls::TCustomListView* Sender, Comctrls::TListItem* Item, Comctrls::TCustomDrawState State, bool &DefaultDraw);
	void __fastcall UpdateCanvasColors(bool Active, bool Selected);
	void __fastcall NewAdvancedCustomDraw(Comctrls::TCustomListView* Sender, const Types::TRect &ARect, Comctrls::TCustomDrawStage Stage, bool &DefaultDraw);
	void __fastcall NewAdvancedCustomDrawItem(Comctrls::TCustomListView* Sender, Comctrls::TListItem* Item, Comctrls::TCustomDrawState State, Comctrls::TCustomDrawStage Stage, bool &DefaultDraw);
	void __fastcall NewAdvancedCustomDrawSubItem(Comctrls::TCustomListView* Sender, Comctrls::TListItem* Item, int SubItem, Comctrls::TCustomDrawState State, Comctrls::TCustomDrawStage Stage, bool &DefaultDraw, Graphics::TBitmap* Bmp)/* overload */;
	void __fastcall PrepareCache(void);
	void __fastcall PaintHeader(void);
	Types::TRect __fastcall GetHeaderColumnRect(const int Index);
	void __fastcall ColumnSkinPaint(const Types::TRect &ControlRect, const int cIndex);
	bool __fastcall FontStored(void);
	bool __fastcall ColorStored(void);
	
protected:
	int HotItem;
	int iSelectIndex;
	int PrevItemIndex;
	int ColumnSizeChanging;
	bool AutoChanging;
	bool NewStyleItems;
	bool StyleChanging;
	Acsbutils::TacScrollWnd* ListSW;
	void __fastcall DoBeginColumnResize(const int ColumnIndex, const int ColumnWidth);
	void __fastcall DoEndColumnResize(const int ColumnIndex, const int ColumnWidth);
	void __fastcall DoColumnResize(const int ColumnIndex, const int ColumnWidth);
	HIDESBASE MESSAGE void __fastcall WMNotify(Messages::TWMNotify &msg);
	int __fastcall FindColumnIndex(const Windows::PNMHdr pHeader);
	int __fastcall FindColumnWidth(const Windows::PNMHdr pHeader);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	HIDESBASE void __fastcall HeaderWndProc(Messages::TMessage &Message);
	int __fastcall HeaderOffset(void);
	void __fastcall InitSkinParams(void);
	bool __fastcall FullRepaint(void);
	bool __fastcall ItemIsHot(const Comctrls::TListItem* Item, const Types::TRect &R);
	__property BorderStyle = {default=1};
	unsigned __fastcall MakeDragImage(const Messages::TMessage &Message);
	void __fastcall InvalidateSmooth(void);
	Imglist::TCustomImageList* __fastcall GetImageList(void);
	
public:
	virtual void __fastcall SetViewStyle(Comctrls::TViewStyle Value);
	int __fastcall ColumnLeft(const int Index);
	__fastcall virtual TsCustomListView(Classes::TComponent* AOwner);
	virtual void __fastcall InitControl(const bool Skinned);
	void __fastcall RedrawItem(int Index);
	__fastcall virtual ~TsCustomListView(void);
	virtual void __fastcall Invalidate(void);
	void __fastcall UpdateAutoSize(void);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Loaded(void);
	DYNAMIC void __fastcall Click(void);
	virtual void __fastcall CreateWnd(void);
	void __fastcall SelectItem(const int Index);
	
__published:
	__property Color = {stored=ColorStored, default=-16777211};
	__property Font = {stored=FontStored};
	__property ParentFont = {stored=FontStored, default=1};
	__property Action;
	__property BevelInner = {index=0, default=2};
	__property BevelKind = {default=0};
	__property BevelOuter = {index=1, default=1};
	__property BevelEdges = {default=15};
	__property DoubleBuffered;
	__property Groups;
	__property GroupView = {default=0};
	__property GroupHeaderImages;
	__property Scommondata::TsBoundLabel* BoundLabel = {read=FBoundLabel, write=FBoundLabel};
	__property Scommondata::TsScrollWndData* SkinData = {read=FCommonData, write=FCommonData};
	__property bool HighlightHeaders = {read=FHighlightHeaders, write=FHighlightHeaders, default=1};
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property Stdctrls::TMeasureItemEvent OnMeasureItem = {read=FOnMeasureItem, write=FOnMeasureItem};
	__property OnItemChecked;
	__property TColumnResizeEvent OnBeginColumnResize = {read=FBeginColumnResizeEvent, write=FBeginColumnResizeEvent};
	__property TColumnResizeEvent OnEndColumnResize = {read=FEndColumnResizeEvent, write=FEndColumnResizeEvent};
	__property TColumnResizeEvent OnColumnResize = {read=FColumnResizeEvent, write=FColumnResizeEvent};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsCustomListView(HWND ParentWindow) : Comctrls::TCustomListView(ParentWindow) { }
	
};


class DELPHICLASS TsListView;
class PASCALIMPLEMENTATION TsListView : public TsCustomListView
{
	typedef TsCustomListView inherited;
	
__published:
	__property Align = {default=0};
	__property AllocBy = {default=0};
	__property Anchors = {default=3};
	__property BiDiMode;
	__property BorderStyle = {default=1};
	__property BorderWidth = {default=0};
	__property Checkboxes = {default=0};
	__property Color = {default=-16777211};
	__property Columns;
	__property ColumnClick = {default=1};
	__property Constraints;
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property FlatScrollBars = {default=0};
	__property FullDrag = {default=0};
	__property GridLines = {default=0};
	__property HideSelection = {default=1};
	__property HotTrack = {default=0};
	__property HotTrackStyles = {default=0};
	__property HoverTime = {default=-1};
	__property IconOptions;
	__property Items;
	__property LargeImages;
	__property MultiSelect = {default=0};
	__property OwnerData = {default=0};
	__property OwnerDraw = {default=0};
	__property ReadOnly = {default=0};
	__property RowSelect = {default=0};
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowColumnHeaders = {default=1};
	__property ShowWorkAreas = {default=0};
	__property ShowHint;
	__property SmallImages;
	__property SortType = {default=0};
	__property StateImages;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property ViewStyle = {default=0};
	__property Visible = {default=1};
	__property OnAdvancedCustomDraw;
	__property OnAdvancedCustomDrawItem;
	__property OnAdvancedCustomDrawSubItem;
	__property OnChange;
	__property OnChanging;
	__property OnClick;
	__property OnColumnClick;
	__property OnColumnDragged;
	__property OnColumnRightClick;
	__property OnCompare;
	__property OnContextPopup;
	__property OnCustomDraw;
	__property OnCustomDrawItem;
	__property OnCustomDrawSubItem;
	__property OnData;
	__property OnDataFind;
	__property OnDataHint;
	__property OnDataStateChange;
	__property OnDblClick;
	__property OnDeletion;
	__property OnDrawItem;
	__property OnEdited;
	__property OnEditing;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnGetImageIndex;
	__property OnGetSubItemImage;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnInfoTip;
	__property OnInsert;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property OnSelectItem;
	__property OnStartDock;
	__property OnStartDrag;
	__property BoundLabel;
	__property SkinData;
public:
	/* TsCustomListView.Create */ inline __fastcall virtual TsListView(Classes::TComponent* AOwner) : TsCustomListView(AOwner) { }
	/* TsCustomListView.Destroy */ inline __fastcall virtual ~TsListView(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TsListView(HWND ParentWindow) : TsCustomListView(ParentWindow) { }
	
};


class DELPHICLASS TsHackedListItems;
class PASCALIMPLEMENTATION TsHackedListItems : public Comctrls::TListItems
{
	typedef Comctrls::TListItems inherited;
	
public:
	bool FNoRedraw;
public:
	/* TListItems.Create */ inline __fastcall TsHackedListItems(Comctrls::TCustomListView* AOwner) : Comctrls::TListItems(AOwner) { }
	/* TListItems.Destroy */ inline __fastcall virtual ~TsHackedListItems(void) { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool acSmallCheckBoxes;
extern PACKAGE void __fastcall ListViewToCSV(TsListView* LV, const System::UnicodeString FileName);

}	/* namespace Slistview */
using namespace Slistview;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SlistviewHPP
