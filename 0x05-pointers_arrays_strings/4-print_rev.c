#include "holberton.h"
#include "2-strlen.c"

/**
 * print_rev - This function prints a string
 *
 * @s: The char to print
 *
 * Return: 0 (Success)
 */

void print_rev(char *s)
{
	int a;

	for (a = _strlen(s); a > 0; a--)
	{
		_putchar(s[a - 1]);
	}
	_putchar('\n');
}
