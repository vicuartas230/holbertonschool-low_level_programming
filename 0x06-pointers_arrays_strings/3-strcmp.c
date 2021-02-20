#include "holberton.h"

/**
 * _strcmp - This function compares two strings
 * @s1: Character 1 to compare
 * @s2: Character 2 to compare
 * Return: 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int a, e;

	for (a = 0; s1[a] && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			e = (s1[a] - s2[a]);
			break;
		}
		else
		{
			e = (0);
		}
	}
	return (e);
}
