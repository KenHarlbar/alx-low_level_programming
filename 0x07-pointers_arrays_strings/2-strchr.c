#include "main.h"

/**
 * _strchr - Locate a character in a string
 *
 * @s: input string
 * @c: character to be located
 *
 * Return: pointer to the first occurrence
 * of 'c' if available or NULL if not
 */
char *_strchr(char *s, char c)
{
	unsigned int count = 0;

	while (*(s + count) != '\0')
	{
		if (*(s + count) == c)
		{
			break;
		}
		count++;
	}
	if (*(s + count) == c)
	{
		return (s + count);
	}
	return ('\0');
}
