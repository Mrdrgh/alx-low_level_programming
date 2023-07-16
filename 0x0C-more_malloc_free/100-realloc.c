#include "main.h"
/**
 * _realloc - realloc 
 * @ptr: the pointer 
 * @old_size: the old size of the mem allocated for that ptr
 * @new_size: the new size of ptr
 * Return: the pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size < old_size)
	{
		ptr = malloc(new_size + 1);
		if (!ptr)
			return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	else 
	{
		ptr + old_size = malloc(new_size + 1);
		if (!ptr)
			return (NULL);
	}
	return (ptr);
}
