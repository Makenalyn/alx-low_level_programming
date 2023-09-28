#include "main.h"

/**
 * binary_to_uint - converts a binary to uns number
 * @b: parameter
 *
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int len;
	int dec;

	result = 0;
	dec = 1;
	len = 0;

	if (!ifstring(b))
	{
		return (0);
	}

	while (b[len] != '\0')
	{
		len++;
	}

	while (len)
	{
		result += ((b[len - 1] - '0') * dec);
		dec *= 2;
		len--;
	}

	return (result);

}

/**
 * ifstring - checks if b is a string
 * @b: parameter
 *
 * Return: (1) if success
 */
int ifstring(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}

	return (1);

}
