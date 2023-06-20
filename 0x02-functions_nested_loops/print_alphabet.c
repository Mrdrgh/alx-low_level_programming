#include "main.h"
/**
 * print_alphabet - print all the alphabet in lowercase
 *
 * Return: always 0(SUCCESS)
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
