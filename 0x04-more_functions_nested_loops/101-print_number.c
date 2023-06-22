#include "main.h"

/**
 * print_number - prints an iteger , the values will be high
 * @n: the integer to print
*/

void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
