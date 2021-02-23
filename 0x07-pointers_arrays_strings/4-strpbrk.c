#include "holberton.h"

/**
 * _strpbrk - This function searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The string to search
 * Return: The string searched
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b, c, d;
	char *f;

	for (a = 0; s[a] != '\0'; a++)
	{}
	for (d = 0; accept[d] != '\0'; d++)
	{}
	for (b = 0; b < a; b++)
	{
		for (c = 0; c < d; c++)
		{
			if (s[b] == accept[c])
			{
				f = &(s[b]);
				b = a;
				break;
			}
		}
	}
	return (f);
}
