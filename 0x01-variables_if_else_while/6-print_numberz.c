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
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	putchar ('\n');

	return (0);
}
