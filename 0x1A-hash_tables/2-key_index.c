#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 *
 *
 * @key: key to be stored
 * @size: size of array of hashtable
 *
 * Return: index on the array where the key should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2((unsigned char *)key);
	unsigned long int index = hash % size;

	return (index);
}
