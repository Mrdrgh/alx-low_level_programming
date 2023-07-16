#include "main.h"
/**
 * malloc_checked - checks if malloc works
 * @b: the number of bytes to check
 * Return: a pointer of type void
*/

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (!p)
		exit(98);
	return (p);
}
