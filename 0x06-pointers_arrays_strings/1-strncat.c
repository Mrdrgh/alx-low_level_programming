#include "main.h"
/**
 * _strncat - concatenates the first n chars of src
 * @dest: the destination
 * @src: the source
 * @n: the number of the chars
 * Return: the destination
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *p = src;
	char *q = dest;

	while (*q)
	{
		q++;
	}
	while (i < n && *p)
	{
		*q = *p;
		i++;
		p++;
		q++;
	}
	*q = '\0';
	return (dest);
}
