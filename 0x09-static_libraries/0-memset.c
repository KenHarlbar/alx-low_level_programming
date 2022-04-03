#include "main.h"

/**
 * _memset - Fills memory with constant byte
 *
 * @s: input string
 * @b: constant byte
 * @n: limit of constant byte
 *
 * Return: a pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
