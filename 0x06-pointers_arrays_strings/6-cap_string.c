#include "main.h"
/**
 * cap_string - capitalize the first char of the separated words
 * @c: the string
 * Return: the capitalized string
*/

char *cap_string(char *c)
{
	char separators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	char *p = c;
	char *q;

	while (*p)
	{
		q = separators;
		while (*q)
		{
			if (*p == *q && *(p + 1) != '\0' && *(p + 1) >= 'a' && *(p + 1) <= 'z')
			{
				*(p + 1) -= 32;
				break;
			}
			q++;
		}
		p++;
	}
	return (c);
}

