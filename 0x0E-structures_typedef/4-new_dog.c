#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - This function creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog owner.
 * Return: A new structure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog_t;

	dog_t = malloc(sizeof(struct dog));
	if (dog_t == NULL)
		return (NULL);
	dog_t->name = name;
	dog_t->age = age;
	dog_t->owner = owner;
	return (dog_t);
}
