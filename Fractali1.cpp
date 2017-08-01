// Fractali1.cpp : implementation file
//
/*
	Copyright 2004 Gabriel Dimitriu

	This file is part of Fractali.This is the implementation of Ferigue class.

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

#include "stdafx.h"
#include "fractali.h"
#include "Fractali1.h"
#include<math.h>
#include<stdlib.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Fractali dialog


Fractali::Fractali(CWnd* pParent /*=NULL*/)
	: CDialog(Fractali::IDD, pParent)
{
	//{{AFX_DATA_INIT(Fractali)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void Fractali::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Fractali)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Fractali, CDialog)
	//{{AFX_MSG_MAP(Fractali)
	ON_BN_CLICKED(IDC_RUN, OnRun)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Fractali message handlers

void Fractali::OnRun() 
{
	// TODO: Add your control notification handler code here
	CClientDC dc(this);
	int color;
	double a[]={0.,0.2,-.15,0.85};
	double b[]={0,-.25,.3,.05};
	double c[]={0,.20,.25,-0.5};
	double d[]={0.15,.20,.25,.85};
	double e[]={0,0,0,0};
	double f[]={0,1.5,.45,1.5};
	double p[]={320,2600,4900,32767};
	int xscale=25,yscale=25,xoffset=0,yoffset=-160;
	int px,py,i,j,k;
	double y=0,x=0,newx;
	color=3;
	srand(5);
	for(i=1;i<=10000;i++)
	{
		j=rand();
		k=(j<p[0])?0:((j<p[1])?1:((j<p[2])?2:3));
		if(k==0) color=(0,0,0);
		else if(k==1) color=(255,0,0);
		else if(k==2) color=(0,255,0);
		else color=(0,0,255);
		newx=a[k]*x+b[k]*y+e[k];
		y=c[k]*x+d[k]*y+f[k];
		x=newx;
		px=x*xscale+xoffset;
		py=y*yscale+yoffset;
		if((px>=-320)&&(px<320)&&(py>=-240)&&(py<240)) dc.SetPixel(px+320,py+240,color);
	}
}

void Fractali::init(int NrCulori)
{
	m_NrCulori=3;
}
