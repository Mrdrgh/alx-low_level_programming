#include "main.h"
/**
 * flip_bits - returns the number of bits to flip to go from n to m
 * @n: the number 1
 * @m: the number 2
 * Return: the number of bits flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int xor = n ^ m;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
