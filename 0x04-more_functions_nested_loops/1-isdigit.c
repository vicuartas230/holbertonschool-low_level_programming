#include "holberton.h"

/**
 * _isdigit - This function checks if it's a digit
 *
 * @c: The character to evaluate
 *
 * Return: 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
