#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: hashtable
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				flag = 1;
				temp = temp->next;
			}
		}
	}
	putchar('}');
	putchar('\n');
}
