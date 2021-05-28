#include "hash_tables.h"
#include "4-hash_table_get.c"

/**
 * hash_table_set - This function adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to.
 * @key: The key of the element.
 * @value: The value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (!ht || !key || !_strlen(key))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (!_strcmp((char *)tmp->key, (char *)key))
			{
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
	}
	ht->array[index] = add_node(ht->array[index], key, value);
	return (1);
}

/**
 * add_node - This function adds a new node at the beginning of a list.
 * @head: The first node of the list.
 * @key: First element of the node.
 * @value: Second element of the node.
 * Return: The pointer to new node.
 */

hash_node_t *add_node(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (!value)
		node->value = NULL;
	else
		node->value = strdup(value);
	node->next = head;
	head = node;
	return (head);
}
