// DonateDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "TrafficMonitor.h"
#include "DonateDlg.h"
#include "afxdialogex.h"


// CDonateDlg �Ի���

IMPLEMENT_DYNAMIC(CDonateDlg, CDialog)

CDonateDlg::CDonateDlg(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_DONATE_DIALOG, pParent)
{

}

CDonateDlg::~CDonateDlg()
{
}

void CDonateDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_DONATE_PIC, m_donate_pic);
}


BEGIN_MESSAGE_MAP(CDonateDlg, CDialog)
END_MESSAGE_MAP()


// CDonateDlg ��Ϣ��������


BOOL CDonateDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  �ڴ����Ӷ���ĳ�ʼ��
	CWindowDC dc(this);
	HDC hDC = dc.GetSafeHdc();
	int dpi = GetDeviceCaps(hDC, LOGPIXELSY);
	int side = 304 * dpi / 96;

	m_donate_pic.SetWindowPos(&CWnd::wndTop, 0, 0, side, side, SWP_NOMOVE);	//���Ŀؼ��Ŀ��͸�

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}