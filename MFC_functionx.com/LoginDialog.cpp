// LoginDialog.cpp : implementation file
//

#include "stdafx.h"
#include "LoginDialog.h"

#include <iostream>

IMPLEMENT_DYNAMIC(LoginDialog, CDialog)

LoginDialog::LoginDialog(CWnd* pParent /*=NULL*/)
	: CDialog(LoginDialog::IDD, pParent)
{
	
}

LoginDialog::~LoginDialog()
{

}

void LoginDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(LoginDialog, CDialog)

	ON_WM_CREATE()
	ON_WM_CLOSE()
	ON_WM_DESTROY()

END_MESSAGE_MAP()

int LoginDialog::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;

	AfxMessageBox(L"Login dialog created");

	return 0;
}

BOOL LoginDialog::OnInitDialog()
{
	if (!CDialog::OnInitDialog())
		return FALSE;

	AfxMessageBox(L"Login dialog initialized");

	return TRUE;
}

void LoginDialog::OnDestroy()
{
	CDialog::OnDestroy();

	AfxMessageBox(L"Login dialog destroyed");
}
