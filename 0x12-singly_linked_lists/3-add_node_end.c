#include "lists.h"

/**
 * add_node_end - adds a new node at
 * the end of a list_t list
 *
 * @head: top node
 * @str: input string
 *
 * Return: pointer to first node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp1 = malloc(sizeof(list_t));
	size_t len;

	if (temp1 == NULL)
		return (NULL);
	temp1->str = strdup(str);
	len = 0;
	while (str[len])
		len++;
	temp1->len = len;
	temp1->next = NULL;
	if (*head == NULL)
	{
		*head = temp1;
	}
	else
	{
		list_t *temp2 = *head;

		while (temp2->next != NULL)
			temp2 = temp2->next;
		temp1->next = temp2->next;
		temp2->next = temp1;
	}
	return (*head);
}
