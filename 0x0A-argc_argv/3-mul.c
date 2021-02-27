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
	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
