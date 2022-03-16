#include "main.h"

/**
 * print_alphabet_x10 - Prints 10x the alphabets in lowercase, and then a newline
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 97;

		while (j < 123)
		{
			_putchar(j);
			++j;
		}
		_putchar('\n');
		++i;
	}
}
