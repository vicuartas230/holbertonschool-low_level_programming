#include "dog.h"

/**
 * init_dog - This function initialize a variable of type struct dog.
 * @d: The structure to use.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog owner.
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
