#include "ave.h"
#include <iostream>
using namespace std;

static int Sum(int* pArr, int sum, int size)
{
	for (int i = 0; i < size; i++)
	{
		sum += pArr[i];
	}
	return sum;
}

double Ave(int* pArr, int size)
{
	int sum = 0;

	double ave = 0;

	sum = Sum(pArr, sum, size);

	ave = (double)sum / (double)size;

	return ave;
}