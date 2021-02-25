#include "holberton.h"

/**
 * _sqrt_recursion - This function returns the natural square root of a number.
 * @n: The number to operate
 * Return:  the natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (checking(n, 1));
}

/**
 * checking - This function checks if a number has square
 * @l: The evaluator
 * @m: The number to check
 * Return: The square root of the number
 */

int checking(int m, int l)
{
	if (l * l == m)
	{
		return (l);
	}
	else if (l * l > m)
	{
		return (-1);
	}
	else
	{
		return (checking(m, l + 1));
	}
}
