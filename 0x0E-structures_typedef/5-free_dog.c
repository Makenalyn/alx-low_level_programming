#include "dog.h"

/**
 * free_dog - frees the memory allocated to dog
 * @d: pointer to the structure dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).owner);
		free((*d).name);
		free(d);
	}
}
