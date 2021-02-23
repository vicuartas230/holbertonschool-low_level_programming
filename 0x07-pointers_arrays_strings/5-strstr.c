#include "holberton.h"

/**
 * _strstr - This function locates a substring
 * @haystack: The string to point
 * @needle: The string to search
 * Return: The pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; needle[a] != '\0'; a++)
	{
		for (b = 0; haystack[b] != '\0'; b++)
		{
			if (needle[a] == haystack[b])
			{
				return (&(needle[a]));
			}
		}
	}
	return ('\0');
}
