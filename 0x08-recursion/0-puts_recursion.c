#include "holberton.h"

/**
 * _puts_recursion - This function prints a string
 * @s: The string to print
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	int a = 0;

	if (s[a] == '\0')
	{
		_putchar('\n');
	}
	if (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
		_puts_recursion(&(s[a]));
	}
}
