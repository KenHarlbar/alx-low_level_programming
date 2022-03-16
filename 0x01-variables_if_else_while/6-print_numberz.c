#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/**
	  * Because we'll be printing each digit with putchar,
	  * we'll have to use their ASCII code: 0 is 48 & 9 is 57
	  */
	for (i = 48; i <= 57; ++i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
