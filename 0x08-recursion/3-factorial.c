#include "main.h"

/**
 * factorial - finds the factorial of a number
 * @n: the number to find factorial for
 *
 * Return:The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n  > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
