#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - This function creates an array of integers.
 * @min: lower limit.
 * @max: Upper limit.
 * Return: The array of integers.
 */

int *array_range(int min, int max)
{
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc((max - min) + 1 * sizeof(int));
	if (arr == NULL)
		return (NULL);
	return (arr);
}
