#include "main.h"

/**
 * print_number - Print numbers
 *
 * @n: input number
 *
 * Return: no return value
 */
void print_number(int n)
{
	unsigned int count, d, m;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}
	d = m;
	count = 1;
	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
	while (count >= 1)
	{
		_putchar(((m / count) % 10) + 48);
		count /= 10;
	}
}
