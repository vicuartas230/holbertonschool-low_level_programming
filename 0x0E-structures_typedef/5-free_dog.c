#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - This function frees dogs.
 * @d: The structure to free.
 * Return: Nothing.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	
}
