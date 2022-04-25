#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: top node
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp = head->next;

		free(head);
		head = temp;
	}
}
