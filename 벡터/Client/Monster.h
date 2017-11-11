#pragma once
#include "Obj.h"
class CMonster :
	public CObj
{
private:
	CObj*			m_pPlayer = nullptr;

public:
	void		SetPlayer(CObj* pPlayer) { m_pPlayer = pPlayer; }

public:
	CMonster();
	virtual ~CMonster();

public:
	virtual void Initialize();
	virtual int Update();
	virtual void Render(HDC hDC);	
	virtual void Release();
};

