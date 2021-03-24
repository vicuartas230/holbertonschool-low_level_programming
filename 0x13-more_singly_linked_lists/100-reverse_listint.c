#include "lists.h"

/**
 * reverse_listint - This function reverses a linked list.
 * @head: The start of the linked list.
 * Return: The head of the linked list reversed.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev, *aux = *head;

	if (!(*head))
		return (NULL);
	if (!(*head)->next)
		return (*head);
	rev = aux->next->next;
	aux = (*head)->next;
	(*head)->next = NULL;
	while (aux)
	{
		aux->next = *head;
		*head = aux;
		aux = rev;
		if (rev)
			rev = rev->next;
		else
			break;
	}
	return (*head);
}
