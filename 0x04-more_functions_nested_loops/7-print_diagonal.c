#include "holberton.h"

/**
 * print_diagonal - This function prints diagonal lines
 *
 * @n: The number of lines to print
 *
 * Return: 0(Success)
 */

void print_diagonal(int n)
{
	int a, b, e;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		e = 0;
		for (a = 1; a <= n; a++)
		{
			for (b = 0; b < e; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			e = e + 1;
		}
	}
}
