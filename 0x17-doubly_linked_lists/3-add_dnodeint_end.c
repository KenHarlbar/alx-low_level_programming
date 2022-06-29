#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * @head: top node
 * @n: data
 *
 * Return: head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp1 = malloc(sizeof(dlistint_t));
dlistint_t *temp2;

if (temp1 == NULL)
return (NULL);
temp1->n = n;
temp1->prev = temp1->next = NULL;
if (*head == NULL)
*head = temp1;
else
temp2 = *head;
{
while (temp2->next != NULL)
temp2 = temp2->next;
temp1->prev = temp2;
}
temp2->next = temp1;
return *head;
}
