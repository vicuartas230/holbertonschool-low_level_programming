#include "holberton.h"

/**
 * _strcat - This function concatenates two strings
 * @dest: The string to print
 * @src: The original string
 * Return: 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (b = 0; dest[b] != '\0'; ++b)
	{
	}
	for (a = 0; a <= b && src[a] != '\0'; ++a)
	{
		*(dest + (a + b)) = src[a];
	}
	dest[b + a] = '\0';
	return (dest);
}
