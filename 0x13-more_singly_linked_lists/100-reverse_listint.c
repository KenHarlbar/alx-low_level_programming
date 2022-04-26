#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list
 *
 * @head: top node
 *
 * Return: pointer to top node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *prev = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
