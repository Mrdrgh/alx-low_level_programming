#include "main.h"
/**
 * swap_int - swaps a and b unsing xor operator
 *@a: the first one
 *@b: the second one
*/

void swap_int(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}
