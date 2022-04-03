#include "main.h"

/**
 * _abs - Prints absolute n if n is 0 or positive or negetive
 *
 * @n: number
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (n * -1);
}
