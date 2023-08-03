#include "main.h"
/**
 * clear_bit - set a given bit at 0
 * @n: the number to set the bit of
 * @index: the index
 * Return: 1 if worked, 0 if none
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & (~(1UL << index));
	return (1);
}
