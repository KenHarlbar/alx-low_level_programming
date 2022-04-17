#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: string to separate parameters
 * @n: number of parameters
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
