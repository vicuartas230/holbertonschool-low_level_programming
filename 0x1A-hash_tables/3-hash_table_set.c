#include "hash_tables.h"

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

	if (!ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	ht->array[index] = add_nodeint(&ht->array[index], (char *)key, (char *)value);
	return (1);
}

/**
 * add_nodeint - This function adds a new node at the beginning of a list.
 * @head: The first node of the list.
 * @key: First element of the node.
 * @value: Second element of the node.
 * Return: The pointer to new node.
 */

hash_node_t *add_nodeint(hash_node_t **head, char *key, char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = key;
	node->value = strdup(value);
	node->next = *head;
	*head = node;
	return (*head);
}
