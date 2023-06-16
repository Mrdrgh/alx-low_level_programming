#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - display if n is negative of posetive or nul
 *
 * Return: always 0(SUCCESS)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	(n < 0) ? printf("%d is negative\n", n) : (n == 0) ?
		printf("%d is zero\n", n) : printf("%d is positive\n", n);
	return (0);
}
