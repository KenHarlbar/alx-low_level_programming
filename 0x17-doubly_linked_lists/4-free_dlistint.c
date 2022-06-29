#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: Top node
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *nxt, *h = head;

while (h->next != NULL)
{
nxt = h->next;
free(h);
h = nxt;
}
free(h);
}
