#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: name of arguments
 *
 * Return: (0) always success
 */
int main(int __attribute__((unused)) argc, char **argv)
{

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

		int b = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", b);
	}

	return (0);
}
