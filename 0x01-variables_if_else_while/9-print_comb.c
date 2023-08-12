#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: - Program prints all single digit combination
 *
 * Return:0 Success
 */

int main(void)
{
	char c;
	char z = 44;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c == '9')
		{
			continue;
		}
		putchar(z);
		putchar(' ');
	}

	putchar ('\n');

	return (0);
}
