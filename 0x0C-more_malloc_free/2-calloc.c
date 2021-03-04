#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - This function allocates memory for an array, using malloc.
 * @nmemb: The number of allocations of memory.
 * @size: The number of bytes of the string.
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;

	m = malloc(nmemb * sizeof(size));
	if (m == NULL)
		return (NULL);
	return (m);
}
