#include "main.h"
/**
 * create_array - creats an array of chars and initialized it with a char
 * @size: the size of the array
 * @c: the char
 * Return: the array
*/

char *create_array(unsigned int size, char c)
{
	if (!size)
	{
		return (NULL);
	}

	char *array = malloc(sizeof(char) * size + 1);
	int i;

	if (!array)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[i] = '\0';
	return (array);
}
