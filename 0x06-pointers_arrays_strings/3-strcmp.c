#include "holberton.h"

/**
 * _strcmp - This function compares two strings
 * @s1: Character 1 to compare
 * @s2: Character 2 to compare
 * Return: 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
		return (0);
	else
		return (s1 - s2);
}
