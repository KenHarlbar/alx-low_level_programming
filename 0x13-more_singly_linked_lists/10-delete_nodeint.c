#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list
 *
 * @head: top node
 * @index: index
 *
 * Return: -1 if it fails and 1 if it passes
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1, *temp2;
	unsigned int i;

	temp1 = *head;
	if (index == 0)
	{
		if (!(*head))
			return (-1);
		*head = (*head)->next;
		free(temp1);
		if (temp1)
			return (-1);
		return (1);
	}
	else if (index == 1)
	{
		if (!(temp1->next))
			return (-1);
		temp2 = temp1->next;
		if (!(temp2->next))
			return (-1);
		temp1->next = temp2->next;
		free(temp2);
	}
	else
	{
		for (i = 0; i < (index - 1); i++)
		{
			if (!temp1 && !(temp1->next))
				return (-1);
			temp1 = temp1->next;
		}
		temp2 = temp1->next;
		if (!(temp2->next))
			return (-1);
		temp1->next = temp2->next;
		free(temp2);
	}
	if (temp2)
		return (-1);
	return (1);
}
