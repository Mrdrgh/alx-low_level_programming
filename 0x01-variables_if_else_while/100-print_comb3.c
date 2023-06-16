#include <stdio.h>
/**
 * main - qmlkfqmlfd
 *
 * Return: qlmkdfqmd
*/
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i * 10 + j < j * 10 + i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
