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
	int *arr, a, b;

	b = min;
	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (a = 0; a <= max - min; a++)
	{
		arr[a] = b;
		b++;
	}
	return (arr);
}
