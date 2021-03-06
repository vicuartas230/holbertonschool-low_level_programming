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
