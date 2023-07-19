#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * main - if arg 2 is an operator do something else print Error
 * @argc: the arg
 * @argv: the arg
 * Return: fmqlksdsjfmlqkjsdf
*/

/**
* int main(int argc, char *argv[])
*{
*	int arg1num, arg2num;
*	char *oop;
*
*
*	if (argc != 4)
*	{
*		printf("Error\n");
*		exit(98);
*	}
*	oop = argv[2];
*	arg1num = atoi(argv[1]);
*	arg2num = atoi(argv[3]);
*	if ((strcmp(oop, "/") == 0 && arg2num == 0) ||
*	 (strcmp(oop, "%") == 0 && arg2num == 0))
*	{
*		printf("Error\n");
*		exit(100);
*	}
*	if (oop[0] != '+' && oop[0] != '-'
*	&& oop[0] != '/' && oop[0] != '%' && oop[0] != '*')
*	{
*		printf("Error\n");
*		exit(99);
*	}
*	printf("%d\n", get_op_func(oop)(arg1num, arg2num));
*	return (0);
*}
*/
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}


