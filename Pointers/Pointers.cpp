// Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void PrintVariables(int a, int b)
{
	cout << "a= " << a << "   b= " << b << "\n";
}



int main()
{
	int a = 52;					//Two regular variables allocated in the stack
	int b = 32;

	int * pointer = nullptr;	//A pointer to a variable of type integer (int *). Initialized as nullptr

	PrintVariables(a, b);

	//1.a Make 'pointer' point to variable 'a'

	pointer = &a;				//&a returns the address of variable 'a' and it is saved in 'pointer'
								//Now 'pointer' points to 'a', and can be used to access it

	//1.b Increment the value of the variable pointed
	*pointer= *pointer + 1;		//*pointer returns a reference to the variable pointed by the pointer
								//We can do anything we would with an ordinary variable with it

	//2.1 Make 'pointer' point to variable 'b'

	pointer = &b;

	//2.b Increment the value of the variable pointed
	*pointer = *pointer + 1;

	PrintVariables(a, b);

    return 0;
}

