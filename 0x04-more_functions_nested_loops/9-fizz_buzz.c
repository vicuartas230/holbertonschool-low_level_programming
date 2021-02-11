#include "holberton.h"

/**
 * main - Fizz-Buzz
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
			if (a < 100)
			{
				putchar(' ');
			}
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
			if (a < 100)
			{
				putchar(' ');
			}
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
			if (a < 100)
			{
				putchar(' ');
			}
		}
		else
		{
			printf("%d", a);
			if (a < 100)
			{
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
