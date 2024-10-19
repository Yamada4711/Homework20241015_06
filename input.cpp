#include "input.h"
#include <iostream>
using namespace std;

int InputSize()
{
	int size = 0;
	
	do
	{
		cout << "何名入力しますか？ > " << flush;
		cin >> size;
		if (size <= 0) cout << "不正な値が入力されました" << endl;
	} while (size <= 0);

	return size;
}

void InputScore(int* pArr, int size)
{
	for (int i = 0; i < size; i++)
	{
		pArr[i] = -1;
		do
		{
			cout << i + 1 << "人目を入力してください" << endl;
			cin >> pArr[i];
			if (pArr[i] < 0 || pArr[i] > 100) cout << "不正な値が入力されました" << endl;
		}
		while (pArr[i] < 0 || pArr[i] > 100);
	}
}