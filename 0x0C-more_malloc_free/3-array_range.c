#include "holberton.h"
#include "2-calloc.c"
#include <stdlib.h>

/**
 * array_range - This function creates an array of integers.
 * @min: lower limit.
 * @max: Upper limit.
 * Return: The array of integers.
 */

int *array_range(int min, int max)
{
	int *arr, a;

	if (min > max)
		return (NULL);
	arr = _calloc((max - min) + 1, sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (a = min; a <= max; a++)
		arr[a] = a;
	return (arr);
}
