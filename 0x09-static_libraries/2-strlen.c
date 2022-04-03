#include "main.h"

/**
 * _strlen - compute the length of a string
 *
 * @s: String to be inputted
 *
 * Return: the count value
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
