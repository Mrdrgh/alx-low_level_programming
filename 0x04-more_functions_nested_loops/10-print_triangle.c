#include "main.h"
/**
 * print_triangle - prints a triangle, periodt
 * @size: the lzngth of the base of the triangle
*/

void print_triangle(int size)
{
	int i;
	int j;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 1; i <= size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
	}
	}
}

