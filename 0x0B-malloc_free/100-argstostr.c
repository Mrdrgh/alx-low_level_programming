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
	char *string, *p;
	int i, j;

	if (ac == 0 || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		*p = av[i];
		while (*p)
		{
			p++;
			j++;
		}
		j++;
	}
	string = malloc(sizeof(char) * j + 1);
	if (!string)
		return (NULL);
	j = 0;
	for (i = 0; i < ac; i++)
	{
		p = av[i];
		while (*p)
		{
			string[j++] = *p;
			p++;
		}
		string[j++] = '\n';
	}
	string[j] = '\0';
	return (string);
}




