#include "main.h"

/**
 * print_last_digit - function prints the last digit
 * @a: variable name
 *
 * Return: returns (a)
 */
int print_last_digit(int a)
{
	if (a < 0)
	{
		a = a * -1;
	}
	a = a % 10;
	_putchar(a + '0');
	return (a);
}
