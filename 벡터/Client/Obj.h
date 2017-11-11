#pragma once
class CObj
{
public:
	const INFO&	GetInfo() { return m_tInfo;  }

public:
	CObj();
	virtual ~CObj();

public:
	virtual void Initialize() = 0;
	virtual int Update() = 0;
	virtual void Render(HDC hDC) = 0;
	virtual void Release() = 0;

protected:
	INFO	m_tInfo;

};

