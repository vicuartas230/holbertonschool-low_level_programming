#include "holberton.h"
#include "2-strlen.c"

/**
 * rev_string - This function reverses a string
 *
 * @s: The character to reverse
 *
 * Return: 0 (Success)
 */

void rev_string(char *s)
{
	int i, j, k;

	char x[9];

	j = _strlen(s);
	j--;
	for (i = 0; s[i] != '\0'; ++i)
	{
		*(x + i) = s[j];
		j--;
	}
	for (k = 0; k < _strlen(s); k++)
	{
		*(s + k) = x[k];
	}
}
