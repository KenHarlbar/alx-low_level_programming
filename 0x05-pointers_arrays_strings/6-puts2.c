#include "main.h"

/**
 * puts2 - print every character in a string with a newline
 *
 * @str: Input string
 *
 * Return: no return value
 */
void puts2(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		_putchar(*(str + count));
		_putchar('\n');
		count++;
	}
}
