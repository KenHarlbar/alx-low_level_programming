#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: first input string
 * @s2: second input string
 *
 * Return: 0 if s1 and s2 are the same
 * and another number if they are not
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0, diff = 0;

	while (diff == 0)
	{
		if (*(s1 + count) != '\0' && *(s2 + count) != '\0')
		{
			break;
		}
		diff = *(s1 + count) - *(s2 + count);
		count++;
	}
	return (diff);
}
