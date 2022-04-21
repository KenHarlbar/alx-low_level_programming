#include "lists.h"

/**
 * list_len - returns the number of elements
 * in a linked list_t list
 *
 * @h: top node
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
