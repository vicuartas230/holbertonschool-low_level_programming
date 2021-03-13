#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct form - This struct define a data type formS.
 * @s: The argument of the function print_all.
 * @p: The pointer to functions to print data type.
 */

typedef struct form
{
	char *s;
	void (*p)();
} formS;

void print_all(const char * const format, ...);
void printC(va_list s);
void printI(va_list s);
void printS(va_list s);
void printF(va_list s);

#endif
