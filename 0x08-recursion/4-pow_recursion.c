#include "main.h"
/**
 * _pow_recursion - returns the power fo a int with recurssion
 * @x: the int
 * @y: the power , also int
 * Return: the result
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
