#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *
 * @head: top node
 * @n: data
 *
 * Return: head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp = malloc(sizeof(dlistint_t));

if (temp == NULL)
return (NULL);
temp->n = n;
temp->prev = temp->next = NULL;
if (*head == NULL)
*head = temp;
else
{
temp->next = *head;
(*head)->prev = temp;
*head = temp;
}
return (*head);
}
