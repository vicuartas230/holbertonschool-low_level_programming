#include "holberton.h"

/**
 * _islower - Prints if some character is in lowercase
 *
 * @c: The character to print
 *
 * Return: 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
