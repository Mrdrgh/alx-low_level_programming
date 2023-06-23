#include <stdio.h>
#include <math.h>

/**
 * main - returns the max prime factor of n
 * Return: always 0
*/

int main(void)
{
	long int n = 612852475143;
	long int maximum;
	long int i;

	while (n % 2 == 0)
	{
		maximum = 2;
		n = n / 2;
	}
	while (n % 3 == 0)
	{
		maximum = 3;
		n = n / 3;
	}

	for (i = 5; i < sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			maximum = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		maximum = n;
	}
	printf("%ld\n", maximum);
	return (0);
}
