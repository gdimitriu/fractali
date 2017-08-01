/*
	Copyright 2004 Gabriel Dimitriu

	This file is part of Fractali.This is the Ferigue definition class.

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

#if !defined(AFX_FRACTALI1_H__90969F64_5446_456A_8197_F77AE8737233__INCLUDED_)
#define AFX_FRACTALI1_H__90969F64_5446_456A_8197_F77AE8737233__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Fractali1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// Fractali dialog

class Fractali : public CDialog
{
// Construction
public:
	
	void init(int NrCulori);
	Fractali(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(Fractali)
	enum { IDD = IDD_FRACTALI };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Fractali)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Fractali)
	afx_msg void OnRun();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
	int m_NrCulori;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FRACTALI1_H__90969F64_5446_456A_8197_F77AE8737233__INCLUDED_)
