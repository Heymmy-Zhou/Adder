
// AdderDlg.h: 头文件
//

#pragma once


// CAdderDlg 对话框
class CAdderDlg : public CDialogEx
{
// 构造
public:
	CAdderDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ADDER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	double m_add1;
	double m_add2;
	double m_r;
	afx_msg void OnBnClickedReset();
	afx_msg void OnBnClickedAbout();
};
