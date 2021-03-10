#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - This function executes a function given as a parameter
 * on each element of an array.
 * @array: The array of elements.
 * @size: The size of the array.
 * @action: The pointer function.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
