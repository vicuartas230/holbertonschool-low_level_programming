#include "holberton.h"

/**
 * print_line - This function print n lines
 *
 * @n: The number of the lines to print
 *
 * Return: (Success)
 */

void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		if (n == 0)
		{

			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
