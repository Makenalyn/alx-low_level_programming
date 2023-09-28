#include "main.h"

/**
 * flip_bits - flips bits
 * @n: parameter
 * @m: parameter
 *
 * Return: no of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flippedbit = n ^ m;
	int c = 0;

	while (flippedbiit)
	{
		if (flippedbit & 1)
			c++;
		flippedbit >>= 1;
	}
	return (c);
}
