#include "main.h"
/**
 * print_rev - print but reversly
 * @s: the string to print reversibly
*/

void print_rev(char *s)
{
	int i = _strlen(s);

	for (; i > 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
