#include "lists.h"

/**
 * free_listint2 - This function  frees a linked list.
 * @head: The linked list to free.
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;
	while (*head)
	{
		aux = *head;
		aux = aux->next;
		free(*head);
		*head = aux;
	}
	head = NULL;
}
