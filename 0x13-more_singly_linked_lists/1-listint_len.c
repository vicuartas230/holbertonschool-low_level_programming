#include "lists.h"

/**
 * listint_len - This function returns the number of elements in a linked list.
 * @h: The list to check.
 * Return: The number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
