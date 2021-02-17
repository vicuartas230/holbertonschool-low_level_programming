#include "holberton.h"
#include "2-strlen.c"

/**
 * *_strcpy - This function copies the string pontied
 *
 * @dest: The destine of string
 *
 * @src: The source of string
 *
 * Return: 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; a <= _strlen(src); a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
