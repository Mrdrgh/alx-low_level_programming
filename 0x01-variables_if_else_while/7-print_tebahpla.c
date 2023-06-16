#include <stdio.h>
/**
 * main - printf all the alphabet in lower case
 *
 * Return: Always 0(SUCCESS
*/
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	printf("\n");
	return (0);
}
