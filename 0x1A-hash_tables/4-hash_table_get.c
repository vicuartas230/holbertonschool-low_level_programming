#include "hash_tables.h"

/**
 * hash_table_get - This function retrieves a value associated with a key.
 * @ht: The hash table to check.
 * @key: The key to look for.
 * Return: The key looked for.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
		return (NULL);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp((char *)key, tmp->key))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);

}
