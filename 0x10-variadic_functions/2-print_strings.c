#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints the strings separated by a separator
 * @separator: the separator if NULL don't print it
 * @n: the number of args
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int i;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		if (!va_arg(var, char*))
			printf("(nil)");
		else if (i != (n - 1) && separator)
		{
			printf("%s", va_arg(var, char*));
		}
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}


