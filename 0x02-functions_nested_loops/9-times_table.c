#include "main.h"

/**
 * times_table - print the multiplication from 0 to 9
 *
 *
 */
void times_table(void)
{
	int i, j, product;

	i = 0;
	while (i <= 9)
	{
		_putchar(48);
		j = 1;
		while (j <= 9)
		{
			product = i * j;
			_putchar(44);
			_putchar(32);
			if (product <= 9)
			{
				_putchar(product + 48);
			}
			_putchar((product / 10) + 48);
			_putchar((product % 10) + 48);
			++j;
		}
		_putchar('\n');
		++i;
	}
}
