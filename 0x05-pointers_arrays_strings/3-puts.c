#include "main.h"

/**
 * _puts - pronts a string on the std output
 * @str: parameter
 *
 * Retun: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
