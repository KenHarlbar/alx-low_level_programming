#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * of a listint_t linked list
 *
 * @head: top node
 * @index: index :(
 *
 * Return: pointer to nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (index == 0)
	{
		return (head);
	}
	else
	{
		listint_t *temp = head;

		for (i = 0; i < index; i++)
		{
			temp = temp->next;
			if (temp == NULL)
				return (NULL);
		}
		return (temp);
	}
}
