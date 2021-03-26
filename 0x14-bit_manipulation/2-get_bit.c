#include "holberton.h"

/**
 * get_bit - This function returns the value of a bit at a given index.
 * @n: The number to check.
 * @index: The position where look for the bit.
 * Return: The bit looked for.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n <= 1 && index < 1)
		return (n);
	while (n > 0)
	{
		if (index == i)
			return (n & 1);
		n = n >> 1;
		i++;
	}
	return (0);
}
