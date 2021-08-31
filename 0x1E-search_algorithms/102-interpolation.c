#include "search_algos.h"

/**
 * interpolation_search - This function searches for a value in
 * a sorted array of integers using the Interpolation search algorithm.
 * @array: Is a pointer to the first element of the array to search in.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 * Return: The first index where value is located.
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;
	size_t position = 0;

	if (!array)
		return (-1);
	position = low + (((double)(high - low)) /
	(array[high] - array[low]) * (value - array[low]));
	while (position < size)
	{
		printf("Value checked array[%ld] = [%d]\n", position, array[position]);
		if (value == array[position])
			return (position);
		if (array[position] < value)
		{
			low = position - 1;
			position = low + (((double)(high - low)) /
			(array[high] - array[low]) * (value - array[low]));
		}
		if (array[position] > value)
		{
			high = position + 1;
			position = low + (((double)(high - low)) /
			(array[high] - array[low]) * (value - array[low]));
		}
	}
	printf("Value checked array[%ld] is out of range\n", position);
	return (-1);
}
