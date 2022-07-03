#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: hashtable
 * @key: item
 *
 * Return: value of key of NULL if otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *temp = ht->array[index];

	if (!key || !ht || !temp)
		return (NULL);

	while (temp)
	{
		if (!(strcmp(temp->key, key)))
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
