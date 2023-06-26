#include "main.h"
/**
 * _atoi - atoi
 * @s: the sring to convert
 * Return: the result
*/

int _atoi(char *s)
{
	int k = 0;
	char *p = s;

	while ((*p))
	{
		if ( *p <= '9' && *p >= '0')
		{
		k = (k << 3) + (k <<  1) + *p - '0';
		}
		p++;
	}

	return ((s[0] == '-') ? -k : k);
}
