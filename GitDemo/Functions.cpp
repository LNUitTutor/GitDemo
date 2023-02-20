#include "Functions.h"
#include <iostream>

void SelectSort(int a[], int n)
{
	// i define index for current max value
	for (int i = n - 1; i >= 1; --i)
	{
		// find max and it's index
		int max = a[0];
		int no = 0;
		for (int j = 1; j <= i; ++j)
			if (a[j] > max)
			{
				max = a[j];
				no = j;
			}
		// excange values
		if (i != no)
		{
			a[no] = a[i];
			a[i] = max;
		}
	}
}

void ShowMas(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		std::cout << ' ' << a[i];
	}
	std::cout << '\n';
}
