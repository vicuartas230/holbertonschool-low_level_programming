#include "holberton.h"

/**
 * string_toupper - This function prints a string in uppercase
 * @s: string to change
 * Return: 0 (Success)
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; ++a)
	{
		if (s[a] >= 97 && s[a] <= 122)
		{
			s[a] = s[a] - 32;
		}
	}
	return (s);
}
