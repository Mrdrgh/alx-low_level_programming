#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints all , we are near printf
 * @format: the format , c , i , f , s
*/
void print_all(const char * const format, ...)
{
	va_list var;
	int i = 0;
	char *str, *sep = "";

	va_start(var, format);
	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(var, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(var, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(var, double));
					break;
				case 's':
					{
					str = va_arg(var, char*);
						if (!str)
						{
							str = "(nil)";
							break;
						}	
					printf("%s%s", sep, str);
					break;
					}
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(var);
}
