#include "holberton.h"

/**
 * rot13 - This function encodes a string to ROT13 code
 * @c: The string to encode
 * Return: 0 (Success)
 */

char *rot13(char *c)
{
	int a, b;
	char *dig = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *cod = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; dig[b] && cod[b] != '\0'; b++)
		{
			if (c[a] == dig[b])
			{
				c[a] = cod[b];
				break;
			}
		}
	}
	return (c);
}
