#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all the numbers from n to 98
 * @n: the starting point
 */

void print_to_98(int n)
{
	int i = 0, j = 0;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	else if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
}
