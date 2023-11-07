// Modless.cpp: 구현 파일
//

#include "pch.h"
#include "Pe.h"
#include "afxdialogex.h"
#include "Modless.h"


// Modless 대화 상자

IMPLEMENT_DYNAMIC(Modless, CDialogEx)

Modless::Modless(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SON, pParent)
	, m_Str(_T(""))
{

}

Modless::~Modless()
{
}

void Modless::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Str);
}


BEGIN_MESSAGE_MAP(Modless, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Modless::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT1, &Modless::OnEnChangeEdit1)
END_MESSAGE_MAP()


// Modless 메시지 처리기

#include "PeDlg.h"
void Modless::OnBnClickedButton1()
{
	CPeDlg* p = (CPeDlg*)GetParent();
	UpdateData(true);
	p->m_List.AddString(m_Str);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void Modless::OnEnChangeEdit1()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
