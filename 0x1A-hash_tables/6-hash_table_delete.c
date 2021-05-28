#include "hash_tables.h"

/**
 * hash_table_delete - This function deletes a hash table.
 * @ht: The hash table to delete.
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned int i = 0;

	while (i < ht->size)
	{
		if (!ht->array[i])
		{
			i++;
			continue;
		}
		tmp = ht->array[i];
		while (tmp)
		{
			free(tmp->value);
			tmp = tmp->next;
			free(ht->array[i]);
			ht->array[i] = tmp;
		}
		i++;
	}
	free(ht);
}
