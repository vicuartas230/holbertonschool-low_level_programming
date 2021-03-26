#include "holberton.h"

/**
 * binary_to_uint - This function converts a binary number to an unsigned int.
 * @b: The string with the number.
 * Return: The number converted.
 */

unsigned int binary_to_uint(const char *b)
{
	const char *t;
	unsigned int ac = 0;
	int p, i = 0;

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
	if (i == 1 && *b == '1')
		p = 1;
	else
		p = _pow(i);
	while (*b)
	{
		if (*b == '1')
		{
			ac += p;
			b++;
			p /= 2;
		}
		else
		{
			p /= 2;
			b++;
		}
	}
	return (ac);
}

/**
 * _pow - This function returns the power of 2 raised a number.
 * @a: The power number.
 * Return: The result of operation.
 */

int _pow(int a)
{
	int i = 1, res = 1;

	while (i < a)
	{
		res *= 2;
		i++;
	}
	return (res);
}
