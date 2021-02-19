#include "holberton.h"

/**
 * _strncpy - This function copies a string
 * @dest: Where the string is copied
 * @src: The string to copy
 * @n: The number of characters to copy
 * Return: 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; ++a)
	{
		*(dest + a) = src[a];
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
