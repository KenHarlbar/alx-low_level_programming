#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		} else
		{
			continue;
		}
	}
	putchar('\n');
	return (0);
}
