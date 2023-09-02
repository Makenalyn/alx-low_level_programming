#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument name
 *
 * Return: (0)Success
 */
int main(int argc, char **argv)
{
	int i = 0;
	int k = 0;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (argv[i][k] < 48 || argv[i][k] > 57)
			{
				printf("Error\n");
				return (1);
			}

		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
