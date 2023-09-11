#include "dog.h"

/**
 * init_dog - initializes a structure dog
 * @name: pointer to name in the structure
 * @d: name of the structure
 * @age: age of the dog
 * @owner: The name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	(*d).owner = owner;
	}
}
