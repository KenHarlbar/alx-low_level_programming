#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * and prints 1 if alphabet and 0 if other
 * @c: The argument
 *
 * Return: 1 for alphabet, 0 for others
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
