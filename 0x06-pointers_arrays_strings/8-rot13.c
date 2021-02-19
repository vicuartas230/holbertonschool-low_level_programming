#include "holberton.h"

/**
 * rot13 - This function encodes a string to ROT13 code
 * @c: The string to encode
 * Return: 0 (Success)
 */

char *rot13(char *)
{
	int a, b;

	for (a = 0; c[a] != '\0'; a++)
	{
		if (c[a] >= 'a' && c[a] <= 'm' || c[a] >= 'A' && c[a] <= 'M')
		{
			c[a] = c[a] + 13;
		}
		else if (c[a] >= 'n' && c[a] <= 'z' || c[a] >= 'N' && c[a] <= 'Z')
		{
			c[a] = c[a] - 13;
		}
	}
	return (c);
}
