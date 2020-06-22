#include "FunctionsCalculator.h"
#include "pch.h"
#include <iostream>


//implement the addition function
double addition(double a, double b)
{
	return a + b;
}

//implement the minus function
double minus(double a, double b)
{
	return a - b;
}

//implement the multiplication function
double multiplication(double a, double b)
{
	return a * b;
}

//implement the division function
double division(double a, double b)
{
	return a / b;
}

//implement the number function at the second power
double patrat(double a)
{
	return a * a;
}

//implement the percent function
double procent(double Op1, double Op2, char Operation)
{
	double result = 0.0;

	if (Operation == '+')
		result = Op1 + ((Op1 * Op2) / 100);
	else if (Operation == '-')
		result = Op1 - ((Op1 * Op2) / 100);
	else if (Operation == '*')
		result = Op1 * (Op2 / 100);
	else if (Operation == '/')
		result = Op1 / (Op2 / 100);

	return result;
}

//implement function 1 divided by x
double ImpartireaLui1Lax(double a)
{
	return 1 / a;
}

//implement the square root function
double SquareRoot(double a)
{
	double result = sqrt(a);

	return result;
}

//implement the cube root function
double CubeRoot(double a)
{
	return cbrt(a);
}

//implement the number function at the third power
double Cubic(double a)
{
	return a * a * a;
}
