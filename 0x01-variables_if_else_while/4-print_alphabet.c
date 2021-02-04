#include <stdio.h>

/*
 *This code contains the alphabet without letters q and e
 */

int main(void)
{
	for (int a = 97; a < 123; a++)
		if (a != 113 && a != 101)
		{
			putchar(a);
		}
	return (0);
}
