#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: the array
 * @n: the number of the elements of the array
*/

void reverse_array(int *a, int n)
{
	int i, j;
	int tmp;

	j = n - 1;
	for (i = 0; i < n; i++)
	{
		if (j > i)
		{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		}
		j--;
	}
}
