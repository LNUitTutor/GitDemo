#include "Functions.h"
#include <iostream>

void SelectSort(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		a[i] = i;
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
