#include "lists.h"

/**
 * add_nodeint_end - This function adds a new node at the end of a list.
 * @head: The first node of the list.
 * @n: The element of the node.
 * Return: The start of the linked list.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *aux;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (0);
	node->n = n;
	node->next = NULL;
	aux = *head;
	if (*head == NULL)
		*head = node;
	else
	{
		while (aux->next)
			aux = aux->next;
		aux->next = node;
	}
	return (*head);
}
