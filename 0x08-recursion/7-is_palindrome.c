#include "holberton.h"
#include "2-strlen_recursion.c"

/**
 * is_palindrome - This function returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: The char to check
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s) - 1;
	return (checkString(s, l, 0));
}

/**
 * checkString - This function check if the string is a palindrome
 * @s: The string to check
 * @size: The lenght of the string
 * @c: The iterator of the function
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int checkString(char *s, int size, int c)
{
	if (s[c] == s[size])
	{
		return (checkString(s, size - 1, c + 1));
	}
	else if (c > size)
	{
		return (1);
	}
	else if (s[c] != s[size])
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
