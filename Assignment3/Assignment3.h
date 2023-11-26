// Assignment3.h : main header file for the Assignment3 DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include <Windows.h>
#include<arxHeaders.h>
#include <dbents.h>



// CAssignment3App
// See Assignment3.cpp for the implementation of this class
//

class CAssignment3App : public CWinApp
{
public:
	CAssignment3App();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
