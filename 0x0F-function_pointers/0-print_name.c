#include "function_pointers.h"

/**
 * print_name - Prints name by invoking pointer to func
 * @name: parameter
 * @f: pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	int i;

	i = 0;

	for (i = 0; name[i] != '\0'; i++)
		;

	(*f)(name);
}
