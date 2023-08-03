#include "main.h"
/**
 * set_bit - sets a bit at a given index
 * @n: the number to set the bit in
 * @index: the index to set
 * Return: 1 if it worked , 0 if not
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = *n | (1UL << index);
	return (1);
}
