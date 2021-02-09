#include "holberton.h"

/**
 * print_to_98 - This funtion prints numbers until 98
 *
 * @n: the character to print
 *
 * Return: 0 (Success)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		int a;
		for (a = n; a <= 98; a++)
		{
			if (a < 10)
			{
				_putchar(a + '0');
				if (a < 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
				if (a < 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	else if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
	else if (n < 0)
	{
		int c;
		for (c = n; c <= 98 ; c++)
		{
			if (c < 0)
			{
				c = -c;
			}
			if (c < 10)
			{
				_putchar(c + '0');
				if (c < 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				if (c < 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
	else
	{
		int b;
		for (b = n; b >= 98; b--)
		{
			if (b < 10)
			{
				_putchar(b + '0');
				if (b > 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (b < 100)
			{
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
				if (b > 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((b / 100) + '0');
				_putchar(((b / 10) % 10) + '0');
				_putchar((b % 10) + '0');
				if (b > 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
