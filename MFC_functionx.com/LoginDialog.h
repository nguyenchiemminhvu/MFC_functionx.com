#pragma once

#ifndef __LOGIN_DIALOG_H__
#define __LOGIN_DIALOG_H__

#include "afxwin.h"
#include "resource.h"

class LoginDialog : public CDialog
{
	DECLARE_DYNAMIC(LoginDialog)

public:
	LoginDialog(CWnd* pParent = NULL);   // standard constructor
	virtual ~LoginDialog();

// Dialog Data
	enum { IDD = IDD_LOGIN_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

public:
	DECLARE_MESSAGE_MAP()
	afx_msg virtual int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg virtual BOOL OnInitDialog();
	afx_msg virtual void OnDestroy();
};

#endif // __LOGIN_DIALOG_H__