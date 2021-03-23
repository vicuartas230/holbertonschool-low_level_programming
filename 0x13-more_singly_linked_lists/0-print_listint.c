#include "lists.h"

/**
 * print_listint - This function  prints all the elements of a list.
 * @h: The list to print.
 * Return: The number of elements printed.
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
