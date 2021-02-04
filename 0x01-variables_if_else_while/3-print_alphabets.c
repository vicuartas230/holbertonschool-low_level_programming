#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 97; a < 123; a++)
	{
		putchar(a);
	}
	for (b = 65; b < 91; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
