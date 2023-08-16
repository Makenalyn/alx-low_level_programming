#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * description: computes abs value of any integer
 * @a: Variable name
 *
 * Return: a
 */
int _abs(int a)
{
	if (a < 0)
		a = a * -1;
	return (a);
}
