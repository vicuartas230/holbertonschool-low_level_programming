#include "lists.h"

/**
 * add_node_end - This function  adds a new node at the end of a list_t list.
 * @head: The beginning of the list.
 * @str: The string to print in str variable of the list.
 * Return: The address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *s, *n_s;

	for (i = 0; str[i] != '\0'; i++)
		;
	n_s = malloc(sizeof(list_t));
	if (n_s == NULL)
		return (0);
	n_s->str = strdup(str);
	n_s->len = i;
	if (*head == NULL)
		*head = n_s;
	else
	{
		s = *head;
		while (s->next != NULL)
		{
			s = s->next;
		}
		s->next = n_s;
	}
	return (*head);
}
