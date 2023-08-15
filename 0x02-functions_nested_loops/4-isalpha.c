#include "main.h"

/**
 * _isalpha - checks for an alphabetical character
 *
 * Description: - return (1) if character is present
 * @c: variable name
 *
 * Return: (0) if any, (1) if none
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
