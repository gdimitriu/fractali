// fractaliDlg.h : header file
//
/*
	Copyright 2004 Gabriel Dimitriu

	This file is part of Fractali.

    Fractali is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    Fractali is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Fractali; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  
*/

#if !defined(AFX_FRACTALIDLG_H__9AB618D8_9A52_433C_BAF5_20B176BF86B7__INCLUDED_)
#define AFX_FRACTALIDLG_H__9AB618D8_9A52_433C_BAF5_20B176BF86B7__INCLUDED_

#include "Fractali1.h"	// Added by ClassView
#include "Julia.h"	// Added by ClassView
#include "Mandelbrot.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CFractaliDlg dialog

class CFractaliDlg : public CDialog
{
// Construction
public:
	CFractaliDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CFractaliDlg)
	enum { IDD = IDD_FRACTALI_DIALOG };
	int		m_NrCulori;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFractaliDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	Fractali m_Fractali;
	Julia m_Julia;
	Mandelbrot m_Mandelbrot;
	// Generated message map functions
	//{{AFX_MSG(CFractaliDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnJulia();
	afx_msg void OnMandelbrot();
	afx_msg void OnFeriga();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FRACTALIDLG_H__9AB618D8_9A52_433C_BAF5_20B176BF86B7__INCLUDED_)
