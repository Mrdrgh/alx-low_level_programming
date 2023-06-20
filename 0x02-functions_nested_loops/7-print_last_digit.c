#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: the perimiter to checck
 * Return: return the last digit of the n
*/
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
