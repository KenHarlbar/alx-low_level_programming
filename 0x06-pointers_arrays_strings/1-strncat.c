#include "main.h"

/**
 * _strncat- concatenate two strings without the null byte character
 *
 * @dest: first input string
 * @src: second input string
 * @n: amount of bytes used from src
 *
 * Return: no return value
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while(count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) != '\0')
		{
			break;
		}
		count++;
		count2++;
	}
	return (dest);
}
