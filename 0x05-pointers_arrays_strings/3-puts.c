#include "main.h"
/**
 * _puts - puts a string to stdout
 * @str: the string to output
*/
void _puts(char *str)
{
	char *p = str;

	while ((*p))
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
}
