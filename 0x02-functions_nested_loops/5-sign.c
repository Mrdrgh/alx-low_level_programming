#include "main.h"
/**
 * print_sign - print the num plus the sign of it
 * @n: the perimiter to check
 * Return: 1 if posetive , 0 if zero , -1 if negative
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		else
		{
			_putcahr('+');
			return (1);
		}
	}
}
