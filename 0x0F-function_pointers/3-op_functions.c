#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - adds
 * @a: a
 * @b: b
 * Return: the addition
*/

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substracts
 * @a: a
 * @b: b
 * Return: the substraciton
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies
 * @a: the a
 * @b: the b
 * Return: the multiplication
*/

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: a
 * @b: b
 * Return: the division
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulo
 * @a: a
 * @b: b
 * Return: the modulo of a to b
*/
int op_mod(int a, int b)
{
	return (a % b);
}


