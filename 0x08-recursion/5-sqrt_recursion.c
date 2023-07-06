#include "main.h"

int is_natural(int i, int n);

/**
 * _sqrt_recursion - returns the natural square root of in int
 * @n: the int
 * Return: the result
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (is_natural(0, n));
}
/**
 * is_natural - sees if natural exists
 * @n: the number
 * @i: iteration tool
 * Return: the result
*/

int is_natural(int i, int n)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (is_natural(i + 1, n));
}
