#include "holberton.h"

/**
 * clear_bit - This function sets the value of a bit
 * to 0 at a given index.
 * @n: The number to check.
 * @index: The position in the number where 0 is going to be set.
 * Return: 1 if it worked or -1 if not.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int a = 1 << index;

	if (index < 64)
	{
		*(n) = *n & ~a;
		return (1);
	}
	return (-1);
}
