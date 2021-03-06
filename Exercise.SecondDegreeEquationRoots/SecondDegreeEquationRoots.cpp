// SecondDegreeEquationRoots.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

//Write the function SecondDegreeEquationRoots that:
//a) takes two real numbers as input: a, b, c
//b) returns as output: positiveRoot, negativeRoot (real numbers) and success (bool)
//
//The function calculates the two possible solutions of this formula:
//  https://upload.wikimedia.org/wikipedia/commons/thumb/c/c4/Quadratic_formula.svg/402px-Quadratic_formula.svg.png

//If either the term inside the root is negative or the divisor (2a) is zero, the function will return 'success'=false and will set the values of 'positiveRoot' and 'negativeRoot' to zero
//Else, it will return 'sucess'= true, and both solutions to the equation in positiveRoot and negativeRoot

//Define the equation and use it to check the example cases below (in main())
//... SecondDegreeEquationRoots(...)
//{
//	...
//}



int main()
{
	//Test-case #1
	//a= 2.0, b= 4.0, c= -4.0
	//    ->	success = 1, posRoot = 0.732051, negRoot = -2.73205

	//Test-case #2
	//a= 0.0, a= 4.0, c= -4.0
	//    ->    success = 0, posRoot = 0, negRoot = 0


    return 0;
}

