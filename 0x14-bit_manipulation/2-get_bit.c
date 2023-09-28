#include "main.h"

/**
 * get_bit - return the value of a bit at a given number
 * @n: parameter
 * @index: parameter
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
