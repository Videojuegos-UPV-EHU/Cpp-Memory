// PointersAsFunctionParameters.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void PrintVariables(int a, int b)
{
	cout << "a= " << a << "   b= " << b << "\n";
}

void WrongSwapVariables(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void CorrectSwapVariables(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a = 15;
	int b = -3;

	PrintVariables(a, b);

	//Swap variables a and b using WrongSwapVariables
	WrongSwapVariables(a, b);
	PrintVariables(a, b);

	//Swap variables a and b using CorrectSwapVariables
	CorrectSwapVariables(&a, &b);
	PrintVariables(a, b);

    return 0;
}

