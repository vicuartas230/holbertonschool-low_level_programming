#include "holberton.h"

/**
 * print_array - This function prints n characters of an array
 *
 * @a: The array to print
 *
 * @n: the number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; *(a + i) != '\0' && i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
