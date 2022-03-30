#include "main.h"

/**
 * _pow_recursion - compute the power of y to x
 * recursively and return it
 *
 * @x: first input integer
 * @y: second input integer
 *
 * Return: -1 if y is less than 0
 * 1 if y is 0
 * x if y is 1
 * x raised to the power of y if none of
 * the given conditions are met
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
