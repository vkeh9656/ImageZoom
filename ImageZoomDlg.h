
// ImageZoomDlg.h: 헤더 파일
//

#pragma once


// CImageZoomDlg 대화 상자
class CImageZoomDlg : public CDialogEx
{
private:
	CImage m_image;
	int m_cx_margin, m_cy_margin, m_top_margin;
	int m_zoom_level = 2;
// 생성입니다.
public:
	CImageZoomDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IMAGEZOOM_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
};
