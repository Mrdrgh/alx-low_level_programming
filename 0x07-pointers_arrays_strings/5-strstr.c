#include "main.h"
/**
 * _strstr - searchs for the firs occurence of a string in a string
 * @haystack: the string to look in
 * @needle: the string to look for
 * Return: the pointer to the substring result
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *q = needle;

		while (*p == *q && *q != '\0')
		{
			p++;
			q++;
		}

		if (*q == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}

