#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers supplied as parameters
 * @separator: CHarater in between numbers
 * @n: last arg to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	for (i = 0; separator[i] != '\0'; i++)
		;

	if (separator == NULL)
	{
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d, %c", va_arg(args, int), i);
	}

	printf("\n");
	va_end(args);
}
