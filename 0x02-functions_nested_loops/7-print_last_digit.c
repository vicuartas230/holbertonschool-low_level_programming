#include "holberton.h"

/**
 * print_last_digit - This function prints the last digit of a number
 *
 * @a: The character to print
 *
 * Return: 0 (Success)
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
	{
		b = -b;
	}
	_putchar(b + 48);
	return (b);
}
