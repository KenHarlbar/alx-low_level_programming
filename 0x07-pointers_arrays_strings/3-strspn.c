#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: first input string
 * @accept: second input string
 *
 * Return: the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count_s = 0, count_accept = 0, count, len = 0;

	while (*(s + count_s) != '\0')
	{
		while (*(accept + count_accept) != '\0')
		{
			if (*(s + count_s) == *(accept + count_accept))
			{
				count = 1;
				break;
			}
			count_accept++;
		}
		count_s++;
	}
	len += count;
	return (count_s - len);
}
