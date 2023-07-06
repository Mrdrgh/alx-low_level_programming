#include "main.h"
/**
 * factorial - returns the factorial with recursio
 * @n: the factorial of
 * Return: the factorial
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (factorial(n - 1) * n);
}
