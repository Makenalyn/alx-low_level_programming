#include "main.h"

/**
 * print_number - function prints an integer
 * @n: variable name
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int no = n;

	if (n < 0)
	{
		_putchar('-');
		no = -no;
	}
	if (no / 10)
	{
		print_number(no / 10);
	}
	_putchar(no % 10 + '0');
}
