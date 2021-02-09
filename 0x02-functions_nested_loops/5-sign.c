#include "holberton.h"

/**
 * print_sign - This function prints if it is positive or negative
 *
 * @n: The character that the function prints
 *
 * Return: o (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
