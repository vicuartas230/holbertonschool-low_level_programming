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
	arr = _calloc((max - min) + 1, sizeof(int));
	if (arr == NULL)
		return (NULL);
	return (arr);
}
/**
 * _calloc - This function allocates memory for an array, using malloc.
 * @nmemb: The number of allocations of memory.
 * @size: The number of bytes of the string.
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);
	if (m == NULL)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
		m[a] = 0;
	return (m);
}
