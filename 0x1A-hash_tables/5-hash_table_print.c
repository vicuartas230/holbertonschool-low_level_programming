#include "hash_tables.h"

/**
 * hash_table_print - This function prints a hash table.
 * @ht: The hash table to print.
 * Return: Nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *tmp = NULL;
	char *separator = "", *init = ", ";

	if (!ht)
		return;
	printf("{");
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
			printf("%s", separator);
			printf("'%s': '%s'", tmp->key, tmp->value);
			separator = init;
			tmp = tmp->next;
		}
		i++;
	}
	printf("}\n");
}
