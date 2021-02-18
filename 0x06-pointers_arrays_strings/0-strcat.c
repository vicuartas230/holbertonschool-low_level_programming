#include "holberton.h"
#include <string.h>

/**
 * _strcat - This function concatenates two strings
 * @dest: The string to print
 * @src: The original string
 * Return: 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	unsigned int a, c;

	c = strlen(dest);
	for (a = 0; a < strlen(src); ++a)
	{
		*(dest + (c + a)) = src[a];
	}
	return (dest);
}
