#include "main.h"
/**
 * _strlen - gives the len of a str
 * @str: the string
 * Return: the len
*/

int _strlen(char *str)
{
	char *p = str;
	int i = 0;
	
	if (!p)
	{
		return (0);
	}
	while (*p)
	{
		i++;
		p++;
	}
	return (i);
}

/**
 * _strdup - duplicates a string into another
 * @str: the string to duplicate if NULL return NULL
 * Return: the newly duplicated string
*/

char *_strdup(char *str)
{
	char *p = str;
	char *q = malloc(sizeof(char) * _strlen(str));
	char *qq = q;

	if (_strlen(str) == 0)
	{	
		return (NULL);
	}

	while (*p)
	{
		*qq = *p;
		qq++;
		p++;
	}
	return (q);
}
