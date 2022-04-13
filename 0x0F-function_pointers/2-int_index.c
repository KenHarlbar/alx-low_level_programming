/**
 * int_index - search for an integer
 *
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: -1 if size is 0 or less than 0
 * -1 if no matched element
 * index of the first matched element if any
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(*(array + i)))
			{
				return (i);
			}
		}
	}
	return (-1);
}
