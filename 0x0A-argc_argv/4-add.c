#include <string.h>
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
	unsigned int c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		for (c = 0; c < strlen(argv[a]); c++)
		{
			if (argv[a][c] < '0' || argv[a][c] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		b = b + atoi(argv[a]);
	}
	printf("%d\n", b);
	return (0);
}
