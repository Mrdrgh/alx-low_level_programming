#include "main.h"

/**
 * _islower - check if a char is in lowercase
 * @c: the char to be checked
 * Return: 1 if char is lowercases, otherwise 0
*/

int _islower(int c)
{
	if (c >= 'a' && c<= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
