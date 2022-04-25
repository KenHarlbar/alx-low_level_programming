#include "lists.h"

/**
 * pop_listint - deletes the head node of a
 * listint_t linked list
 *
 * @head: top node
 *
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		listint_t *temp = (*head)->next;

		n = (*head)->n;
		free(*head);
		*head = temp;
		return (n);
	}
}
