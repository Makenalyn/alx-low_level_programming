#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - function prints anything
 * @format: The argument specifiers
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;

	va_list alargs;

	va_start(alargs, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == 'c')
		{
			char x = va_arg(alargs, int);

			printf("%c, ", x);
		}
		else if (format[i] == 'i')
		{
			int x = va_arg(alargs, int);

			printf("%d, ", x);
		}
		else if (format[i] == 'f')
		{
			float x = va_arg(alargs, double);

			printf("%f, ", x);
		}
	}
	printf("\n");

	va_end(alargs);

}
