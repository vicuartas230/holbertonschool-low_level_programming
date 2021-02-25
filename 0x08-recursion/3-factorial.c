#include "holberton.h"

/**
 * factorial - This function returns the factorial of a number
 * @n: The number to operate
 * Return: The factorial of n
 */

int factorial(signed int n)
{
	signed int f;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	f = n * factorial(n - 1);
	return (f);
}
