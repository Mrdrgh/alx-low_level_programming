#include "main.h"
/**
 * puts2 - puts a string to stdout
 * @str: the string to output
*/
void puts2(char *str)
{
	char *p = str;

	while ((*p))
	{
		if ((p - str) % 2 == 0)
		{
		_putchar(*p);
		}
		p++;
	}
	_putchar('\n');
}
