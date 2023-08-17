#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: (0) Success
 */
int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0 && k % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (k % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');

		}
		else if (k % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else
		{
			printf("%d", k);
			putchar(' ');
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
