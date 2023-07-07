#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination
 * @src: the source
 * Return: the destination
*/

char *_strcat(char *dest, char *src)
{
	char *p = src;
	char *q = dest;

	while (*q)
	{
		q++;
	}
	while (*p)
	{
		*q = *p;
		p++;
		q++;
	}
	*p = '\0';
	return (dest);
}
