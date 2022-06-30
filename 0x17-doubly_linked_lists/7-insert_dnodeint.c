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
dlistint_t *temp1 = malloc(sizeof(dlistint_t));
dlistint_t *temp2 = *h;
unsigned int i;

if (!temp1)
return (NULL);

temp1->n = n;
temp1->next = temp1->prev = NULL;

if (!(*h))
{
*h = temp1;
return (*h);
}

if (idx == 0)
{
add_dnodeint(h, n);
return (*h);
}

if (idx == 1)
{
temp1->next = temp2->next;
temp1->prev = temp2;
(temp2->next)->prev = temp1;
temp2->next = temp1;
return (*h);
}

for (i = 0; i <= (idx - 2); i++)
{
temp2 = temp2->next;
}

if (!(temp2->next))
{
temp1->prev = temp2;
temp2->next = temp1;
}
else
{
temp1->next = temp2->next;
temp1->prev = temp2;
(temp2->next)->prev = temp1;
temp2->next = temp1;
}

return (*h);
}
