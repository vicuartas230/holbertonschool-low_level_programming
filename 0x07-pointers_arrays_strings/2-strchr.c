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
	int a, d;
	char *b;

	for (d = 0; s[d] != '\0'; d++)
	{
	}
	for (a = 0; a < d; a++)
	{
		if (c == s[a])
		{
			b = &(s[a]);
			break;
		}
		else
		{
			b = '\0';
		}
	}
	return (b);
}
