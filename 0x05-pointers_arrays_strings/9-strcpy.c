#include "main.h"
/**
 * _strcpy - strcpy
 * @dest: the destination
 * @src: the source
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	char *p = src;
	char *pp = dest;

	while ((*p))
	{
		*pp = *p;
		p++;
		pp++;
	}
	*pp = '\0';
	return (dest);
}
