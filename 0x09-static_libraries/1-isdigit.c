#include "main.h"

/**
 * _isdigit - sees if the char given is a digit
 * @c: the perimiter to check
 * Return: 1 if c is a digit 0 otherwise
*/

int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
