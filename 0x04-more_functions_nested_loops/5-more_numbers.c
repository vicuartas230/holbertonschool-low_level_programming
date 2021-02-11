#include "holberton.h"

/**
 * more_numbers - This function prints the numbers from 1 to 14
 *
 * Return: 0(Success)
 */

void more_numbers(void)
{
	int a, b;

	for (b = 0; b <= 10; b++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a < 10)
			{
				_putchar(a + '0');
			}
			else
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
		}
	_putchar('\n');
	}
}
