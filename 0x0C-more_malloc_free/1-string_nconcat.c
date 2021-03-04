#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - This function concatenates two strings.
 * @s1: The main string.
 * @s2: The string to concatenate.
 * @n: The number of bytes of s2 to concatenate.
 * Return: The string concatenated.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	char *newString;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n <= len(s2))
	{
		newString = malloc((len(s1) + n + 1) * sizeof(char));
		if (newString == NULL)
			return (NULL);
	}
	else
	{
		newString = malloc((len(s1) + len(s2) + 1) * sizeof(char));
		if (newString == NULL)
			return (NULL);
	}
	for (a = 0; a < len(s1); a++)
		newString[a] = s1[a];
	if (n <= len(s2))
		for (a = 0; a < n; a++)
			newString[len(s1) + a] = s2[a];
	else
		for (a = 0; a < len(s2); a++)
			newString[len(s1) + a] = s2[a];
	if (n <= len(s2))
		newString[len(s1) + n + 1] = '\0';
	else
		newString[len(s1) + len(s2) + 1] = '\0';
	return (newString);
}

/**
 * len - This function returns the length of a string.
 * @s: The string to check.
 * Return: The length of the string.
 */

unsigned int len(char *s)
{
	unsigned int a;

	for (a = 0; s[a] != '\0'; a++)
	{}
	return (a);
}
