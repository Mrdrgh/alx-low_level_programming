#include "variadic_functions.h"
/**
 * sum_them_all - sums all the args of the function sum_them_all
 * @n: the number of the args
 * Return: the result sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list var;
	int i, nn = n;
	int x = 0;

	if (!n)
		return (0);
	va_start(var, n);
	for (i = 0; i < nn; i++)
	{
		x += va_arg(var, int);
		x += (int) va_arg(var, double);
	}
	return (x);
}

