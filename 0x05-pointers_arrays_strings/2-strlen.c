#include "holberton.h"

/**
 * _strlen - This function returns the length of a string
 *
 * @s: The character to print
 *
 * Return: 0 (Success)
 */

int _strlen(char *s)
{
	int i, a = 0;

	for (i = 0; *(s + i) != '\0'; ++i)
	{
		a = a + i;
	}
	return (i);
}
