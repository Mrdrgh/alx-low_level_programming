#include "main.h"
/**
 * get_endianness - a function that gets how the system
 * Return: 0 for big, 1 small
*/
int get_endianness(void)
{
	unsigned int i = 1;
	char *b = (char*) &i;

	return (*b);
}
