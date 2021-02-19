#include "holberton.h"

/**
 * reverse_array - This function prints an array in reverse
 * @a: The string to print
 * @n: The number the characters to print
 * Return: 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int i, j, k;
	int aux[20];

	j = 0;
	for (i = n - 1; i >= 0; --i)
	{
		*(aux + j) = a[i];
		j++;
	}
	for (k = 0; k < n; ++k)
	{
		*(a + k) = aux[k];
	}
}
