#include "main.h"

/**
 * get_endianness -  a function that checks the endianness.
 *
 * Return: 1 if little endian
 */
int get_endianness(void)
{
	unsigned int value = 1;

	char *endian = (char *)&value;

	if (*endian)
		return (1);

	return (0);
}
