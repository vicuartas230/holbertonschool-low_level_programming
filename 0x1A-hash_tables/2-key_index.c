#include "hash_tables.h"

/**
 * key_index - This function gives you the index of a key.
 * @key: The key of the element.
 * @size: The size of the hash table.
 * Return: The index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
