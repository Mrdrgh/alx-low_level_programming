#include "main.h"
/**
 * print_name - prints the name of a cher 
 * @name: the name
 * @f: the pointer to the funxtion 
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
