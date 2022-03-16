#include "main.h"

/**
 * _islower - Checks for lowercase character
 * and prints 1 if lowercase and zero if other
 * @c: The argument
 *
 * Return: 1 for lowercase, 0 for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
