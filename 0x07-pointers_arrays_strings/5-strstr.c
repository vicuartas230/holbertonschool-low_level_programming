#include "holberton.h"

/**
 * _strstr - This function locates a substring
 * @haystack: The string to point
 * @needle: The string to search
 * Return: The pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b, c, n;

	for (c = 0; needle[c] != '\0'; c++)
	{}
	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (needle[b] == haystack[a])
				n += 1;
			if (haystack[a] == ' ')
				n = 0;
			if (n == c)
				return (haystack + (a - b));
		}
	}
	if (needle[0] == '\0')
		return (&(needle[0]));
	else
		return ('\0');
}
