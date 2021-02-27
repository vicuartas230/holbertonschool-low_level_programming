#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program adds positive numbers.
 * @argc: The number of elements of the array argv.
 * @argv: The vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b = 0;

	if (argc == 1 || argc == 2)
	{
		printf("0\n");
		return (1);
	}
	for (a = 1; a < argc; a++)
	{
		if (*argv[a] < '0' || *argv[a] > '9')
		{
			printf("Error\n");
			return (1);
		}
		b = b + atoi(argv[a]);
	}
	printf("%d\n", b);
	return (0);
}
