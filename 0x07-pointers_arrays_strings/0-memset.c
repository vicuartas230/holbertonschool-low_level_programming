#include "holberton.h"

/**
 * _memset - This function fills memory with a constant byte
 * @s: The destination of the constant
 * @b: The constant to fill the memory
 * @n: The number of spaces to fill
 * Return: The pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		*(s + c) = b;
	}
	return (s);
}
