#include "holberton.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: 0 (Success)
 */

void times_table(void)
{
	int a, b, c;

	for (b = 0; b <= 9; b++)
	{
		for (c = 0; c <= 9; c++)
		{
			a = b * c;

			if (a < 10)
			{
				if (c > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(a + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
		}
		_putchar('\n');
		c = 0;
	}
}
