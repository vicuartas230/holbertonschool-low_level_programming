#include "holberton.h"

/**
 * _strchr - This function locates a character in a string
 * @s: The string to check
 * @c: The character to locate
 * Return: A pointer to the first ocurrence of
 * the character c in the string s or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (c == s[a])
		{
			return (&(s[a]));
		}
	}
	if (c == s[a])
	{
		return (&(s[a]));
	}
	return ('\0');
}
