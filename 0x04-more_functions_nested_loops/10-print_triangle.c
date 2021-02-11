#include "holberton.h"

/**
 * print_triangle - This function prints a triangle
 *
 * @size: The number of lines of the triangle
 *
 * Return: (Success)
 */

void print_triangle(int size)
{
	int a, b, e, c, f;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		e = size - 1;
		f = size - (size - 1);
		for (a = 1; a <= size; a++)
		{
			for (b = 0; b < e; b++)
			{
				_putchar(' ');
			}
			for (c = 0; c < f; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
			e = e - 1;
			f = f + 1;
		}
	}
}
