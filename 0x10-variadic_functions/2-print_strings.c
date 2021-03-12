#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - This function prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings to be printed.
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *p;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char *);
		if (p == NULL)
			printf("nil");
		else
			printf("%s", p);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
