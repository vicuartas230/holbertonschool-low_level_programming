#include "holberton.h"

/**
 * print_times_table - Prints the n tables
 *
 * @n: the character to print
 *
 * Return: 0 (Success)
 */

void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n < 16)
	{
		for (b = 0; b <= n; b++)
		{
			for (c = 0; c <= n; c++)
			{
				a = b * c;
				if (a < 10)
				{
					if (c > 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(a + '0');
				}
				else if (a >= 10 && a <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((a / 10) + '0');
					_putchar((a % 10) + '0');
				}
				else if (a > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((a / 100) + '0');
					_putchar(((a / 10) % 10) + '0');
					_putchar((a % 10) + '0');
				}
			}
			_putchar('\n');
			c = 0;
		}
	}
}
