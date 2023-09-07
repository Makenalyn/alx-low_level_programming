#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - program allocates memory
 * @b: size of memory to be allocated
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *all;


	all = malloc(b);

	if (all == NULL)
	{
		exit(98);
	}

	return (all);
}
