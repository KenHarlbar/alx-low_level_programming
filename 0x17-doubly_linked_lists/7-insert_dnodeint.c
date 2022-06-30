#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: top node
 * @idx: index of new node
 * @n: data of new node
 *
 * Return: address of new node if h == NULL
 *          NULL if idx <= 0
 *          NULL if malloc fails
 *          NULL if idx - 1 > count++
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp = malloc(sizeof(dlistint_t));
dlistint_t *head = *h;
unsigned int i = 0, count = 0;

if (!temp)
return (NULL);
if (idx <= 0)
return (NULL);
temp->n = n;
temp->next = temp->prev = NULL;
if (!(*h))
{
*h = temp;
return (*h);
}
while (head)
{
head = head->next;
count++;
}
head = *h;
if ((idx - 1) > (count + 1))
return (NULL);
while (i <= (idx - 1) && head->next)
{
i++;
head = head->next;
}
if ((idx - 1) == (count + 1))
{
temp->prev = head;
head->next = temp;
}
else
{
temp->prev = head->prev;
temp->next = head;
(head->prev)->next = temp;
head->prev = temp;
}
return (*h);
}
