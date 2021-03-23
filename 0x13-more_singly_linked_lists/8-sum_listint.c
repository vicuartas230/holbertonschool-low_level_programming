#include "lists.h"

/**
 * sum_listint - This function returns the sum of all the data of a list.
 * @head: The start of the linked list.
 * Return: The sum of all the data.
 */

int sum_listint(listint_t *head)
{
	listint_t *aux;
	int sum = 0;

	if (head == NULL)
		return (0);
	aux = head;
	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
