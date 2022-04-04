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
	unsigned int count1, count2, i, j, count;

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
	count = count1 + count2;
	strout = (char *)malloc(sizeof(char) * (count + 1));
	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}
	if (strout == NULL)
		return (NULL);
	for (j = 0; j < count1; j++)
		strout[j] = s1[j];
	i = count2;
	for (count2 = 0; count2 <= i; j++, count2++)
		strout[j] = s2[count2];
	return (strout);
}
