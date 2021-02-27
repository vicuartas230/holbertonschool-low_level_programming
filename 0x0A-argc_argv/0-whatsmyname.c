#include <stdio.h>

/**
 * main - This program prints its name
 * @argc: The counter of arguments
 * @argv: The vector
 * Return: 0 (Succes)
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	printf("%s\n", argv[a]);
	}
	return (0);
}
