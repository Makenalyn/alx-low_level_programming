#include "dog.h"
#include <stdarg.h>
#include <string.h>

/**
 * new_dog - New structure dog
 * @name: Name of the new dog
 * @age: age of the dog
 * @owner: Owner of the dog
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	(*new_dog).name = strdup(name);
	(*new_dog).owner = strdup(owner);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}
