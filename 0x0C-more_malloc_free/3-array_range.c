#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocates memory for an array
 * @min: minimum number
 * @max: maximum number
 *
 * Return: returns a pointer to the memory allocated
 */
int *array_range(int min, int max)
{
	int *array;
	int inc = 0;
	int index = 0;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(*array) * ((max - min) + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (inc = min; inc <= max; inc++)
		{
			array[index] = inc;

			index++;
		}

	}
	return (array);
}
