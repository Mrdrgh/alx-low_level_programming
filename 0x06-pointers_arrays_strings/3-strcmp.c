#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if the same -1 if s1 < s2 +1 if else
*/

int _strcmp(char *s1, char *s2)
{
	char *p = s1;
	char *q = s2;

	while (*p && *q)
	{
		if (*p < *q)
		{
			return (*p - *q);
		}
		else if (*p > *q)
		{
			return (*p - *q);
		}
		p++;
		q++;
	}
	return (0);
}
