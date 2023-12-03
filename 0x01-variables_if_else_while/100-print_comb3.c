#include <stdio.h>

/**
 * main:- Entry point
 *
 * Return: (0) on success
 */
int main(void)
{
	int i = 0;

	while (i < 99)
	{
		i++;

		if ((i / 10) == (i % 10))
			continue;

		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
