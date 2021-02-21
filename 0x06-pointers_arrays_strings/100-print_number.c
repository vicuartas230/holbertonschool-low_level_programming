#include "holberton.h"

/**
 * print_number - This function prints a integer number
 * @n: The number to print
 * Return: Nothing
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 9 && n < 100)
	{
		_putchar(n / 10 + '0');
	}
	else if (n > 99 && n < 1000)
	{
		_putchar((n / 100) + '0');
		_putchar((n / 10) % 10 + '0');
	}
	else if (n > 999 && n < 10000)
	{
		_putchar(n / 1000 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
	}
	_putchar(n % 10 + '0');
}
