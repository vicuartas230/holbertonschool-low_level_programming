#include "search_algos.h"

/**
 * linear_skip - This function searches for
 * a value in a sorted skip list of integers.
 * @list: Is a pointer to the head of the skip list to search in.
 * @value: Is the value to search for.
 * Return: A pointer on the first node where value is located.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp = list, *aux = NULL;

	if (!list)
		return (NULL);
	while (tmp->express && !(tmp->n <= value && value <= tmp->express->n))
	{
		printf("Value checked at index [%ld] = [%d]\n",
		tmp->express->index, tmp->express->n);
		tmp = tmp->express;
	}
	if (!tmp->express)
	{
		aux = tmp;
		while (aux->next)
			aux = aux->next;
		printf("Value found between indexes [%ld] and [%ld]\n",
		tmp->index, aux->index);
		return (skip_list_linear_search(tmp, aux, value));
	}
	else
	{
		printf("Value checked at index [%ld] = [%d]\n",
		tmp->express->index, tmp->express->n);
		printf("Value found between indexes [%ld] and [%ld]\n",
		tmp->index, tmp->express->index);
		return (skip_list_linear_search(tmp, tmp->express, value));
	}
}

/**
 * list_linear_search - This function searches for a value in
 * an array of integers using the Linear search algorithm.
 * @low: The first element of the subarray.
 * @high: The last element of the subarray.
 * @value: Is the value to search for.
 * Return: A pointer to the first node where value is located.
 */

skiplist_t *skip_list_linear_search(skiplist_t *low,
skiplist_t *high, int value)
{
	while (low->index < high->index)
	{
		printf("Value checked at index [%ld] = [%d]\n", low->index, low->n);
		if (low->n == value)
			return (low);
		low = low->next;
	}
	if (low->index == high->index && value == low->n)
	{
		printf("Value checked at index [%ld] = [%d]\n", low->index, low->n);
		return (low);
	}
	printf("Value checked at index [%ld] = [%d]\n", low->index, low->n);
	return (NULL);
}
