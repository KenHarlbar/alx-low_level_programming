#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position
 *
 * @head: top node
 * @idx: index
 * @n: integer
 *
 * Return: address of new node and null if it
 * fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	for (i = 0; i < (idx - 1); i++)
		temp = temp->next;
	newNode->next = temp->next;
	temp->next = newNode;
	if (temp->next != NULL)
		return (newNode);
	return (NULL);
}
