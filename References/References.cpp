// References.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void PrintVariables(int a, int b)
{
	cout << "a= " << a << "   b= " << b << "\n";
}

void SwapVariablesWithPointers(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void SwapVariablesWithReferences(int &a, int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 15;
	int b = -3;

	PrintVariables(a, b);

	//Swap variables a and b using SwapVariablesWithReferences
	SwapVariablesWithReferences(a, b);
	PrintVariables(a, b);

	//Swap variables a and b using SwapVariablesWithPointers
	SwapVariablesWithPointers(&a, &b);
	PrintVariables(a, b);

	return 0;
}