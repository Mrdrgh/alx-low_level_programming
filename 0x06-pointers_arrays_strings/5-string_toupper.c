#include "main.h"
/**
 * string_toupper - to uppercase
 * @c: the string
 * Return: the new to upper string
*/

char *string_toupper(char *c)
{
	char *p = c;

	while (*p)
	{
		if (*p <= 'z' && *p >= 'a')
		{
			*p -= 32;
		}
		p++;
	}
	return (c);
}
