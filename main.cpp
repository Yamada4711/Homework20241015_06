#include "input.h"
#include "ave.h"
#include "show.h"
#include <iostream>
#include <new>
using namespace std;

int main()
{
	// 配列のサイズを入力
	int size = InputSize();

	// 配列の動的確保
	int* pArr = new(nothrow) int[size];

	if (pArr != nullptr)
	{
		// 点数の格納
		InputScore(pArr, size);

		// 平均値の算出
		double ave = Ave(pArr, size);

		// 出力
		Show(ave);

		delete[] pArr;
	}
	else cout << "配列の確保に失敗しました。" << endl;

	return 0;
}