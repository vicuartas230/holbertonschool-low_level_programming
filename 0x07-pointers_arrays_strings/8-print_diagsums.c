#include "holberton.h"

/**
 * print_diagsums - This function adds
 * two diagonals of square matrix of integers
 * @a: The matrix
 * @size: The size of array
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int c = 0, f = 0, r = 0, l = 0, e = size - 1;

	while (f < size)
	{
		r += *(a + c + f * size);
		l += *(a + c * size + e);
		f++;
		c++;
		e--;
	}
	printf("%d, %d\n", r, l);
}
