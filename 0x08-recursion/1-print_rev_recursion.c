#include "main.h"

/**
 * _print_rev_recursion - print a string reversed recursively
 *
 * @s: input string
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
