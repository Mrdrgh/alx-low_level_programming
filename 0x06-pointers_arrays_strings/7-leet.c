#include "main.h"
/**
 * leet - 1337 encoder
 * @c: the string to incode
 * Return: the encoded string
*/

char *leet(char *c)
{
	char leet[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char decode[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == leet[j])
			{
				c[i] = decode[j];
				break;
			}
		}
	}
	return (c);
}
