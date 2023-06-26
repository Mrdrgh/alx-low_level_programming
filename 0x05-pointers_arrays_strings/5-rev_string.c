#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string
*/

void rev_string(char *s)
{
	char *p1 = s;
	int i = 0, j = 0;
	char temp;

	while ((*p1))
	{
		i++;
		p1++;
	}
	i--;
	for (; i > 0; i--)
	{
		if (j < i)
		{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		}
		j++;
	}
}
