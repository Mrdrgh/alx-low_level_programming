#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: the array
 * @n: the number of the elements of the array
*/

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = n; j > i; j--)
		{
			a[i] = a[i] ^ a[j];
			a[j] = a[i] ^ a[j];
			a[i] = a[i] ^ a[j];
		}
	}
}
