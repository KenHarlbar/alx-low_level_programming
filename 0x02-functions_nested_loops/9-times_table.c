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
		j = 1;
		while (j <= 9)
		{
			product = i * j;
			_putchar(product);
			if (j == 9)
			{
				_putchar('\n');
			}
			_putchar(44);
			_putchar(32);
			++j;
		}
		++i;
	}
}
