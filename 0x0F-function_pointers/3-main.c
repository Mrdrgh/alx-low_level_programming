#include "calc.h"
#include <stdio.h>
#include <string.h>

/**
 * main - if arg 2 is an operator do something else print Error
*/

void main(int argc, char *argv[])
{
	int i = 0;
	int arg1num, arg2num;
	char *oop;

	arg1num = atoi(argv[1]);
	arg2num = atoi(argv[3]);
	strcpy(oop, argv[2]);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (arg2num == 0 && oop[0] == '/' || arg1num == 0 && oop[0] == '%')
	{
		printf("Error\n");
		exit(100);
	}
	if (oop[1] != '+' && oop[1] != '-'
	&& oop[1] =! '/' && oop[1] != '%' && oop[1] != '*')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n",get_op_func(oop)(arg1num, arg2num));
}

