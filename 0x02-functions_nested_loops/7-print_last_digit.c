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
		a = -n;
	}
	if (a < 0)
	{
		a = -a;
	}
	_putchar(n % 10 + '0');
	return (n % 10);
}
