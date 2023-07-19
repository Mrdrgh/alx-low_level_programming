#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * main - if arg 2 is an operator do something else print Error
 * Return: fmqlksdsjfmlqkjsdf
*/

int main(int argc, char *argv[])
{
	int arg1num, arg2num;
	char *oop;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	oop = argv[2];
	arg1num = atoi(argv[1]);
	arg2num = atoi(argv[3]);
	if ((strcmp(oop, "/") == 0 && arg2num == 0) || (strcmp(oop, "%") == 0 && arg2num == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if (oop[0] != '+' && oop[0] != '-'
	&& oop[0] != '/' && oop[0] != '%' && oop[0] != '*')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n",get_op_func(oop)(arg1num, arg2num));
	return (0);
}

