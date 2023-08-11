#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: - Program prints alphabet letters
 *
 * Return:0 Success
 */

int main(void)
{
	char c = 97;
	char y = 65;

	do {
		putchar(c);
		c++;
	} while (c < 123);

	do {
		putchar(y);
		y++;
	} while (y < 91);

	putchar ('\n');

	return (0);
}
