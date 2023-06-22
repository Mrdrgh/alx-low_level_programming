#include "main.h"

/**
 * print_line - prints a line of n underscores
 * @n: the number of underscores to print
*/

void print_line(int n)
{
	while (n--)
	{
		if (n < 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}

