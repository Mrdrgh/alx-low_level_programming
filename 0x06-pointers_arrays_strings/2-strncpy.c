#include "main.h"
/**
 * _strncpy - cpies a string into another only the first n chars
 * @dest: the destination
 * @src: the source
 * @n: the number of chars to cp
 * Return: return the dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *p = src;
	char *q = dest;

	while (i < n && *p)
	{
		*q = *p;
		i++;
		p++;
		q++;
	}
	return (dest);
}
