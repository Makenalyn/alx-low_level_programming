#include "main.h"

/**
 * print_binary - prints the binary form
 * @n: integer to convert to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
	}
	else if (n > 1)
	{
		print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
}
