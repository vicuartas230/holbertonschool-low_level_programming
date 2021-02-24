#include "holberton.h"

/**
 * _puts_recursion - This function prints a string
 * @s: The string to print
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	int a = 0;

	if (s[0] == '\0')
		_putchar('\0');
	_putchar(s[a]);
	a++;
	if (s[a] != '\0')
		_puts_recursion(&(s[a]));
	if (s[a] == '\0')
		_putchar('\n');
}
