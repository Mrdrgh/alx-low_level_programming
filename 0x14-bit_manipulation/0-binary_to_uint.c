#include "main.h"
/**
 * binary_to_uint - converts a string of binary to uint
 * @b: the string
 * Return: the resutl
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			i = (i << 1) + (*b - '0');
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (i);
}

