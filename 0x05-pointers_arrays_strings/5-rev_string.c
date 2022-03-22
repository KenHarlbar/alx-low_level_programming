#include "main.h"

/**
 * rev_string - print the reverse of a string
 *
 * @s: Input string
 *
 * Return: no return value
 */
void rev_string(char *s)
{
	int count = 0, countDown;

	while (*(s + count) != '\0')
	{
		count++;
	}
	countDown = count - 1;

	while (countDown >= 0)
	{
		_putchar(*(s + countDown));
		countDown--;
	}
	_putchar('\n')
}
