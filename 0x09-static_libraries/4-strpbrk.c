#include "main.h"
/**
 * _strpbrk - looks for the first occurence of any of the bytes of accept in s
 * @s: the string to look in
 * @accept: the bytes to look for
 * @Return: the pointer to the first occurence
*/

char *_strpbrk(char *s, char *accept)
{
	char *p = s;
	int k = 0;

	while (*p)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*p == accept[k])
			{
				return (p);
			}
		}
		p++;
	}
	return ('\0');
}
