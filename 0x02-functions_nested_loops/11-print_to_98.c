#include "holberton.h"

/**
 * print_to_98 - This funtion prints numbers until 98
 *
 * @n: the character to print
 *
 * Return: 0 (Success)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		int a;

		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
			if (a < 98)
			{
				printf(", ");
			}
		}
		putchar('\n');
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		int b;

		for (b = n; b >= 98; b--)
		{
			printf("%d", b);
			if (b > 98)
			{
				printf(", ");
			}
		}
		putchar('\n');
	}
}
