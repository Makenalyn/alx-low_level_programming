#include "main.h"

/**
 * print_alphabet_x10 - prints lower case alphabet ten times
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	char c, i;

	i = '0';

	while (i <= '9')
	{
		c = 97;
		while (c < 123)
		{
			_putchar(c);
			c++;
		}
		i++;
		_putchar('\n');
	}
}
