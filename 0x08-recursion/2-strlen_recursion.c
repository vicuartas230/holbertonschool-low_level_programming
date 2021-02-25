#include "holberton.h"

/**
 * _strlen_recursion - This function prints the lenght of a string
 * @s: The string to check
 * Return: The lenght of the string
 */

int _strlen_recursion(char *s)
{
	int a = 0, l = 0;

	if (s[a] != '\0')
	{
		l = 1 + _strlen_recursion(&(s[a + 1]));
	}
	return (l);
}
