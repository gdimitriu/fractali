// Julia.h : header file
//
/*
	Copyright 2004 Gabriel Dimitriu

	This file is part of Fractali.This is the definition of Julia Class.

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

#if !defined(AFX_JULIA_H__062874DB_65F3_4822_ACBA_42D117156821__INCLUDED_)
#define AFX_JULIA_H__062874DB_65F3_4822_ACBA_42D117156821__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// Julia dialog

class Julia : public CDialog
{
// Construction
public:
	Julia(CWnd* pParent = NULL);   // standard constructor
	void init(int NrCulori);
// Dialog Data
	//{{AFX_DATA(Julia)
	enum { IDD = IDD_JULIA };
	int		m_inalt;
	int		m_lung;
	double	m_p;
	double	m_q;
	double	m_xmax;
	double	m_xmin;
	double	m_ymax;
	double	m_ymin;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(Julia)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(Julia)
	afx_msg void OnRun();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	int m_NrCulori;
	long m_KMare;
	double m_M;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JULIA_H__062874DB_65F3_4822_ACBA_42D117156821__INCLUDED_)
