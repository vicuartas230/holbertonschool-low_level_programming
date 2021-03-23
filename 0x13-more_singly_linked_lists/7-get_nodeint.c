#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the nth node of a linked list.
 * @head: The start of the linked list.
 * @index: The node to return.
 * Return: The node deal with index in the linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int i = 0;

	aux = head;
	while (i < index)
	{
		aux = aux->next;
		i++;
	}
	return (aux);
}
