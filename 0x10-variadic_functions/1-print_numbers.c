#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - This function prints numbers.
 * @separator: The character to separate each number.
 * @n: The number of numbers to print.
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(p, int));
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		printf("\n");
		va_end(p);
}
