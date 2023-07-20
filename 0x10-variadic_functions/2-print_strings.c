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
	char *s;

	va_start(var, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(var, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
}


