#include "holberton.h"

/**
 * binary_to_uint - This function converts a binary number to an unsigned int.
 * @b: The string with the number.
 * Return: The number converted.
 */

unsigned int binary_to_uint(const char *b)
{
	const char *t;
	unsigned int ac = 0, i = 0;

	if (!b)
		return (0);
	t = b;
	while (*t)
	{
		if (*t < '0' || *t > '1')
			return (0);
		t++;
		i++;
	}
	while (*b)
	{
		if (*b == '1')
		{
			ac += 1 << (i - 1);
			b++;
			i--;
		}
		else
		{
			b++;
			i--;
		}
	}
	return (ac);
}
