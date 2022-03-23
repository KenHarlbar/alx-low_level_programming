#include "main.h"

/**
 * reverse_array - reverse the elements of an array
 *
 * @a: input array
 * @n: number of elements in the array
 *
 * Return: no return value
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	while (i < n-1)
	{
		j = i + 1;
		while (j > 0)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
			j--;
		}
		i++;
	}
}
