#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - This function allocates memory using malloc.
 * @b: Size of memory.
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b * sizeof(char));
	if (a == NULL)
		exit(98);
	return (a);
}
