#include "main.h"
/**
 * _strstr - searchs for the firs occurence of a string in a string
 * @haystack: the string to look in
 * @needle: the string to look for
 * @Return: the pointer to the substring result
*/

char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;
	char *q = needle;
	int needle_len = 0, haystack_len = 0;
	int i;

	while (*p)
	{
		haystack_len++;
		p++;
	}
	while (*q)
	{
		needle_len++;
	}
	p = haystack;
	while (*(p + needle_len))
	{
		q = needle;
		for (i = 0; i < needle_len; i++)
		{
			if (needle[i+1] == '\0')
			{
				return (p);
			}
			if (*(p + i) != needle[i])
			{
				return ('\0');
			}
		}
		p++;
	}
	return ('\0');
}

