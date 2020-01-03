// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sLabel.pas' rev: 6.00

#ifndef sLabelHPP
#define sLabelHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Menus.hpp>	// Pascal unit
#include <sSkinManager.hpp>	// Pascal unit
#include <sMessages.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sDefaults.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Slabel
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TsShadowMode { smNone, smCustom, smSkin1 };
#pragma option pop

#pragma option push -b-
enum TsKindType { ktStandard, ktCustom, ktSkin };
#pragma option pop

class DELPHICLASS TsCustomLabel;
class PASCALIMPLEMENTATION TsCustomLabel : public Stdctrls::TCustomLabel 
{
	typedef Stdctrls::TCustomLabel inherited;
	
private:
	Classes::TNotifyEvent FOnMouseLeave;
	Classes::TNotifyEvent FOnMouseEnter;
	AnsiString FSkinSection;
	int FSkinIndex;
	Sskinmanager::TsSkinManager* FSkinManager;
	bool FSavedParentFont;
	bool FTransparentForMouse;
	void __fastcall SetSkinSection(const AnsiString Value);
	void __fastcall SetSkinManager(const Sskinmanager::TsSkinManager* Value);
	Sskinmanager::TsSkinManager* __fastcall GetSkinManager(void);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual Graphics::TFont* __fastcall GetCurrentFont(void);
	virtual Graphics::TColor __fastcall TextColor(void);
	int __fastcall SkinIndex(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	bool __fastcall ManagerStored(void);
	
public:
	__fastcall virtual TsCustomLabel(Classes::TComponent* AOwner);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Paint(void);
	DYNAMIC void __fastcall DoDrawText(Types::TRect &Rect, int Flags);
	__property Font ;
	
__published:
	__property Align  = {default=0};
	__property Alignment  = {default=0};
	__property Anchors  = {default=3};
	__property AutoSize  = {default=1};
	__property BiDiMode ;
	__property Sskinmanager::TsSkinManager* SkinManager = {read=GetSkinManager, write=SetSkinManager, stored=ManagerStored};
	__property AnsiString SkinSection = {read=FSkinSection, write=SetSkinSection};
	__property Caption ;
	__property Color  = {default=-2147483643};
	__property Constraints ;
	__property DragCursor  = {default=-12};
	__property DragKind  = {default=0};
	__property DragMode  = {default=0};
	__property Enabled  = {default=1};
	__property FocusControl ;
	__property ParentBiDiMode  = {default=1};
	__property ParentColor  = {default=1};
	__property ParentFont  = {default=1};
	__property ParentShowHint  = {default=1};
	__property PopupMenu ;
	__property ShowAccelChar  = {default=1};
	__property ShowHint ;
	__property Transparent  = {default=1};
	__property bool TransparentForMouse = {read=FTransparentForMouse, write=FTransparentForMouse, default=0};
	__property Layout  = {default=0};
	__property Visible  = {default=1};
	__property WordWrap  = {default=0};
	__property OnClick ;
	__property OnContextPopup ;
	__property OnDblClick ;
	__property OnDragDrop ;
	__property OnDragOver ;
	__property OnEndDock ;
	__property OnEndDrag ;
	__property OnMouseDown ;
	__property OnMouseMove ;
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property OnMouseUp ;
	__property OnStartDock ;
	__property OnStartDrag ;
public:
	#pragma option push -w-inl
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TsCustomLabel(void) { }
	#pragma option pop
	
};


#pragma pack(push, 1)
struct TsClassSkinData
{
	bool CustomColor;
	bool CustomFont;
} ;
#pragma pack(pop)

typedef void __fastcall (__closure *TLinkClickEvent)(System::TObject* Sender, AnsiString &ALink, bool &DefaultAction);

class DELPHICLASS TsLabel;
class PASCALIMPLEMENTATION TsLabel : public TsCustomLabel 
{
	typedef TsCustomLabel inherited;
	
private:
	bool FUseSkinColor;
	void __fastcall SetUseSkinColor(const bool Value);
	
protected:
	virtual Graphics::TColor __fastcall TextColor(void);
	
public:
	__fastcall virtual TsLabel(Classes::TComponent* AOwner);
	
__published:
	__property Font ;
	__property bool UseSkinColor = {read=FUseSkinColor, write=SetUseSkinColor, default=1};
public:
	#pragma option push -w-inl
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TsLabel(void) { }
	#pragma option pop
	
};


class DELPHICLASS TsImgLabel;
class PASCALIMPLEMENTATION TsImgLabel : public TsLabel 
{
	typedef TsLabel inherited;
	
private:
	int FSpacing;
	void __fastcall SetInteger(const int Index, const int Value);
	
protected:
	Imglist::TChangeLink* FImageChangeLink;
	Imglist::TCustomImageList* FImages;
	int FImageIndex;
	bool __fastcall ImageExists(void);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall SetImageIndex(const int Value);
	void __fastcall SetImages(const Imglist::TCustomImageList* Value);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	void __fastcall DrawIntText(Graphics::TCanvas* ACanvas, Types::TRect &Rect, int Flags);
	DYNAMIC void __fastcall AdjustBounds(void);
	
public:
	__fastcall virtual TsImgLabel(Classes::TComponent* AOwner);
	__fastcall virtual ~TsImgLabel(void);
	virtual void __fastcall Paint(void);
	
__published:
	__property int ImageIndex = {read=FImageIndex, write=SetInteger, index=0, default=-1};
	__property int Spacing = {read=FSpacing, write=SetInteger, index=1, default=4};
	__property Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
};


class DELPHICLASS TsEditLabel;
class PASCALIMPLEMENTATION TsEditLabel : public TsLabel 
{
	typedef TsLabel inherited;
	
public:
	System::TObject* BoundLabel;
	__fastcall TsEditLabel(System::TObject* BoundStruct);
	__fastcall virtual ~TsEditLabel(void);
public:
	#pragma option push -w-inl
	/* TsLabel.Create */ inline __fastcall virtual TsEditLabel(Classes::TComponent* AOwner) : TsLabel(AOwner) { }
	#pragma option pop
	
};


class DELPHICLASS TsWebLabel;
class PASCALIMPLEMENTATION TsWebLabel : public TsLabel 
{
	typedef TsLabel inherited;
	
private:
	Graphics::TFont* FNormalFont;
	void __fastcall SetHoverFont(const Graphics::TFont* Value);
	void __fastcall SetNormalFont(const Graphics::TFont* Value);
	
protected:
	Graphics::TFont* FHoverFont;
	AnsiString FURL;
	Sconst::TsWindowShowMode FShowMode;
	virtual Graphics::TColor __fastcall TextColor(void);
	virtual Graphics::TFont* __fastcall GetCurrentFont(void);
	DYNAMIC void __fastcall ChangeScale(int M, int D);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	MESSAGE void __fastcall WMEraseBkGnd(Messages::TWMMouse &Message);
	
public:
	bool MouseAbove;
	__fastcall virtual TsWebLabel(Classes::TComponent* AOwner);
	__fastcall virtual ~TsWebLabel(void);
	DYNAMIC void __fastcall Click(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
__published:
	__property Graphics::TFont* Font = {read=FNormalFont, write=SetNormalFont};
	__property Cursor  = {default=-21};
	__property Graphics::TFont* HoverFont = {read=FHoverFont, write=SetHoverFont};
	__property Sconst::TsWindowShowMode ShowMode = {read=FShowMode, write=FShowMode, default=10};
	__property AnsiString URL = {read=FURL, write=FURL};
};


class DELPHICLASS TsKind;
class PASCALIMPLEMENTATION TsKind : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Graphics::TColor FColor;
	Controls::TControl* FOwner;
	TsKindType FKindType;
	void __fastcall SetKindType(const TsKindType Value);
	void __fastcall SetColor(const Graphics::TColor Value);
	
public:
	__fastcall TsKind(Controls::TControl* AOwner);
	
__published:
	__property TsKindType KindType = {read=FKindType, write=SetKindType, default=2};
	__property Graphics::TColor Color = {read=FColor, write=SetColor, default=16777215};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TsKind(void) { }
	#pragma option pop
	
};


#pragma pack(push, 4)
struct TShadowData
{
	int Blur;
	int Offset;
	int Alpha;
	Graphics::TColor Color;
} ;
#pragma pack(pop)

class DELPHICLASS TacOffsetKeeper;
class PASCALIMPLEMENTATION TacOffsetKeeper : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	int FRightBottom;
	int FLeftTop;
	
__published:
	__property int LeftTop = {read=FLeftTop, write=FLeftTop, stored=true, nodefault};
	__property int RightBottom = {read=FRightBottom, write=FRightBottom, stored=true, nodefault};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacOffsetKeeper(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TacOffsetKeeper(void) : Classes::TPersistent() { }
	#pragma option pop
	
};


class DELPHICLASS TsShadow;
class DELPHICLASS TsLabelFX;
class PASCALIMPLEMENTATION TsLabelFX : public TsCustomLabel 
{
	typedef TsCustomLabel inherited;
	
private:
	int FAngle;
	int OffsTopLeft;
	int FMaskBitsSize;
	bool IntPosChanging;
	bool FNeedInvalidate;
	Graphics::TBitmap* FMask;
	void *FMaskBits;
	TsShadow* FShadow;
	TsKind* FKind;
	int PrevCtrlWidth;
	void __fastcall SetAngle(const int Value);
	
protected:
	virtual Graphics::TColor __fastcall TextColor(void);
	DYNAMIC void __fastcall AdjustBounds(void);
	
public:
	__fastcall virtual TsLabelFX(Classes::TComponent* AOwner);
	__fastcall virtual ~TsLabelFX(void);
	virtual void __fastcall Invalidate(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	DYNAMIC void __fastcall DoDrawText(Types::TRect &Rect, int Flags);
	TShadowData __fastcall CurrentShadowData();
	Graphics::TColor __fastcall CurrentFontColor(void);
	bool __fastcall ShadowExists(void);
	void __fastcall UpdatePosition(void);
	
__published:
	__property Font ;
	__property int Angle = {read=FAngle, write=SetAngle, nodefault};
	__property TsKind* Kind = {read=FKind, write=FKind};
	__property TsShadow* Shadow = {read=FShadow, write=FShadow};
};


class PASCALIMPLEMENTATION TsShadow : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	int FDistance;
	int FBlurCount;
	bool FBuffered;
	Graphics::TColor FColor;
	TsLabelFX* ParentControl;
	TsShadowMode FMode;
	Byte FAlphaValue;
	TacOffsetKeeper* FOffsetKeeper;
	void __fastcall UpdateRGB(void);
	void __fastcall SetAlphaValue(const Byte Value);
	void __fastcall SetColor(const Graphics::TColor Value);
	void __fastcall SetMode(const TsShadowMode Value);
	void __fastcall SetInteger(const int Index, const int Value);
	
public:
	int sr;
	int sg;
	int sb;
	__fastcall TsShadow(TsLabelFX* Control);
	__fastcall virtual ~TsShadow(void);
	__property bool ShadowBuffered = {read=FBuffered, write=FBuffered, default=0};
	
__published:
	__property TacOffsetKeeper* OffsetKeeper = {read=FOffsetKeeper, write=FOffsetKeeper};
	__property Byte AlphaValue = {read=FAlphaValue, write=SetAlphaValue, default=255};
	__property Graphics::TColor Color = {read=FColor, write=SetColor, default=0};
	__property TsShadowMode Mode = {read=FMode, write=SetMode, default=2};
	__property int BlurCount = {read=FBlurCount, write=SetInteger, index=0, default=4};
	__property int Distance = {read=FDistance, write=SetInteger, index=1, default=1};
};


#pragma option push -b-
enum TAlignTo { altLeft, altTop, altBottom, altRight, altTopCenter, altBottomCenter };
#pragma option pop

class DELPHICLASS TsStickyLabel;
class PASCALIMPLEMENTATION TsStickyLabel : public TsLabel 
{
	typedef TsLabel inherited;
	
private:
	int FGap;
	TAlignTo FAlignTo;
	Controls::TControl* FAttachTo;
	bool FRealigning;
	Classes::TWndMethod FOldWinProc;
	void __fastcall SetGap(int Value);
	void __fastcall SetAttachTo(Controls::TControl* Value);
	void __fastcall SetAlignTo(TAlignTo Value);
	void __fastcall NewWinProc(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall Adjust(bool MoveLabel);
	
public:
	__fastcall virtual TsStickyLabel(Classes::TComponent* AOwner);
	__fastcall virtual ~TsStickyLabel(void);
	virtual void __fastcall Loaded(void);
	
__published:
	__property Font ;
	__property TAlignTo AlignTo = {read=FAlignTo, write=SetAlignTo, default=0};
	__property Controls::TControl* AttachTo = {read=FAttachTo, write=SetAttachTo};
	__property int Gap = {read=FGap, write=SetGap, default=2};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Slabel */
using namespace Slabel;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// sLabel
