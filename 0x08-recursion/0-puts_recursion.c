#include "main.h"
/**
 * _puts_recursion - puts a string recursivly
 * @s: the string
*/

void _puts_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
