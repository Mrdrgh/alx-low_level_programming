#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: the perimiter to checck
 * Return: return the last digit of the n
*/
int _abs(int n);
int print_last_digit(int n)
{
	_putchar(_abs(n) % 10 + '0');
	return (_abs(n) % 10);
}
