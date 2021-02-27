#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program multiplies two numbers.
 * @argc: The number of elements of the array argv
 * @argv: The array
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b = 1;

	if (argc == 1)
	{
		printf("Error\n");
		return 0;
	}
	for (a = 1; a < argc; a++)
	{
		b = b * atoi(argv[a]);
	}
	printf("%d\n", b);
	return (0);
}
