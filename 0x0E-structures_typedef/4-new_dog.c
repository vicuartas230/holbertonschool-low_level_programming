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
	int i;
	dog_t *dog_c;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog_c = malloc(sizeof(dog_t));
	if (dog_c == NULL)
		return (NULL);
	dog_c->name = malloc(l(name) * sizeof(char));
	if (dog_c->name == NULL)
	{
		free(dog_c);
		return (NULL);
	}
	dog_c->owner = malloc(l(owner) * sizeof(char));
	if (dog_c->owner == NULL)
	{
		free(dog_c->name);
		free(dog_c);
		return (NULL);
	}
	for (i = 0; i < l(name); i++)
		dog_c->name[i] = name[i];
	for (i = 0; i < l(owner); i++)
		dog_c->owner[i] = owner[i];
	dog_c->age = age;
	return (dog_c);
}
/**
 * l - This function returns the length of the string.
 * @s: The string to meter.
 * Return: The length.
 */

int l(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i + 1);
}
