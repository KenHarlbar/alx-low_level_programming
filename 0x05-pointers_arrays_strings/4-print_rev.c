#include "main.h"

/**
 * print_rev - print a string from it's end
 *
 * @s: Input string
 *
 * Return: no return value
 */
void print_rev(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	int countDown = count;

	while (*(s + countDown) >= 0)
	{
		_putchar(*(s + countDown));
		countDown--;
	}
	_putchar('\n');
}
