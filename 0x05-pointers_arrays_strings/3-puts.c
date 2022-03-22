#include "main.h"

/**
 * _puts - print a string
 *
 * str: Input array
 *
 * Return: no return value
 */
void _puts(char *str)
{
	int i = 0;

	while (i <= _strlen(str))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
