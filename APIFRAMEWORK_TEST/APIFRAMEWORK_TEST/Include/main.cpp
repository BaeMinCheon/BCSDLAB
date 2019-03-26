#include "Core.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	if (!CCore::GetInst()->Init(hInstance)) {
		CCore::DestroyInst();
		return 0;
	}

	int iRev = CCore::GetInst()->Run(); // Run() ������ iRev�� ���� ���ϴ�.

	CCore::DestroyInst();

	return iRev;
}