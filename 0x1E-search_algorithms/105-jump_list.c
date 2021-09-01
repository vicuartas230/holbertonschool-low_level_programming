#include "search_algos.h"

/**
 * jump_list - This function searches for a value in
 * a sorted list of integers using the Jump search algorithm.
 * @list: Is a pointer to the head of the list to search in.
 * @size: Is the number of nodes in list.
 * @value: Is the value to search for.
 * Return: A pointer to the first node where value is located.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t block = 0;
	listint_t *lower = list, *upper = NULL, *tmp = NULL;

	if (!list)
		return (NULL);
	block = sqrt(size);
	upper = jumps(lower, block);
	while (upper && !(lower->n <= value && value <= upper->n))
	{
		printf("Value checked array[%ld] = [%d]\n", upper->index, upper->n);
		lower = upper;
		upper = jumps(upper, block);
	}
	if (!upper)
	{
		tmp = lower;
		while (tmp->next)
			tmp = tmp->next;
		upper = tmp;
	}
	printf("Value checked array[%ld] = [%d]\n", upper->index, upper->n);
	printf("Value found between indexes [%ld] and [%ld]\n",
	lower->index, upper->index);
	return (list_linear_search(lower, upper, value));
}

/**
 * jumps - This function moves the number of positions indicated for block.
 * @tmp: The temporary pointer.
 * @block: The number of movements.
 * Return: The pointer where it remains after the movement.
 */

listint_t *jumps(listint_t *tmp, size_t block)
{
	size_t i = 0;

	while (i < block)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}

/**
 * list_linear_search - This function searches for a value in
 * an array of integers using the Linear search algorithm.
 * @low: The first element of the subarray.
 * @high: The last element of the subarray.
 * @value: Is the value to search for.
 * Return: A pointer to the first node where value is located.
 */

listint_t *list_linear_search(listint_t *low, listint_t *high, int value)
{
	while (low->n < high->n)
	{
		printf("Value checked at index [%ld] = [%d]\n", low->index, low->n);
		if (low->n == value)
			return (low);
		low = low->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", low->index, low->n);
	return (NULL);
}
