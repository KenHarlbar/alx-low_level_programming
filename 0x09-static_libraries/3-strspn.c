#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count_s, count_accept, bool;

	for (count_s = 0; *(s + count_s) != '\0'; count_s++)
	{
		bool = 1;
		for (count_accept = 0; *(accept + count_accept) != '\0'; count_accept++)
		{
			if (*(s + count_s) == *(accept + count_accept))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (count_s);
}
