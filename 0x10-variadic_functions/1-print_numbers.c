#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers in the args , followed by the sep
 * @separator: the separator , if NULL don't print if
 * @n: the number of args
*/

void print_numbers(const char *separator, const unsigned n, ...)
{
	va_list var;
	int i, nn = n;

	va_start(var, n);
	for (i = 0; i < nn; i++)
	{
		printf("%d", va_arg(var, int));
		if (i != nn && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(var);
	return;
}




