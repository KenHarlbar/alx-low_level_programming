#include "hash_tables.h"

/**
 * free_node - frees a node
 *
 * @node: node to be freed
 *
 * Return: nothing
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: hashtable
 * @key: item
 * @value: item value
 *
 * Return: 0 if unsuccessful and 1 if successful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t)), *current, *prev, *top;
	unsigned long int i = 0, index = key_index((unsigned char *)key, ht->size);

	if (!(strcmp(key, "")) || !key || !ht || !(new_node))
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (!(ht->array[index]))
		ht->array[index] = new_node;
	else
	{
		current = prev = top = ht->array[index];
		while (current)
		{
			if (!(strcmp(current->key, new_node->key)) && (i = 0))
			{
				new_node->next = current->next;
				free_node(current);
				break;
			}
			else if (!(strcmp(current->key, new_node->key)))
			{
				prev->next = current->next;
				free_node(current);
				break;
			}
			prev = current;
			current = current->next;
			i++;
		}
		if (!(new_node->next))
			new_node->next = top;
		ht->array[index] = new_node;
	}
	return (1);
}
