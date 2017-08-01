// Mandelbrot.cpp : implementation file
//
/*
	Copyright 2004 Gabriel Dimitriu

	This file is part of Fractali.This is the implementation of Mandelbrot class.

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
#include "Mandelbrot.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Mandelbrot dialog


Mandelbrot::Mandelbrot(CWnd* pParent /*=NULL*/)
	: CDialog(Mandelbrot::IDD, pParent)
{
	//{{AFX_DATA_INIT(Mandelbrot)
	m_test = _T("");
	m_inalt = 0;
	m_lung = 0;
	m_p = 0.0;
	m_q = 0.0;
	m_xmax = 0.0;
	m_xmin = 0.0;
	m_ymax = 0.0;
	m_ymin = 0.0;
	//}}AFX_DATA_INIT
}


void Mandelbrot::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Mandelbrot)
	DDX_Text(pDX, IDC_INALTM, m_inalt);
	DDX_Text(pDX, IDC_LUNGM, m_lung);
	DDX_Text(pDX, IDC_PM, m_p);
	DDX_Text(pDX, IDC_QM, m_q);
	DDX_Text(pDX, IDC_XMAXM, m_xmax);
	DDX_Text(pDX, IDC_XMINM, m_xmin);
	DDX_Text(pDX, IDC_YMAXM, m_ymax);
	DDX_Text(pDX, IDC_YMINM, m_ymin);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Mandelbrot, CDialog)
	//{{AFX_MSG_MAP(Mandelbrot)
	ON_BN_CLICKED(IDC_RUNM, OnRun)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Mandelbrot message handlers

void Mandelbrot::OnRun() 
{
	// TODO: Add your control notification handler code here
	CClientDC dc(this);
	int nx,ny,k;
	double x,y;
	double deltax,deltay;
	double x1,y1;
	double r;
	deltax=(m_xmax-m_xmin)/m_lung;
	deltay=(m_ymax-m_ymin)/m_inalt;
	int dim_color;
	int red,green,blue,color;
	for(ny=0;ny<m_inalt;ny++)
	{
		for(nx=0;nx<m_lung;nx++)
		{
			x=0;
			y=0;
			k=0;
			while(1)
			{
				k++;
				x1=x*x-y*y+m_xmin+nx*deltax;
				y1=2*x*y+m_ymin+ny*deltay;
				x=x1;
				y=y1;
				r=x*x+y*y;
				if((r>m_M)||(k>=m_KMare)) break;
			}
			k=k%m_NrCulori;
			color=k%8;
			dim_color=k/8;
			switch(color)
			{
			case 1:
				red=255-dim_color;
				blue=green=dim_color;
				break;
			case 2:
				green=255-dim_color;
				blue=red=dim_color;
				break;
			case 3:
				blue=255-dim_color;
				green=red=dim_color;
				break;
			case 4:
				red=green=255-dim_color;
				blue=dim_color;
				break;
			case 5:
				green=blue=255-dim_color;
				red=dim_color;
				break;
			case 6:
				red=blue=255-dim_color;
				green=dim_color;
				break;
			case 7:
				red=green=blue=255-dim_color;
				break;
			case 0:
				red=green=blue=dim_color;
				break;
			}
			blue=blue<<16;
			green=green<<8;
			dc.SetPixel(nx,ny,(red|green|blue));
		}
	}
}

void Mandelbrot::init(int NrCulori)
{
	m_KMare=160;
	m_M=100.0;
	m_NrCulori=NrCulori;
	m_p=0.27334;
	m_q=0.007421;
	m_lung=447;
	m_inalt=248;
	m_xmin=-1.5;
	m_xmax=1.5;
	m_ymin=-1.5;
	m_ymax=1.5;
}
