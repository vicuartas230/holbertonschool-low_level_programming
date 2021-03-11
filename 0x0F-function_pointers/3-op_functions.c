#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - This function returns the add of two integers.
 * @a: The integer 1.
 * @b: The integer 2.
 * Return: The add of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This function returns the subtraction of two integers.
 * @a: The integer 1.
 * @b: The integer 2.
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This function returns the product of two integers.
 * @a: The integer 1.
 * @b: The integer 2.
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This function returns the division of two integers.
 * @a: The integer 1.
 * @b: The integer 2.
 * Return: The division of a by b.
 */

int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}

/**
 * op_mod - This function returns the remainder of the division of two
 * integers.
 * @a: The integer 1.
 * @b: The integer 2.
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
