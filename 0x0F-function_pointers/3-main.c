#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point.
 * @ac: Number of arguments of av.
 * @av: The arguments taken.
 * Return: 0 (Success)
 */

int main(int ac, char *av[])
{
	int x, y, res;
	int (*m)(int a, int b);

	if (ac > 4 || ac < 4)
	{
		printf("Error\n");
		exit(98);
	}
	m = get_op_func(av[2]);
	if (m == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(av[1]);
	y = atoi(av[3]);
	res = (*m)(x, y);
	if (res == -1)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", res);
	return (0);
}
