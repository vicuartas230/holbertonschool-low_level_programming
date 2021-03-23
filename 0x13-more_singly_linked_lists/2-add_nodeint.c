#include "lists.h"

/**
 * add_nodeint - This function adds a new node at the beginning of a list.
 * @head: The first node of the list.
 * @n: The element of the list.
 * Return: The pointer to new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (0);
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
