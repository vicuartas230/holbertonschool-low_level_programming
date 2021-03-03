#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - This function returns a pointer to a 2 dimensional
 * array of integers.
 * @width: The width of the array.
 * @height: The height of the array.
 * Return: The pointer to a 2 dimensional array.
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **m;

	if (width <= 0 || height <= 0)
		return (NULL);
	m = malloc(height * sizeof(int *));
	for (a = 0; a < height; a++)
		m[a] = malloc(width * sizeof(int));
	if (m == '\0')
		return (NULL);
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			m[a][b] = 0;

	return (m);
}
