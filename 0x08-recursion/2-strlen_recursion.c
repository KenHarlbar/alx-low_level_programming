#include "main.h"

/**
 * _strlen_recursion - compute the length of
 * a string recursively and display it
 *
 * @s: input string
 *
 * Return: 0 if null and >0 if another
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
