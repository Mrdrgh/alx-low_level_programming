#include "lists.h"
#include <unistd.h>
/**
 * _putchar - printf the value of a char
 * @c: the adress of the char to print
 *
 * Return: on succass 1 
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
