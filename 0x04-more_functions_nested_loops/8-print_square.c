#include "main.h"

/**
 * print_square - prits a square of hashtags
 * @size: the size of the square
*/

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
