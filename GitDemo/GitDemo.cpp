#include <iostream>
#include "Functions.h"

int main()
{
    const int n = 10;
    int a[n] = { 2,4,9,7,5,6,8,0,1,3 };
    ShowMas(a, n);
    SelectSort(a, n);
    ShowMas(a, n);
}
