#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - This function concatenates all the arguments of your program.
 * @ac: The number of the arguments.
 * @av: The arguments.
 * Return: A pointer to a new string.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, acum = 1, l = 0, m;
	char *newString;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		acum += leng(av[i]);
	newString = malloc((acum + ac) * sizeof(char));
	if (newString == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; k < leng(av[j]); k++)
		{
			if (l < acum + (ac - 1))
			{
				newString[l] = av[j][k];
			}
			l++;
		}
		newString[l] = '\n';
		l++;
	}
	m = acum + ac;
	newString[m] = '\0';
	return (newString);
}
/**
 * leng - This function returns the lenght of a string
 * @a: The string
 * Return: The lenght of the string
 */

int leng(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{}

	return (i);
}
