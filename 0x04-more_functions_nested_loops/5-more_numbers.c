#include "main.h"

/**
 * more_numbers - prints ten times the number
 *
 * Return: void
 */
void more_numbers(void)
{
	int h;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (h = 0; h <= 14; h++)
		{
		if (h > 9)
		{
		_putchar((h / 10) + '0');
		}
		_putchar((h % 10) + '0');
		}

	_putchar('\n');
	}
}
