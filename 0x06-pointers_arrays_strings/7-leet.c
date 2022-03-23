#include "main.h"

/**
 * leet - encode a string into 1337
 *
 * @s: Input string
 *
 * Return: return the string with some characters changed
 */
char *leet(char *s)
{
	int count = 0, i = 0;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		while (i < 5)
		{
			if (*(s + count) == low_letters[i] || *(s + count) == upp_letters[i])
			{
				*(s + count) = numbers[i];
				break;
			}
			i++;
		}
		count++;
	}
	return (s);
}
