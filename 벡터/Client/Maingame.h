#pragma once

class CObj;
class CMaingame
{
public:
	CMaingame();
	~CMaingame();

public:
	void Initialize();
	void Update();
	void Render();
	void Release();

private:
	HDC	m_hDC;

	CObj*		m_pPlayer;
	CObj*		m_pMonster;
};

