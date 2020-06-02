#include "FunctionsCalculator.h"
#include "pch.h"
#include <iostream>


// implement the functions
double addition(double a, double b)
{
	return a + b;
}

double minus(double a, double b)
{
	return a - b;
}

double multiplication(double a, double b)
{
	return a * b;
}

double division(double a, double b)
{
	return a / b;
}

double patrat(double a)
{
	return a * a;
}

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

double ImpartireaLui1Lax(double a)
{
	return 1 / a;
}

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
