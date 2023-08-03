#include "main.h"
/**
 * print_binary - prints a long int into binary
 * @n: the long int
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n / 2);
	}
	_putchar(n % 2 + '0');
}