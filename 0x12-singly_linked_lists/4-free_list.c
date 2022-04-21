#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: top node
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = temp->next;
		free(temp->str);
		free(temp);
	}
}
