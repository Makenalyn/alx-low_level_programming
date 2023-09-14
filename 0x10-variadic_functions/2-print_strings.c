#include "variadic_functions.h"
#include <stdio.h>
#define EOF (-1)
	
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	for (i = 0; separator[i] != '\0'; i++)
	{
		putchar('\n');
	}

	if (separator == NULL)
	{
		return;
	}
	else 
	{
		while(1)
		{
			while(separator[i])
			{
				if (putchar(separator[i]) == EOF)
				{
					return EOF;
				}
				i++;
			}
			if (putchar('\n') == EOF)
			{
				return (EOF);
			}
			char string
		}
		char *string = va_arg(args, char*);
	}
	va_end(args);
}
