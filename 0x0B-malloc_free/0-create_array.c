#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array filling it with c characters
 * @size: size of the array
 * @c: fill the array with c characters
 *
 * Return: Array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int count = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array = malloc(size * sizeof(char));
		if (array == NULL)
		{
			return (NULL);
		}
		for (count = 0; count < size; count++)
		{
			array[count] = c;
		}
	}
	return (array);
}
