#include "main.h"
/**
 * _strdup - duplicates a string into another
 * @str: the string to duplicate if NULL return NULL
 * Return: the newly duplicated string
*/

char *_strdup(char *str)
{
	char *p = str;
	char *s;
	int i = 0;

	if (!str)
		return (NULL);

	while (*p)
	{
		s + i = malloc(sizeof(char));
		if (s + i == NULL)
		{
			return (NULL);
		}
		*(s + i) = *(p);
		p++;
		i++;
	}
	s + i = malloc(sizeof(char));
	s[i] = '\0';
	return (s);
}


