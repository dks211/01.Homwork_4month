#include "stdafx.h"
#include "Player.h"

CPlayer::CPlayer()
{
}

CPlayer::~CPlayer()
{
	Release();
}

void CPlayer::Initialize()
{
	m_tInfo.vPos = D3DXVECTOR3(400.f, 300.f, 0.f);
	m_tInfo.vDir = D3DXVECTOR3(1.f, 0.f, 0.f);
}

int CPlayer::Update()
{
	m_tInfo.vPos += m_tInfo.vDir;

	/*if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		m_tInfo.vPos.x -= m_fSpeed;

	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		m_tInfo.fX += m_fSpeed;
	
	if (GetAsyncKeyState(VK_UP) & 0x8000)
		m_tInfo.fY -= m_fSpeed;
	
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		m_tInfo.fY += m_fSpeed;*/

	return 0;
}

void CPlayer::Render(HDC hDC)
{

	Rectangle(hDC, 
		long(m_tInfo.vPos.x - 50.f),
		long(m_tInfo.vPos.y - 50.f),
		long(m_tInfo.vPos.x + 50.f),
		long(m_tInfo.vPos.y + 50.f));
}

void CPlayer::Release()
{
}




