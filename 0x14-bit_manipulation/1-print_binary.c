#include "main.h"
/**
 * print_binary - prints a long int into binary
 * @n: the long int
*/
void print_binary(unsigned long int n)
{
	int i;
	int count;

	for (i = 63; i >= 0; i--)
	{
		count = n >> i;
		if (count & 1)
		{
			_putchar('1');
		}
		else if (count | 0)
		{
			_putchar ('0');
		}
	}
	if (!count)
		_putchar('0');
}
