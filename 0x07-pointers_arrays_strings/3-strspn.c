#include "holberton.h"

/**
 * _strspn - This function gets the lenght of a prefix substring
 * @s: The string to check
 * @accept: The bytes to get
 * Return: The number of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	unsigned int c = 0;

	for (a = 0; s[a] != '\0' && s[a] != ' '; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				c = c + 1;
				break;
			}
		}
	}
	return (c);
}
