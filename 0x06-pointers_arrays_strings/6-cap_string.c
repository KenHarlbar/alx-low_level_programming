#include "main.h"

/**
 * cap_string - capitalize a string
 *
 * @s: Input string
 *
 * Return: return the string with the first
 * letters of all words capitalized
 */
char *cap_string(char *s)
{
	int count = 0, i = 0, sep_of_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + count) >= 97 && *(s + count) <= 122)
	{
		*(s + count) = *(s + count) - 32;
	}
	while (*(s + count) != '\0')
	{
		while (i < 13)
		{
			if (*(s + (count + 1)) >= 97 && *(s + (count + 1)) <= 122)
			{
				*(s + (count + 1)) = *(s + (count + 1)) - 32;
				break;
			}
			i++;
		}
		count++;
	}
	return (s);
}
