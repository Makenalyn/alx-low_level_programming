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
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c == '9')
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}

	putchar ('\n');

	return (0);
}
