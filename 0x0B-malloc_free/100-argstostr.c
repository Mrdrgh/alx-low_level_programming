#include "main.h"
#include <string.h>
/**
 * argstostr - concats all the args into a string
 * @ac: the number of args
 * @av: the args
 * Return: the new string
*/
char *argstostr(int ac, char **av)
{
	char *string;
	int i, j;

	if (!ac or !av)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		asprintf(&string,"%s\n",av[i]);
	}
	return (string);
}
