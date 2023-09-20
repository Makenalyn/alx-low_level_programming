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
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}
