#include "main.h"

/**
 * _isalpha - if the number is a char in ascii 
 * @c: the int to check
 * Return: 1 if its a letter, 0 if otherwise
*/

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <='Z' && c >= 'A'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
