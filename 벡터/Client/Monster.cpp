#include "stdafx.h"
#include "Monster.h"


CMonster::CMonster()
{
}


CMonster::~CMonster()
{
	Release();
}

void CMonster::Initialize()
{
	m_tInfo.vPos = D3DXVECTOR3(100.f, 100.f, 0.f);	
}

int CMonster::Update()
{
	m_tInfo.vDir = m_pPlayer->GetInfo().vPos - m_tInfo.vPos;

	// 벡터의 정규화(단위 벡터)로 진행
	float	fLength = sqrtf(m_tInfo.vDir.x * m_tInfo.vDir.x + m_tInfo.vDir.y * m_tInfo.vDir.y);

	m_tInfo.vDir.x /= fLength;
	m_tInfo.vDir.y /= fLength;
	m_tInfo.vDir.z = 0.0f;

	m_tInfo.vPos += m_tInfo.vDir * 3.f;
	
	return 0;
}

void CMonster::Render(HDC hDC)
{
	Ellipse(hDC,
		long(m_tInfo.vPos.x - 50.f),
		long(m_tInfo.vPos.y - 50.f),
		long(m_tInfo.vPos.x + 50.f),
		long(m_tInfo.vPos.y + 50.f));
}

void CMonster::Release()
{
}
