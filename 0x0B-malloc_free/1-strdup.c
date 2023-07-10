#include "main.h"
/**
 * _strdup - duplicates a string into another
 * @str: the string to duplicate if NULL return NULL
 * Return: the newly duplicated string
*/

char *_strdup(char *str)
{
	char *a;
	int i, r = 0;

	if (!str)
		return (NULL);

	i = 0;
	while (str[i])
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (!a)
		return (NULL);

	for (; str[r]; r++)
	{
		a[r] = str[r];
	}

	return (a);
}



