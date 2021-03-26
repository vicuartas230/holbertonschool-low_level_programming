#include "holberton.h"

/**
 * set_bit - This function sets the velue of a bit
 * to 1 at a given index.
 * @n: The number to check.
 * @index: The position in the number where 1 is going to be set.
 * Return: 1 if it worked or -1 if not.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*(n) = *n | (1 << index);
	return (1);
}

