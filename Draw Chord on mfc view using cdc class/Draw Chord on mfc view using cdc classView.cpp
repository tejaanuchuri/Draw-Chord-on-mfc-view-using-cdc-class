
// Draw Chord on mfc view using cdc classView.cpp : implementation of the CDrawChordonmfcviewusingcdcclassView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Draw Chord on mfc view using cdc class.h"
#endif

#include "Draw Chord on mfc view using cdc classDoc.h"
#include "Draw Chord on mfc view using cdc classView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDrawChordonmfcviewusingcdcclassView

IMPLEMENT_DYNCREATE(CDrawChordonmfcviewusingcdcclassView, CView)

BEGIN_MESSAGE_MAP(CDrawChordonmfcviewusingcdcclassView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CDrawChordonmfcviewusingcdcclassView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CDrawChordonmfcviewusingcdcclassView construction/destruction

CDrawChordonmfcviewusingcdcclassView::CDrawChordonmfcviewusingcdcclassView() noexcept
{
	// TODO: add construction code here

}

CDrawChordonmfcviewusingcdcclassView::~CDrawChordonmfcviewusingcdcclassView()
{
}

BOOL CDrawChordonmfcviewusingcdcclassView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CDrawChordonmfcviewusingcdcclassView drawing

void CDrawChordonmfcviewusingcdcclassView::OnDraw(CDC* pDC)
{
	CDrawChordonmfcviewusingcdcclassDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->SetArcDirection(AD_COUNTERCLOCKWISE);
	pDC->Chord(20, 20, 226, 144, 202, 115, 105, 32);
	// TODO: add draw code for native data here
}


// CDrawChordonmfcviewusingcdcclassView printing


void CDrawChordonmfcviewusingcdcclassView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CDrawChordonmfcviewusingcdcclassView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDrawChordonmfcviewusingcdcclassView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDrawChordonmfcviewusingcdcclassView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CDrawChordonmfcviewusingcdcclassView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CDrawChordonmfcviewusingcdcclassView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CDrawChordonmfcviewusingcdcclassView diagnostics

#ifdef _DEBUG
void CDrawChordonmfcviewusingcdcclassView::AssertValid() const
{
	CView::AssertValid();
}

void CDrawChordonmfcviewusingcdcclassView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDrawChordonmfcviewusingcdcclassDoc* CDrawChordonmfcviewusingcdcclassView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDrawChordonmfcviewusingcdcclassDoc)));
	return (CDrawChordonmfcviewusingcdcclassDoc*)m_pDocument;
}
#endif //_DEBUG


// CDrawChordonmfcviewusingcdcclassView message handlers
