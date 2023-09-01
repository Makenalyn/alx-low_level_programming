#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: name of the argument variables
 *
 * Return: argument count
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	int i = 1;

	for (i = 1; i < argc; i++)
		;
	printf("%d\n", i - 1);

	return (0);
}

