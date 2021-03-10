#include "function_pointers.h"

/**
 * int_index - This function searches for an integer.
 * @array: The array to check.
 * @size: The size of array.
 * @cmp: The pointer to the function.
 * Return: The integer found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
