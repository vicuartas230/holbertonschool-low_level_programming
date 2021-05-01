#include "lists.h"

/**
 * add_dnodeint - This function adds a new node at the beginning of a list.
 * @head: The start of the linked list.
 * @n: The data of the linked list.
 * Return: The addres of the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
		return (new);
	}
	return (NULL);
}
