#include "main.h"
/**
 * array_range - creates an array of ints
 * @min: the min range
 * @max: the max range
 * Return: pointer to the new array
*/

int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (!p)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
