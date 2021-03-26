#include "holberton.h"

/**
 * flip_bits - This function returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: The number to flip.
 * @m: The another number.
 * Return: The number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = (n ^ m);
	unsigned int i = 0;

	while (xor > 0)
	{
		i++;
		xor &= xor - 1;
	}
	return (i);
}
