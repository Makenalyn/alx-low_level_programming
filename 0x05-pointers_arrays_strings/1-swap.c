#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: variable one
 * @b: variable two
 *
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
