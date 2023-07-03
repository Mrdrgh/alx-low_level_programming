#include "main.h"
/**
 * _strchr - return the first occurence of the desired char
 * @s: the string to search in
 * @c: the desired char
 * Return: the pointer to the first occurence
*/

char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p)
	{
		if (*p == c)
			break;
	}
	return (p)
}
