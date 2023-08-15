#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: - prints lowercase alphabets
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 97;

	while (c < 123)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
