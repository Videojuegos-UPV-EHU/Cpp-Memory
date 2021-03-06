// PointersAndReferences.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void PrintNumbers(int numElements)
{
	//This will not compile:
	//double elementArray[numElements];

	//Instead, we have to use a pointer and allocate the array:
	double * pElementArray;						//the data type is (double *), a pointer to a double
	pElementArray = new double[numElements];

	for (int i = 0; i < numElements; i++)
		pElementArray[i] = i;

	for (int i = 0; i < numElements; i++)
		cout << pElementArray[i] << " ";

	delete[] pElementArray;
}

int main()
{
	PrintNumbers(100);

	PrintNumbers(1000);
	
    return 0;
}

