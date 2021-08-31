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
	int position = 0, low = 0, high = size - 1;

	if (!array)
		return (-1);
	position = low + (((value - array[low]) *
	(high - low)) / (array[high] - array[low]));
	while (position < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", position, array[position]);
		if (value == array[position])
			return (position);
		if (array[position] > value)
		{
			low = position + 1;
			position = low + (((value - array[low]) *
			(high - low)) / (array[high] - array[low]));
		}
		if (array[position] < value)
		{
			high = position - 1;
			position = low + (((value - array[low]) *
			(high - low)) / (array[high] - array[low]));
		}
	}
	printf("Value checked array[%d] is out of range\n", position);
	return (-1);
}
