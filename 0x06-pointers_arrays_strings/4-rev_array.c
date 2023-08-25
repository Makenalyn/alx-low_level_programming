#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements of an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int var;

	for (i = n - 1; i > n / 2; i--)
	{
		var = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = var;
	}
}
