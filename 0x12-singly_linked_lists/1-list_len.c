#include "lists.h"

/**
 * list_len - This function returns the number of elements in a linked list.
 * @h: The linked list to count elements.
 * Return: The number of elements.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
