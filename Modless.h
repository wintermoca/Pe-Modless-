﻿#pragma once
#include "afxdialogex.h"


// Modless 대화 상자

class Modless : public CDialogEx
{
	DECLARE_DYNAMIC(Modless)

public:
	Modless(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~Modless();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SON };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit1();
	CString m_Str;
};
