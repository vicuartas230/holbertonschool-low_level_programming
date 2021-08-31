#include "search_algos.h"

/**
 * advanced_binary - This function searches for a value in
 * a sorted array of integers.
 * @array: Is a pointer to the first element of the array to search in.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 * Return: The index where value is located.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (recursive_binary_search(array, size - 1, 0, value));
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
		if (array[middle] == value && array[middle - 1] != value)
			return (middle);
		else if (value < array[middle] && array[middle - 1] != value)
			return (recursive_binary_search(array, middle - 1, low, value));
		else if (value <= array[middle] && array[middle - 1] == value)
			return (recursive_binary_search(array, middle, low, value));
		return (recursive_binary_search(array, high, middle + 1, value));
	}
	return (-1);
}
