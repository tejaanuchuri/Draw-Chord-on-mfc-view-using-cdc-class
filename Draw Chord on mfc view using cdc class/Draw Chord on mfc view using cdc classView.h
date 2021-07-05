
// Draw Chord on mfc view using cdc classView.h : interface of the CDrawChordonmfcviewusingcdcclassView class
//

#pragma once


class CDrawChordonmfcviewusingcdcclassView : public CView
{
protected: // create from serialization only
	CDrawChordonmfcviewusingcdcclassView() noexcept;
	DECLARE_DYNCREATE(CDrawChordonmfcviewusingcdcclassView)

// Attributes
public:
	CDrawChordonmfcviewusingcdcclassDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CDrawChordonmfcviewusingcdcclassView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Draw Chord on mfc view using cdc classView.cpp
inline CDrawChordonmfcviewusingcdcclassDoc* CDrawChordonmfcviewusingcdcclassView::GetDocument() const
   { return reinterpret_cast<CDrawChordonmfcviewusingcdcclassDoc*>(m_pDocument); }
#endif

