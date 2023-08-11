#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: - Program prints from a to z
 *
 * Return: 0 Success
 */

int main(void)
{
	char c = 97;

	do {
		putchar(c);
		c++;
	} while (c < 123);

	putchar('\n');

	return (0);
}

