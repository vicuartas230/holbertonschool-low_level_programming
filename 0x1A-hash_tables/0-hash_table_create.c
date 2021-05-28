#include "hash_tables.h"

/**
 * hash_table_create - This function creates a hash table.
 * @size: The size of the hash table to create.
 * Return: The hash table created.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(new->size * sizeof(hash_node_t *));
	while (i < new->size)
	{
		new->array[i] = NULL;
		i++;
	}
	return (new);
}
