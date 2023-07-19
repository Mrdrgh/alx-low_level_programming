#include "function_pointers.h"
/**
 * int_index - using a function to look for a specified int (being
 * the first one in this case), int index will iterate
 * the array and tell us where are the ints that are found using
 * the function , these pointers to funcrtion are pretty handy but also a bit
 * diabolical to understand
 * @array: the array to look in
 * @size: its c and in c you can't know the size of an array
 * @cmp: the function to compare
 * Return: the index of the first int found by the function , if no -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!size || cmp)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
