#include "main.h"

/**
 * _islower:- print lower case alphabets
 *
 * Description:- incase of a lower character it returns (1)
 * @c: stores the variable
 *
 * Return: 1 if present, 0 if abscent
 */
int _islower(int c)
{
	if (c > 91 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
