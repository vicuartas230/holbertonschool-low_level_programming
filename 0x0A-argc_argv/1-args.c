#include <stdio.h>

/**
 * main - This program prints the number of arguments passed into it.
 * @argc: The number of arguments passed.
 * @argv: The arguments than the program receives.
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
