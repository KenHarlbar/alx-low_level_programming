#include "lists.h"

/**
 * dlistint_len -  returns the number of elements present
 * in a list
 *
 * @h: head of the list
 *
 * Return: number of elements present in list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
