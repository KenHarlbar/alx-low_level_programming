#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 *
 * @size: size of array
 *
 * Return: ptr to hash table else NULL if something
 * goes wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (!hashtable)
		return (NULL);

	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (!(hashtable->array))
		return (NULL);

	/* Initialize array */
	for (i = 0; i < size; i++)
		hashtable->array[i] = NULL;

	return (hashtable);
}
