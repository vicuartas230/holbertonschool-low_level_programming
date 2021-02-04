#include <stdio.h>

/*
 *This program prints the numbers from 00 to 99
 */

int main(void)
{
	for (int a = 0; a < 100; a++)
	{
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');
		putchar(44);
		putchar(32);
	}
	return (0);
}
