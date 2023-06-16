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
	int k;
	int kk;

	for (k = 0; k < 10; k++)
	{
	for (kk = 0; kk < 10; kk++){
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{	
			putchar(k + '0');
			putchar(kk + '0');
			putchar(' ');
			putchar(i + '0');
			putchar(j + '0');
			if (i == 9 && j == 9 && k == 9 && kk == 9)
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
