#include "holberton.h"

/**
 * print_alphabet - This function prints the alphabet in lower case
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
