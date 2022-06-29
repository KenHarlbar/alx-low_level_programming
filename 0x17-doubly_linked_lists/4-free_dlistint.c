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
dlistint_t *nxt;

if (head != NULL)
{
while (head->prev != NULL)
head = head->prev;
}

while (head != NULL)
{
nxt = head->next;
free(head);
head = nxt;
}
}
