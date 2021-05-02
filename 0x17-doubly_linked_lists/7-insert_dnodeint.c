#include "lists.h"

/**
 * insert_dnodeint_at_index - This function inserts a new node at
 * a given position.
 * @h: The start of the linked list.
 * @idx: The node to look for.
 * @n: The data of the new node.
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new = NULL, *tmp = *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n, new->next = NULL, new->prev = NULL;
	if (!*h && idx)
		return (NULL);
	else if (!*h && !idx)
	{
		*h = new;
		return (new);
	}
	if (!idx && tmp->next)
	{
		new->next = tmp, tmp->next->prev = new;
		*h = new;
		return (new);
	}
	else if (!idx && !tmp->next)
	{
		new->next = tmp, tmp->prev = new, tmp->next = NULL, *h = new;
		return (new);
	}
	while (tmp->next)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next, new->prev = tmp, tmp->next->prev = new;
			tmp->next = new;
			return (new); }
		i++, tmp = tmp->next; }
	if (idx == i + 1)
	{
		tmp->next = new, new->prev = tmp, new->next = NULL;
		return (new); }
	return (NULL);
}
