#include "lists.h"

/**
 * free_listint - This function free a linked list.
 * @head: The linked list to free.
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
