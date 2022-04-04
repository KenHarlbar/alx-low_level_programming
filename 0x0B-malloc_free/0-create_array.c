#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars and
 * initializes it with a specific char
 *
 * @size: first parameter
 * @c: second parameter
 *
 * Return: NULL if size is 0 or cr is NULL
 * and a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	cr = malloc(sizeof(c) * size);
	if (cr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		cr[i] = c;
	return (cr);
}
