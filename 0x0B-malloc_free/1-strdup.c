#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory
 *
 * @str: input string.
 *
 * Return: pointer of an array of chars
 * NULL if str and strout are NULL
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int count, j;

	if (str == NULL)
		return (NULL);
	count = 0;
	while (str[count] != '\0')
		count++;
	strout = (char *)malloc(sizeof(char) * (count + 1));
	if (strout == NULL)
		return (NULL);
	for (j = 0; j <= count; j++)
		strout[j] = str[j];
	return (strout);
}
