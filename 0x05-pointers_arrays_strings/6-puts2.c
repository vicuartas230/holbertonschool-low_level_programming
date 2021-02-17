#include "holberton.h"
#include "2-strlen.c"

/**
 * puts2 - This function prints every other character of a string
 *
 * @str: The character to print
 *
 * Return: 0 (Success)
 */

void puts2(char *str)
{
	int a;

	for (a = 0; a < _strlen(str); a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
