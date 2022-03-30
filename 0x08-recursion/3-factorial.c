#include "main.h"

/**
 * factorial - return the factorial of
 * any given integer
 *
 * @n: input integer
 *
 * Return: 1 if n is 0 or 1
 * -1 if n < 0 and n! if the given conditions
 * are not met
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
