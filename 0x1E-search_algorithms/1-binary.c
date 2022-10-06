#include "search_algos.h"

/**
 * binary_search - a function that searches for a value
 * in a sorted array of integers using the Binary search
 * algorithm
 *
 * @array: pointer to the first element of the array to
 * search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: -1 if value is not present in array or array is
 * NULL and the index of the value in the array if present
 */

int binary_search(int *array, size_t size, int value)
{
size_t low, high, mid, i;

if (!size)
return (-1);

low = 0, high = size - 1;
while (low != high)
{
mid = ((low + high) / 2);
printf("Searching in array: ");
for (i = low; i <= high; i++)
{
printf("%d", array[i]);
if (i != high)
printf(", ");
}
printf("\n");
if (array[mid] == value)
return (mid);
else if (value > array[mid])
low = mid + 1;
else if (value < array[mid])
high = mid - 1;
}
if (value == array[low])
  return (low);
return (-1);
}
