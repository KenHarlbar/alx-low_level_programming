#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: first input string
 * @src: second input string
 *
 * Return: no return value
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;

	while (*(dest + count) != '\0')
	{
		_putchar(*(dest + count));
		count++;
	}
	count = 0;
	while(*(src + count) != '\0')
	{
		_putchar(*(src + count));
		count++;
	}
	_putchar('\0');
}
