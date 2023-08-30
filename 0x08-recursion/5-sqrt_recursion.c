#include "main.h"

/**
 *  _sqrt_recursion - returns the sqrt of a number
 * @n: the number to find the sqrt of
 *
 * Return: sqtrt of the number
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (sqrtofn(0, n));
}

/**
 * sqrtofn - finds the squareroot of n
 * @n: parameter
 * @k: parameter
 *
 * Return: int
 */
int sqrtofn(int n, int k)
{
	if (n > k / 2)
		return (-1);
	else if (n * n == k)
		return (n);
	return (sqrtofn(n + 1, k));
}
