#include "lists.h"

/**
 * add_node -  adds a new node at the
 * beginning of a list_t list
 *
 * @head: top node
 * @str: input string
 *
 * Return: address of the current node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	size_t nchar;

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	nchar = 0;
	while (str[nchar])
		nchar++;
	temp->len = nchar;
	temp->next = *head;
	*head = temp;
	return (*head);
}
