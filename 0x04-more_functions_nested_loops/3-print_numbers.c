#include "holberton.h"

/**
 * print_numbers - This function prints numbers from 0 to 9
 *
 * Return: 0 (Success)
 */

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
