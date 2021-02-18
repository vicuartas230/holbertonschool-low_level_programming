#include "holberton.h"

/**
 * _strcat - This function concatenates two strings
 * @dest: The string to print
 * @src: The original string
 * Return: 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	unsigned int a, b;
	char *p;

	for (b = 0; src[b] != '\0'; ++b)
	{
	}
	b--;
	for (a = 0; a <= b + 1; ++a)
	{
		*(dest + (b + a)) = src[a];
	}
	dest[a + b] = '\0';
	p = dest;
	return (p);
}
