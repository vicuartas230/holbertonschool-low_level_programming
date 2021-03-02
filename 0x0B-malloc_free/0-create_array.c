#include "holberton.h"

/**
 * create_array - This function creates an array of chars.
 * @size: The size of the array.
 * @c: The char for the array.
 * Return: A pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int b, d;

	char *a;

	d = size * sizeof(char);
	if (size == 0)
	{
		return ('\0');
	}
	a = malloc(d);
	for (b = 0; b < d; b++)
	{
		a[b] = c;
	}
	return (a);
}
