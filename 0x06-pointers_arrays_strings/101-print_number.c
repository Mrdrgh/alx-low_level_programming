#include "main.h"
/**
 * print_number - prints a number
 * @n: the number
*/

void print_number(int n)
{
	int i, j;

	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
