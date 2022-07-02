#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list.
 *
 * @head: top node
 * @index: index of node to be deleted
 *
 * Return: 1 for success, -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i;
dlistint_t *temp = *head;

if (!temp)
return (-1);
if (index != 0)
{
for (i = 0; i < index; i++)
temp = temp->next;
(temp->prev)->next = temp->next;
(temp->next)->prev = temp->prev;
}
else
{
printf("E don reach oo..");
(temp->next)->prev = temp->prev;
*head = temp->next;
}
free(temp);
return (1);
}
