#include <stdio.h>
/**
 * main - return alphabets except p end e
 *
 * Return: always 0(SUCCESS)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
		{
			c++;
			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

