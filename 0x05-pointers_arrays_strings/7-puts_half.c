#include "main.h"
/**
 * puts_half - puts half of the string
 * @str: the string to put half of it to stdout
*/

void puts_half(char *str)
{
	int i = 0, j;
	char *p = str;

	while ((*p))
	{
		p++;
		i++;
	}
	i--;
	int n;
	
	n = (i - 1) / 2;
	for (j = n; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
