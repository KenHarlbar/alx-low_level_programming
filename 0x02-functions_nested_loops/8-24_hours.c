#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: No return
 */
void jack_bauer(void)
{
	int a, b, c, d;

	a = 48;
	while (a <= 50)
	{
		b = 48;
		while (b <= 57)
		{
			c = 48;
			while (c <= 53)
			{
				d = 48;
				while (d <= 57)
				{
					if (a >= 50 && b >= 52)
					{
						break;
					}
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					++d;
				}
				++c;
			}
			++b;
		}
		++a;
	}
}
