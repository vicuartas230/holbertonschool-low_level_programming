#include "holberton.h"

/**
 * _puts - This function prints a string to standar output
 *
 * @str: The string to print
 *
 * Return: 0 (Success)
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; ++i)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
