#include "main.h"

/**
 * _isdigit - checks if @c is a digit
 * @c: variable name
 *
 * Return:(0)if present, else return (0)
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
