#include "main.h"
/**
 * _strlen_recursion - the length of a string recursively
 * @s: the string
 * Return: the length
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
