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
	int block = 0;

	if (!array)
		return (-1);
	block = sqrt(size);
	while (!(array[i] <= value && value <= array[block]))
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = block;
		block += sqrt(size);
		if (block >= (int)size)
			break;
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value found between indexes [%ld] and [%d]\n", i, block);
	return (second_linear_search(array, i, block, size, value));
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
	while (low <= high)
	{
		if (array[low] == value)
		{
			printf("Value checked array[%d] = [%d]\n", low, array[low]);
			return (low);
		}
		if (low < (int)size)
			printf("Value checked array[%d] = [%d]\n", low, array[low]);
		low++;
	}
	if (low < (int)size)
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
	return (-1);
}
