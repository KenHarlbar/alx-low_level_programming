#include <main.h>

/**
 * swap_int - swap two numbers
 *
 * @a: first variable
 * @b: second variable
 *
 * Return: no return value
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
