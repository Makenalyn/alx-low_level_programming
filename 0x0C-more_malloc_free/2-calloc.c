#include "main.h"
#include <stdlib.h>
#include <string.h>
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
	void *mem;
	size_t tsize;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	tsize = (size_t)nmemb * size;

	mem = malloc(tsize);

	if (mem == NULL)
	{
		return (NULL);
	}

	memset(mem, 0, tsize);

	return (mem);
}
