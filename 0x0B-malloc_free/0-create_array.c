#include "main.h"
/**
 * create_array - creats an array of chars and initialized it with a char
 * @size: the size of the array
 * @c: the char
 * Return: the array
*/

char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int i;

	if (!size)
	{
		return (NULL);
	}


	if (!array)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
