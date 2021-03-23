#include "lists.h"

/**
 * pop_listint - This function deletes the head node of a linked list.
 * @head: The start of the linked list.
 * Return: The head node's data.
 */

int pop_listint(listint_t **head)
{
	listint_t *aux;
	int data;

	if (*head)
	{
		aux = *head;
		data = aux->n;
		aux = aux->next;
		free(*head);
		*head = aux;
		return (data);
	}
	return (-1);
}
