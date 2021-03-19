#include "lists.h"

/**
 * free_list - This function frees a list.
 * @head: The list to free.
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head->str);
		free(head);
		head = aux;
	}
}
