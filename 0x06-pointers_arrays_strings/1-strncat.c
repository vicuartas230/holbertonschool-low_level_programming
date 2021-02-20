#include "holberton.h"

/**
 * _strncat - This function concatenates two strings
 * @dest: The output string
 * @src: The input string
 * @n: Number of characters of src string
 * Return: 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (b = 0; dest[b] != '\0'; b++)
	{
	}

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[b + a] = src[a];
	}
	dest[b + a] = '\0';
	return (dest);
}
