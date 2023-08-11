#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: - Program prints base 10 numbers
 *
 * Return:0 Success
 */

int main(void)
{
	char c = 48;

	do {
		putchar(c);
		c++;
	} while (c < 58);

	putchar ('\n');

	return (0);
}
