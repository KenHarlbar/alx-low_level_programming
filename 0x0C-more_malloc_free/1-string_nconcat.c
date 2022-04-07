#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenate two string
 *
 * @s1: first input string
 * @s2: second input string
 * @n: limit of s1
 *
 * Return: NULL if s the funtion fails
 * or s if the function passes
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count, count1, count2, limit, i;
	char *s;

	/* count the characters in s1 and s2 respectively */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	count1 = 0;
	while (s1[count1] != '\0')
		count1++;
	count2 = 0;
	while (s2[count2] != '\0')
		count2++;
	/* Create a space in the memory for the concatenation */
	if (n >= count2)
		n = count2;
	count = count1 + n;
	s = malloc(count + 1);
	if (s == NULL)
		return (NULL);
	/* Write into s */
	for (i = 0; i < count; i++)
		/* print the content of s1*/
		if (i < count1)
			s[i] = s1[i];
		/* print the contents of s2 */
		else
			s[i] = s2[i - count1];
	s[i] = '\0';
	return (s);
}
