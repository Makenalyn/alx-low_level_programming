#include "main.h"

/**
 * _isupper - checks for uppercase alphabets
 * @c: variable name
 * Return:(1) if present, else otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
