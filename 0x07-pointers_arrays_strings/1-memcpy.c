#include "holberton.h"

/**
 * _memcpy - This function copies memory area
 * @dest: The string to return
 * @src: The string is going to be copied
 * @n: The number of characters to copy
 * Return: The string finally copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(dest + a) = src[a];
	}
	return (dest);
}
