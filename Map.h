// Map.h: interface for the CMap class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAP_H__BA68CEEC_2B18_4C48_AA03_7C2CD1B1A676__INCLUDED_)
#define AFX_MAP_H__BA68CEEC_2B18_4C48_AA03_7C2CD1B1A676__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Tile.h"
class CMap  
{
public:
	void OnNew();
	void SetSize(int mw, int mh, int cw, int ch);
	int GetAtbSize();
	int GetNamSize();

	int iMapWidth;
	int iMapHeight;
	int iCellWidth;
	int iCellHeight;
	int iTileWidth;
	int iTileHeight;
	CTile* m_pal;	//���Ա�
	CTile* m_tiles;	//���ֱ�
	BOOL bIsChange;
	int iSaveStyle;
	//0:��Ԫ�����
	//1:��Ԫ������
	//2:�������
	//3:��������
	CMap();
	virtual ~CMap();

};

#endif // !defined(AFX_MAP_H__BA68CEEC_2B18_4C48_AA03_7C2CD1B1A676__INCLUDED_)
