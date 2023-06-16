#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - return the status of the last digit of n
 * 
 * Return: Always 0(SUCCESS)
*/
int main(void)
{
	int n;
	int number;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	number = n % 10;
	if(number > 5)
	{
		printf("Last digit of %d is and is greater than 5\n",n);
	}
	else if(number == 0)
	{
		printf("Last digit of %d is and is 0\n");
	}
	else if(number < 6 && number > 0)
	{
		printf("Last digit of %d is and is less than 6 and not 0\n");
	}
	return (0);
}