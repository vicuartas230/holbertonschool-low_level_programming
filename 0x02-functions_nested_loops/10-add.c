#include "holberton.h"

/**
 * add - This function prints the add of two integers
 *
 * @a: Integer to add
 *
 * @b: Integer to add
 *
 * Return: 0 (Success)
 */

int add(int a, int b)
{
	int suma;

	suma = a + b;
	if (suma < 10)
	{
		_putchar(suma + '0');
		return (suma);
	}
	else
	{
		return (suma);
	}
}
