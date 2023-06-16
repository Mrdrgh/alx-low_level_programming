#include <stdio.h>
/**
 * main - print all the chars
 *
 * Return: Always 0(SUCCESS)
*/
int main(void)
{
	char c = 'a';
	char b = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
