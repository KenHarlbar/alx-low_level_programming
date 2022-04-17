#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers, followed by a new line
 *
 * @separator: string to be printed after each parameter
 * @n: number of parameters
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
