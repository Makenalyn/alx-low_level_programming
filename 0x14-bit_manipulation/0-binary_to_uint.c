#include "main.h"
#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1' || b[i] == '0')
			result = (result << 1) | (b[i] - '0');
	}

	return(result);
}
