#include "lists.h"

/**
 * add_node - This function adds a new node at the beginning of a list_t list.
 * @head: The start of lists.
 * @str: The string to add to list.
 * Return: The address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *n_node;

	for (i = 0; str[i] != '\0'; i++)
		;
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (0);
	n_node->str = strdup(str);
	n_node->len = i;
	if (*head == NULL)
		*head = n_node;
	else
	{
		n_node->next = *head;
		*head = n_node;
	}
	return (*head);
}
