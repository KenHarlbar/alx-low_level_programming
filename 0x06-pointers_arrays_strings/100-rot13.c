#include "main.h"

/**
 * rot13 - Encode a string using rot13
 *
 * @s: Input String
 *
 * Return: The encoded string
 */
char *rot13(char *s)
{
	int count = 0, i = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		while (i < 52)
		{
			if (*(s + count) == alphabet[i])
			{
				*(s + count) = rot13[i];
			}
			i++;
		}
		count++;
	}
	return (s);
}
