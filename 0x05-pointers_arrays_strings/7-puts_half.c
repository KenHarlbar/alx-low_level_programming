#include "main.h"

/**
 * puts_half - print half of a string
 *
 * @str: Input string
 *
 * Return: no return value
 */
void puts_half(char *str)
{
	int count = 0, i;

	while (*(str + count) != '\0')
	{
		count++;
	}
	if (count % 2 == 1)
	{
		i = count / 2;
	}
	else
	{
		i = (count - 1) / 2;
	}
	i = i + 1;
	while (i < count)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
