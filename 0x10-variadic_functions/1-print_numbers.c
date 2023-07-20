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
	unsigned int i;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(var, int));
		if (i != (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(var);
	return;
}




