#include "main.h"
/**
 * str_concat - concats two strings
 * @s1: the result
 * @s2: the concatenator
 * Return: the result
*/

char *str_concat(char *s1, char *s2)
{
	char *p = s1;
	char *q = s2;
	char *s;
	int i = 0, j = 0;

	while (*p)
	{
		p++;
		i++;
	}
	while (*q)
	{
		q++;
		j++;
	}
	s = malloc(sizeof(char) * (i + j) + 1);
	if (!s)
		return (NULL);
	p = s1;
	q = s2;
	i = 0;
	while (*p)
	{
		s[i] = *p;
		i++;
		p++;
	}
	while (*q)
	{
		s[i] = *q;
		i++;
		p++;
	}
	s[i] = '\0';
	return (s);
}
