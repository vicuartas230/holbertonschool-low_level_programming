#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This structure storages the information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

int l(char *s);

void free_dog(dog_t *d);

#endif
