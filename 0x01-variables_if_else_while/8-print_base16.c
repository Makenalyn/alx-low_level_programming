#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: - Program prints all numbers of base 16
 *
 * Return:0 Success
 */

int main(void)
{
	char c = 48;
	char y = 97;

	do {
		putchar (c);
		c++;
	} while (c < 58);

	do {
		putchar (y);
		y++;
	} while (y < 103);

	putchar('\n');

	return (0);
}

