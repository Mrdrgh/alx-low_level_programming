#include <stdio.h>
/**
 * main - printf all the alphabet in lower case
 *
 * Return: Always 0(SUCCESS
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	printf("\n");
	return (0);
}
