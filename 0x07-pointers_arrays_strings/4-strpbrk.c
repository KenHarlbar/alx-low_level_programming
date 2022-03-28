#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * @s: first input string
 * @accept: second input string
 *
 * Return: a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int count_s, count_accept;

	for (count_s = 0; *(s + count_s) != '\0'; count_s++)
	{
		for (count_accept = 0; *(accept + count_accept) != '\0')
		{
			if (*(s + count_s) == *(accept + count_accept))
			{
				return (s + count_s);
			}
		}
	}
	return ('\0');
}
