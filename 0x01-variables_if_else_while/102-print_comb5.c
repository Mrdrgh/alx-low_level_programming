#include <stdio.h>
/**
* main - qmlfkjqmldkfmqdf
*
* Return: qmljkfdqmd4
*/
int main(void)
{
int i;
int j;

for (i = 0 ; i < 100; i++)
{
for (j = 0; j < 100; j++)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i < 99 && j < 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
