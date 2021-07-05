
// Draw Chord on mfc view using cdc class.h : main header file for the Draw Chord on mfc view using cdc class application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CDrawChordonmfcviewusingcdcclassApp:
// See Draw Chord on mfc view using cdc class.cpp for the implementation of this class
//

class CDrawChordonmfcviewusingcdcclassApp : public CWinAppEx
{
public:
	CDrawChordonmfcviewusingcdcclassApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDrawChordonmfcviewusingcdcclassApp theApp;
