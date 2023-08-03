#include "main.h"
/**
 * get_bit - gets a bit from a given index
 * @n: the number
 * @index: the index
 * Result: the index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}