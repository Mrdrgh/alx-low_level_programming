#include "main.h"

/**
 * _isupper - checks if c is a uppercase or a lower case
 * @c: the perimiter to check
 * Return: 1 if upper 0 otherwise
*/

int _isupper(int c)
{
	return ((c <= 'Z' || c >= 'A') ? 1 : 0);
}
