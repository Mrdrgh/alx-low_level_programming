#include <stdio.h>
/**
 * main - qmdfjqmdfkq
 *
 * Return: Always0
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i * 100 + j * 10 + k < i * 100 + k * 10 + j
				&& i * 100 + j * 10 + k < k * 100 + j * 10 + i
				&& i * 100 + j * 10 + k < k * 100 + i * 10 + j
				&& i * 100 + j * 10 + k < j * 100 + k * 10 + i
				&& i * 100 + j * 10 + k < i * 100 + k * 10 + j
				&& i * 100 + j * 10 + k < j * 100 + i * 10 + k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i == 7 && j == 8 && k == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}