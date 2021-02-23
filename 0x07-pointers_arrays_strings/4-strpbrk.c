#include "holberton.h"

/**
 * _strpbrk - This function searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The string to search
 * Return: The string searched
 */

char *_strpbrk(char *s, char *accept)
{
	int b, c;

	for (b = 0; s[b] != '\0'; b++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[b] == accept[c])
			{
				return (&(s[b]))
			}
		}
	}
	return ('\0');
}
