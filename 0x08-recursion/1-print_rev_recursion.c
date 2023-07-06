#include "main.h"
/**
 * _puts_recursion - puts a string recursivly
 * @s: the string
*/

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
	_putchar(s[0]);
}
