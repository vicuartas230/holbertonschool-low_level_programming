#include "holberton.h"

/**
 * print_rev - This function prints a string
 *
 * @s: The char to print
 *
 * Return: 0 (Success)
 */

void print_rev(char *s)
{
	int a, b;

	for (a = 0; *(s + b) != '\0'; ++b);
	for (a = b; a > 0; a--)
	{
		_putchar(s[a - 1]);
	}
	_putchar('\n');
}
