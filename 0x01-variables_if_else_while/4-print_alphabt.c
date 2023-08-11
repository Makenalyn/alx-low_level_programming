#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: - program prints alphabet apart from q and e
 *
 * Return:0 - Success
 */

int main(void)
{
	char c = 97;

	do {
		putchar(c);
		c++;

		if (c == 'e' || c == 'q')
		{
			c++;
		}
	} while (c < 123);

	putchar ('\n');

	return (0);
}
