#include "main.h"
/**
 * rot13 - rotates to 13
 * @c: the string to rotate
 * Return: rot13
*/

char *rot13(char *c)
{
	int i;
	int j;
	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == original[j])
			{
				c[i] = rot[j];
				break;
			}
		}
	}
	return (c);
}
