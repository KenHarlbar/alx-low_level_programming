#include <stdio.h>

/**
 * main - Print all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int start = 48, end = 58, i, j;

	i = start;
	while (i < end)
	{
		j = start;
		while (j < end)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
