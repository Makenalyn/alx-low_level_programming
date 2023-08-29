#include "main.h"

/**
 * *_memset - fille a block of memory with constant bytes
 *
 * @s: pointer to memory block
 * @n: limits the number of characters in array
 * @b: number of bytes to be assigned
 *
 * Return: the pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
