#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - This function prints anything.
 * @format: The format of arguments to print.
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	formS sign[] = {
		{"c", printC},
		{"i", printI},
		{"s", printS},
		{"f", printF},
		{NULL, NULL},
	};
	int a = 0, b;
	va_list ar;
	char *e = "", *f = ", ";

	va_start(ar, format);
	while (format[a] != '\0')
	{
		b = 0;
		while (sign[b].s != NULL)
		{
			if (format[a] == sign[b].s[0])
			{
				printf("%s", e);
				sign[b].p(ar);
				e = f;
			}
			b++;
		}
		a++;
	}
	printf("\n");
}

/**
 * printC - This function prints a character.
 * @ar: The character to print.
 * Return: Nothing.
 */

void printC(va_list ar)
{
	int a = va_arg(ar, int);

	printf("%c", a);
}

/**
 * printI - This function prints a integer.
 * @ar: The integer to print.
 * Return: Nothing.
 */

void printI(va_list ar)
{
	int a = va_arg(ar, int);

	printf("%d", a);
}

/**
 * printS - This function prints a String.
 * @ar: The string to print.
 * Return: Nothing.
 */

void printS(va_list ar)
{
	char *a = va_arg(ar, char *);

	if (a == NULL)
	{
		a = "(nil)";
	}
	printf("%s", a);
}

/**
 * printF - This function prints a float data type.
 * @ar: The number to print.
 * Return: Nothing.
 */

void printF(va_list ar)
{
	double a = va_arg(ar, double);

	printf("%f", a);
}
