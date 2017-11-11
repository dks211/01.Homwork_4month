#include "stdafx.h"
#include "Maingame.h"
#include "Player.h"
#include "Monster.h"
//¿ÀÀ×.
CMaingame::CMaingame()
	: m_pPlayer(nullptr), m_pMonster(nullptr)
{
}

CMaingame::~CMaingame()
{
	Release();
}

void CMaingame::Initialize()
{
	m_hDC = GetDC(g_hWnd);

	if (nullptr == m_pPlayer)
	{
		m_pPlayer = CAbstractFactory<CPlayer>::CreateObj();
	}

	if (nullptr == m_pMonster)
	{
		m_pMonster = CAbstractFactory<CMonster>::CreateObj();
		((CMonster*)m_pMonster)->SetPlayer(m_pPlayer);
	}
}

void CMaingame::Update()
{
	m_pPlayer->Update();
	m_pMonster->Update();
}

void CMaingame::Render()
{
	Rectangle(m_hDC, 0, 0, WINCX, WINCY);

	m_pPlayer->Render(m_hDC);
	m_pMonster->Render(m_hDC);
	
}

void CMaingame::Release()
{
	ReleaseDC(g_hWnd, m_hDC);

	::SafeDelete<CObj*>(m_pPlayer);
	::SafeDelete<CObj*>(m_pMonster);
}
