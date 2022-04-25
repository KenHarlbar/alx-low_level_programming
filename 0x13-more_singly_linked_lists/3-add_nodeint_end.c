#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the
 * end of a listint_t list
 *
 * @head: top node
 * @n: integer
 *
 * Return: pointer to topnode
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp1 = malloc(sizeof(listint_t));

	if (temp1 == NULL)
		return (NULL);
	temp1->n = n;
	temp1->next = NULL;
	if (*head == NULL)
		*head = temp1;
	else
	{
		listint_t *temp2 = *head;

		while (temp2->next != NULL)
			temp2 = temp2->next;
		temp2->next = temp1;
	}
	return (*head);
}
