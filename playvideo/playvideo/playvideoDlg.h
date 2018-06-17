
// playvideoDlg.h : 头文件
//

#pragma once
#include "opencv2/opencv.hpp"

#include "afxwin.h"
#include "afxdtctl.h"
#include "atlimage.h"
#include "mysql_connection.h"
// "opencv2/gpu/gpu.hpp"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>
#include <opencv2/videoio.hpp>  
#include<opencv2\tracking.hpp>
#include <opencv2\tracking\tracker.hpp>
// CplayvideoDlg 对话框

class CplayvideoDlg : public CDialogEx
{
// 构造
public:
	CplayvideoDlg(CWnd* pParent = NULL);	// 标准构造函数
	
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PLAYVIDEO_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;
	HANDLE hThread;
	DWORD ThreadID;
	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedOk();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	//afx_msg void OnBnClickedButton4();
	CButton StopButton;
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedplay();
	afx_msg void OnDtnDatetimechangeDatetimepicker1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnBnClickedButton6();
	CComboBox m_comboWeb;
	static void ThreadFunc1(void *param);
	static void ThreadFunc2(void *param);
	static void ThreadFunc3(void *param);
	static void  exportMySQLTable(void *param);
	afx_msg void OnEnChangeEdit1();
	void CplayvideoDlg::OnSize(UINT nType, int cx, int cy);
	CDateTimeCtrl m_dtCtrl;
	afx_msg void OnDtnDatetimechangeDatetimepicker2(NMHDR *pNMHDR, LRESULT *pResult);
	CDateTimeCtrl m_cdCtrl;
	CRect m_DlgRect;//存储对话框改变前大小，以供计算控件相应位置及大小时使用
	CFont m_font;
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	void repaint(UINT id, int last_Width, int now_Width, int last_Height, int now_Height);
	void CplayvideoDlg::AddPitcure();
	/*void repaint(UINT id, int last_Width, int now_Width, int last_Height, int now_Height);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	CFont m_font;*/
	afx_msg void OnStnClickedStatic6();
	int m_numofall;
	int m_numofyes;
	int m_numofno;
	afx_msg void OnStnClickedStatic1();
	CStatic m_ctrlPic;
	
	
	afx_msg void OnBnClickedButton4();
	CButton m_ctrlRadio1;
	afx_msg void OnStnClickedStatic5();
	afx_msg void OnStnClickedStatic13();
	afx_msg void OnStnClickedStatic4();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	int m_Radio1;
	afx_msg void OnStnClickedStatic8();
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnLbnSelchangeList2();
};
