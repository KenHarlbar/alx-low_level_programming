#include "main.h"

/**
 * _puts - print a string
 *
 * @str: Input array
 *
 * Return: no return value
 */
void _puts(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
