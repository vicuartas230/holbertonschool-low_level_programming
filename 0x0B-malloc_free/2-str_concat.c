#include <stdlib.h>
#include <string.h>
#include "holberton.h"

/**
 * str_concat - This function concatenates two strings.
 * @s1: The main string.
 * @s2: The other string.
 * Return: A pointer to new string.
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, c, e, f = 0;
	char *d;

	if (s2 == '\0')
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{}
	for (b = 0; s2[b] != '\0'; b++)
	{}
	d = malloc((a + b + 1) * sizeof(char));
	if (d == '\0')
		return (NULL);
	for (c = 0; c < a; c++)
		d[c] = s1[c];
	for (e = c; e <= a + b; e++)
	{
		d[e] = s2[f];
		f++;
	}
	return (d);
}
