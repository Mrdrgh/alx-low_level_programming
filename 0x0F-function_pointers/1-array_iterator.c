#include "function_pointers.h"
/**
 * array_iterator - applies the function action to each case of an array
 * @array: the array of ints
 * @size: the size of the array , in c the size is always pre defined
 * @action: the function to apply
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
