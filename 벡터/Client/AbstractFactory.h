#pragma once

// �߻�ȭ: ����� ��ҵ��� �����ϴ� �۾�.
// �߻� ���丮 ���� (Abstacet Factory pattern)
// ��ü ���� �� ���ݵǴ� ����� ������� �߻�ȭ ��Ű�� ����.

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