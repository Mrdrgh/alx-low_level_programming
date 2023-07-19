#include "function_pointers.h"
/**
 * print_name - prints the name of a cher 
 * @name: the name
 * @f: the pointer to the funxtion 
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
