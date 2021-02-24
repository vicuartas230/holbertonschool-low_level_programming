#include "holberton.h"

/**
 * _print_rev_recursion - This function prints a string in reverse
 * @s: The string to print
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	int c = 0;

	if (s[c] != '\0')
	{
		_print_rev_recursion(&(s[c + 1]));
		_putchar(s[c]);
		c++;
	}
}
