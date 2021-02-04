#include <stdio.h>
/*
 *This code shows the alphabet in lowercase and uppercase
 */
int main(void)
{
	for (int a = 97; a < 123; a++)
	{
		putchar(a);
	}
	for (int b = 65; b < 91; b++)
	{
		putchar(b);
	}
	return (0);
}
