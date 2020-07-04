#include "Factorial.h"
#include <iostream>

int factorial(int number)
{
	 int n = number;
	 int factorialCalculation = 1;
	/*int fact = n * (n - 1) * (n - 2) * (n - 3) * (n - 4) * (n - 5) * (n - 6) * (n - 7) * (n - 8) * (n - 9);
	int total = 0;
	int final_calc = 0;
	int complete_factorial = 0;*/

	for ( int i = 1; i <= n; i++)
	{
		factorialCalculation = factorialCalculation * i;
	}
	return factorialCalculation;

}

