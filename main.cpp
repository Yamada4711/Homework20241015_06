#include "input.h"
#include "ave.h"
#include "show.h"
#include <iostream>
#include <new>
using namespace std;

int main()
{
	// �z��̃T�C�Y�����
	int size = InputSize();

	// �z��̓��I�m��
	int* pArr = new(nothrow) int[size];

	if (pArr != nullptr)
	{
		// �_���̊i�[
		InputScore(pArr, size);

		// ���ϒl�̎Z�o
		double ave = Ave(pArr, size);

		// �o��
		Show(ave);

		delete[] pArr;
	}
	else cout << "�z��̊m�ۂɎ��s���܂����B" << endl;

	return 0;
}