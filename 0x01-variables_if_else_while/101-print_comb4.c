#include <stdio.h>

/**
 * main:- Entry point
 *
 * Return: (0) Always success
 */
int main(void)
{
	int i = 0;

	while (i < 1000)
	{
		i++;
		putchar(i / 100 + '0');
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(',');
		putchar(' ');

	}
	return (0);
}
