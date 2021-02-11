#include "holberton.h"

/**
 * _isupper - This function prints if uppercase
 *
 * @c: The character to print
 *
 * Return: 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
