#include "main.h"
/**
 * _print_rev_recursion - puts a string recursivly
 * @s: the string
*/

void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
