#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: - Program prints base ten numbers
 *
 * Return:0 Success
 */

int main(void)
{
	int num = 0;

	do {
		putchar(num);
		num++;
	} while (num < '9');

	putchar ('\n');

	return (0);
}
