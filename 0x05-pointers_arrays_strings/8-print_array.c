#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array
 * @a: the array
 * @n: the size of the array , in c we cant know the size of the array if we
 * dont already have it
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
