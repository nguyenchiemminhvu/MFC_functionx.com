#include "CApplication.h"

#include "LoginDialog.h"

CApplication theApp;

BOOL CApplication::InitInstance()
{
	if (!CWinApp::InitInstance())
		return FALSE;

	LoginDialog *lDialog = new LoginDialog(NULL);
	m_pMainWnd = lDialog;
	lDialog->DoModal();
	delete lDialog;

	return TRUE;
}

BEGIN_MESSAGE_MAP(CApplication, CWinApp)

END_MESSAGE_MAP()