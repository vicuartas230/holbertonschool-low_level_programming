#include "holberton.h"

/**
 * _pow_recursion - This function returns the value of x raised to the power y
 * @x: The number to be raised
 * @y: the number to which x is going to be raised
 * Return: The result of the operation
 */

int _pow_recursion(int x, int y)
{
	int p;

	if (y < 0)
		p = -1;
	if (y == 0)
		p = 1;
	if (y == 1)
		p = x;
	if (y > 0)
		p = _pow_recursion(x, (y - 1)) * x;
	return (p);
}
