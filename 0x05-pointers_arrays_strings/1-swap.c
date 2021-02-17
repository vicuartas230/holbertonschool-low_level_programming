#include "holberton.h"

/**
 * swap_int - this functions swaps two values
 *
 * @a: The integer
 *
 * @b: Another integer
 *
 * Return: 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *b;
	y = *a;
	*a = x;
	*b = y;
}
