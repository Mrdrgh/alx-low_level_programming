#include "main.h"

/**
 * print_to_98 - prints all the numbers from n to 98
 * @n: the starting point
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{	
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			if (i == 98)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else 
	{
		for (i = n; i <= 98; i--)
		{
			_putchar(i + '0');
			if (i == 98)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}

