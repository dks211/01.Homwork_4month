#pragma once

// 추상화: 공통된 요소들을 추출하는 작업.
// 추상 팩토리 패턴 (Abstacet Factory pattern)
// 객체 생성 시 수반되는 공통된 문장들을 추상화 시키는 패턴.

class CObj;

template <typename T>
class CAbstractFactory
{
public:
	static CObj* CreateObj()
	{
		CObj* pObj = new T;
		pObj->Initialize();

		return pObj;
	}

	static CObj* CreateObj(float fX, float fY)
	{
		CObj* pObj = new T;
		pObj->Initialize();
		pObj->SetPos(fX, fY);

		return pObj;
	}
};