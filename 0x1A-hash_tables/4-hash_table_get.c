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

	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
		return (NULL);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!_strcmp((char *)key, tmp->key))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);

}

/**
 * _strcmp - This function compares two strings
 * @s1: Character 1 to compare
 * @s2: Character 2 to compare
 * Return: 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, e = 0;

	if (_strlen(s1) == _strlen(s2))
	{
		for (a = 0; s1[a] && s2[a] != '\0'; a++)
		{
			if (s1[a] != s2[a])
			{
				e = (s1[a] - s2[a]);
				break;
			}
			else
			{
				e = 0;
			}
		}
		return (e);
	}
	return (_strlen(s1) - _strlen(s2));
}

/**
 * _strlen - Function that returns the length of a string
 * @s: string of characters
 * Return: number of characters
 */

int _strlen(const char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
