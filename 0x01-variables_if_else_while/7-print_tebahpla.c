#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: - Program prints lowercase in reverse
 *
 * Return:0 Success
 */

int main(void)
{
	char c = 122;

	do {
		putchar(c);
		c--;
	} while (c > 96);

	putchar ('\n');

	return (0);
}
