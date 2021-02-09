#include "holberton.h"

/**
 * _abs - This function prints the absolute value
 *
 * @x: This character
 *
 * Return: 0 (Success)
 */

int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}

