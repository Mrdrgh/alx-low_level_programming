#include "main.h"
/**
 * str_concat - concats two strings
 * @s1: the result
 * @s2: the concatenator
 * Return: the result
*/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *s;

	if (!s)
		return (NULL);
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	s = malloc(sizeof(char) * (i + j + 1));
	if (!s)
		return (NULL);
	i = j = 0;
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}


