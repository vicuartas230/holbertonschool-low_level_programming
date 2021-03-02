#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - This function returns a pointer to a newly allocated
 * space in memory
 * @str: The string given
 * Return: A pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int a, b;
	char *c;

	if (str == '\0')
	{
		return (NULL);
	}
	for (b = 0; str[b] != '\0'; b++)
	{}
	c = malloc(b * sizeof(char) + 1);
	if (c == '\0')
	{
		c = NULL;
		return (c);
	}
	for (a = 0; a <= b; a++)
	{
		c[a] = str[a];
	}
	return (c);
}
