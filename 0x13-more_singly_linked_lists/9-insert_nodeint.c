#include "lists.h"

/**
 * insert_nodeint_at_index - This function inserts a new node at a
 * given position.
 * @head: The start of the linked list.
 * @idx: The position where the new node is going to insert.
 * @n: The content of new node.
 * Return: The addres of new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux, *new;
	unsigned int i = 0;

	aux = *head;
	while (i < idx - 1)
	{
		aux = aux->next;
		i++;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = aux->next;
	aux->next = new;
	return (new);
}
