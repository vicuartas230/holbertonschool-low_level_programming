#include "lists.h"

/**
 * delete_nodeint_at_index - This function deletes
 * the node at index index of a linked list.
 * @head: The start of the linked list.
 * @index: The position of the linked list to delete.
 * Return: 1 if it successed or -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aux, *aux2;

	if (*head)
	{
		aux = *head;
		if (index > 0)
		{
			while (aux)
			{
				if (index == i + 1)
					break;
				aux = aux->next;
				i++;
			}
			if (aux == NULL)
					return (-1);
			aux2 = aux;
			aux2 = aux2->next;
			aux->next = aux2->next;
			free(aux2);
			return (1);
		}
		else if (index == 0)
		{
			aux = aux->next;
			free(*head);
			*head = aux;
			return (1);
		}
		else
			return (-1);
	}
	return (-1);
}
