#include "main.h"
/**
 * string_nconcat - concats the n chars of s2 to the end of s1
 * @s1: the firsst string
 * @s2: the second one
 * @n: the number of chars
 * Return: the newly created string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0;
        unsigned int i = 0;
	char *p1 = s1, *p2 = s2;
	char *str;

	while (*(p1)++)
		len1++;

	while (*(p2)++ && i++ < n)
		len1++;
	str = malloc(sizeof(char) * (len1 + 1));
	if (!str)
		return (NULL);
	p1 = s1;
	p2 = s2;
	i = 0;
	while (*p1)
	{
		str[i++] = *p1;
		p1++;
	}
	while (*p2 && i <(unsigned int) len1)
	{
		str[i++] = *p2;
		p2++;
	}
	str[i] = '\0';
	return (str);
}
