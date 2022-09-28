#include "main.h"

/**
*factorial - returns the factorial of a given number
*@n: number to be used
*
*Return: the factorial of the number
*/
int factorial(int n)
{
	int next_factorial;

	if (n < 0)
		return (-l);
	else if (n == 0)
		return (l);
	next_factorial = factorial(n - l);
	return (n * next_factorial);
}
