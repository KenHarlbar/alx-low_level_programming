#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: first input string
 * @s2: second input string
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int count1, count2, j, count;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	count1 = 0;
	while (s1[count1] != '\0')
		count1++;
	count2 = 0;
	while (s2[count2] != '\0')
		count2++;
	count = count1 + count2;
	strout = (char *)malloc(sizeof(char) * (count + 1));
	if (strout == NULL)
		return (NULL);
	for (j = 0; j <= count1; j++)
		strout[j] = s1[j];
	for (j = count1++; j <= count2; j++)
		strout[j] = s2[j];
	return (strout);
}
