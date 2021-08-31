#include "search_algos.h"

/**
 * exponential_search - This function searches for a value in
 * a sorted array of integers using the Interpolation search algorithm.
 * @array: Is a pointer to the first element of the array to search in.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 * Return: The first index where value is located.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t lower = 0, upper = 2;

	if (!array)
		return (-1);
	if (array[lower] == value)
		return (lower);
	lower++;
	while (!(array[lower] <= value && value <= array[upper]))
	{
		printf("Value checked array[%ld] = [%d]\n", lower, array[lower]);
		lower = upper;
		upper *= 2;
		if (upper >= size)
		{
			upper = size - 1;
			break;
		}
	}
	printf("Value checked array[%ld] = [%d]\n", lower, array[lower]);
	printf("Value found between indexes [%ld] and [%ld]\n", lower, upper);
	return (recursive_binary_search(array, upper, lower, value));
}

/**
 * recursive_binary_search - This function search a value using recursion.
 * @array: Is a pointer to the first element of the array to search in.
 * @high: The last position of the array or sub array.
 * @low: The first position of the array or sub array.
 * @value: Is the value to search for.
 * Return: The index where value is located.
 */

int recursive_binary_search(int *array, int high, int low, int value)
{
	int middle = 0, i = 0;
	char *empty = "", *sep = ", ";

	if (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%s", empty);
			printf("%d", array[i]);
			empty = sep;
		}
		printf("\n");
		middle = (high + low) / 2;
		if (array[middle] == value)
			return (middle);
		else if (value < array[middle])
			return (recursive_binary_search(array, middle - 1, low, value));
		return (recursive_binary_search(array, high, middle + 1, value));
	}
	return (-1);
}
