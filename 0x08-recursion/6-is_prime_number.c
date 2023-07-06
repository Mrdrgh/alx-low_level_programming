#include "main.h"
/**
 * is_prime_number - checks if n is prime , really tricky
 * @n: the perimiter
 * Return: 1 if true , 0 else
*/

int is_prime_number(int n)
{
	int p;

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (n == 2) ? 1 : 0;
	}
	for (p = 3; p * p < n; p += 2)
	{
		if (is_prime_number(p) && n % p == 0)
		{
			return (0);
		}
	}
	return (1);
}
