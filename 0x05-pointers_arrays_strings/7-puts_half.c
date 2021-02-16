#include "holberton.h"
#include "2-strlen.c"

/**
 * puts_half - This function prints half of a string
 *
 * @str: The string to print
 *
 * Return: 0 (Success)
 */

void puts_half(char *str)
{
	int a;

	if (_strlen(str) % 2 == 0)
	{
		for (a = _strlen(str) / 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
		_putchar('\n');
	}
	else
	{
		for (a = (_strlen(str) - 1) / 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
		_putchar('\n');
	}
}
