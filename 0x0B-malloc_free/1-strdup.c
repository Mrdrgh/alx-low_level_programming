#include "main.h"
/**
 * _strdup - duplicates a string into another
 * @str: the string to duplicate if NULL return NULL
 * Return: the newly duplicated string
*/

char *_strdup(char *str)
{
	char *p = str;
	int i = 0;
	char *string;
	int j;

	if (!str)
		return (NULL);

	while (*p)
	{
		i++;
		p++;
	}

	string = malloc(sizeof(char) * i);
	if (!string)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		string[j] = str[i];
	}
	return (string);
}



