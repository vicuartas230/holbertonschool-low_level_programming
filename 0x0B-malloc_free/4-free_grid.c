#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - This functionfrees a 2 dimensional grid.
 * @grid: The grid to free.
 * @height: The height of the grid.
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
}
