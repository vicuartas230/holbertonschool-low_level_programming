#include "search_algos.h"

/**
 * jump_search - This function searches for a value in
 * a sorted array of integers using the Jump search algorithm.
 * @array: Is a pointer to the first element of the array to search in.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 * Return: The first index where value is located.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int block = sqrt(size), increase = block;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value >= array[i] && value <= array[increase])
		{
			printf("Value found between indexes [%ld] and [%d]\n", i, increase);
			return (second_linear_search(array, i, increase, size, value));
		}
		i += block;
		increase += block;
	}
	return (-1);
}

/**
 * second_linear_search - This function searches for a value in an
 * array of integers using the Linear search algorithm.
 * @array: Is a pointer to the first element of the array to search in.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 * @low: The first position of the subarray.
 * @high: The last position of the subarray.
 * Return: the first index where value is located.
 */

int second_linear_search(int *array, int low, int high, size_t size, int value)
{
	int i = low;

	while (i <= high && i < (int)size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i++;
	}
	return (-1);
}
