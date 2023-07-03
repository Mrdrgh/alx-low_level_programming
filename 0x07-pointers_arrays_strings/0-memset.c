#include "main.h"
/**
 * _memset - memory sets an allocated memory space with specified value
 * @s: the string to be set
 * @b: the value to set
 * @n: the size of the memory set procedure
 * Return: a pointer of type char to the the memory s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	int i = 0;

	while (*p && i < n)
	{
		*p = b;
		p++;
		i++;
	}
	return (s);
}
