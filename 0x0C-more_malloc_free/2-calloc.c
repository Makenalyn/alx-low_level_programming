#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _calloc - allocate memory size to an array
 * @nmemb: first parameter
 * @size: size of the array
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
	}

	return (mem);
}
