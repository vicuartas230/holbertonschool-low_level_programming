#include "holberton.h"

/**
 * _isalpha - This funtion prints if a character is inside alphabet
 *
 * @c: Prints the character
 *
 * Return: o (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
