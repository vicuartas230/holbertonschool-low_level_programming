#include "holberton.h"

/**
 * print_square - This function prints a square with #
 *
 * @size: The size of the square
 *
 * Return: (Success)
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			_putchar('#');
			for (b = 1; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
