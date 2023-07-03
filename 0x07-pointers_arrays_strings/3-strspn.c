#include "main.h"
/**
 * _strspn - return the legth of the prefix that matches the set
 * @s: the string to look in
 * @accept: the set to accept
 * Return: the length
*/

unsigned int _strspn(char *s, char *accept)
{
	char *p = s;
	char *q;
	unsigned int i = 0;

	while (*p)
	{
		q = accept;
		while (*q)
		{
			if (*p == *q)
			{
				i++;
				break;
			}
			q++;
			if (*q == '\0')
			{
				return (i);
			}
		}
		p++;
	}
	return (i);
}
